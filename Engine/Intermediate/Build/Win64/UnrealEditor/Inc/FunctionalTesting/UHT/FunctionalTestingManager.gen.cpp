// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTestingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	DEFINE_FUNCTION(UFunctionalTestingManager::execRunAllFunctionalTests)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bNewLog);
		P_GET_UBOOL(Z_Param_bRunLooped);
		P_GET_PROPERTY(FStrProperty,Z_Param_FailedTestsReproString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFunctionalTestingManager::RunAllFunctionalTests(Z_Param_WorldContextObject,Z_Param_bNewLog,Z_Param_bRunLooped,Z_Param_FailedTestsReproString);
		P_NATIVE_END;
	}
	void UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager()
	{
		UClass* Class = UFunctionalTestingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAllFunctionalTests", &UFunctionalTestingManager::execRunAllFunctionalTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics
	{
		struct FunctionalTestingManager_eventRunAllFunctionalTests_Parms
		{
			UObject* WorldContextObject;
			bool bNewLog;
			bool bRunLooped;
			FString FailedTestsReproString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bNewLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLog;
		static void NewProp_bRunLooped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunLooped;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailedTestsReproString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bNewLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog = { "bNewLog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bRunLooped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped = { "bRunLooped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString = { "FailedTestsReproString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, FailedTestsReproString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FunctionalTesting" },
		{ "Comment", "/**\n\x09 * Triggers in sequence all functional tests found on the level.\n\x09 * @return true if any tests have been triggered\n\x09 */" },
		{ "CPP_Default_bNewLog", "true" },
		{ "CPP_Default_bRunLooped", "false" },
		{ "CPP_Default_FailedTestsReproString", "" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
		{ "ToolTip", "Triggers in sequence all functional tests found on the level.\n@return true if any tests have been triggered" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestingManager, nullptr, "RunAllFunctionalTests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FunctionalTestingManager_eventRunAllFunctionalTests_Parms), Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionalTestingManager);
	UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister()
	{
		return UFunctionalTestingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionalTestingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestsLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestsLeft;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSetupTests_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetupTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTestsComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTestsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsBegin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionalTestingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFunctionalTestingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests, "RunAllFunctionalTests" }, // 1241652908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner = { "TestsLeft", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft = { "TestsLeft", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, TestsLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner = { "AllTests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests = { "AllTests", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, AllTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests = { "OnSetupTests", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnSetupTests), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData)) }; // 3142850737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete = { "OnTestsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsComplete), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData)) }; // 3142850737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin = { "OnTestsBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsBegin), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData)) }; // 3142850737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionalTestingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams = {
		&UFunctionalTestingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionalTestingManager()
	{
		if (!Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton, Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFunctionalTestingManager>()
	{
		return UFunctionalTestingManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestingManager);
	UFunctionalTestingManager::~UFunctionalTestingManager() {}
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin = FName(TEXT("OnFunctionalTestingBegin"));
	void APhasedAutomationActorBase::OnFunctionalTestingBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin),NULL);
	}
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete = FName(TEXT("OnFunctionalTestingComplete"));
	void APhasedAutomationActorBase::OnFunctionalTestingComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete),NULL);
	}
	void APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase()
	{
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhasedAutomationActorBase);
	UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister()
	{
		return APhasedAutomationActorBase::StaticClass();
	}
	struct Z_Construct_UClass_APhasedAutomationActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhasedAutomationActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhasedAutomationActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin, "OnFunctionalTestingBegin" }, // 2016040226
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete, "OnFunctionalTestingComplete" }, // 1915822039
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhasedAutomationActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasedAutomationActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams = {
		&APhasedAutomationActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhasedAutomationActorBase()
	{
		if (!Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton, Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<APhasedAutomationActorBase>()
	{
		return APhasedAutomationActorBase::StaticClass();
	}
	APhasedAutomationActorBase::APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhasedAutomationActorBase);
	APhasedAutomationActorBase::~APhasedAutomationActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionalTestingManager, UFunctionalTestingManager::StaticClass, TEXT("UFunctionalTestingManager"), &Z_Registration_Info_UClass_UFunctionalTestingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionalTestingManager), 370112158U) },
		{ Z_Construct_UClass_APhasedAutomationActorBase, APhasedAutomationActorBase::StaticClass, TEXT("APhasedAutomationActorBase"), &Z_Registration_Info_UClass_APhasedAutomationActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhasedAutomationActorBase), 3727869187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_1243584738(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
