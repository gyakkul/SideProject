// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TypedElementFrameworkTests.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementFrameworkTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceB();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceC();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	DEFINE_FUNCTION(ITestTypedElementInterfaceA::execSetDisplayName)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_PROPERTY(FTextProperty,Z_Param_InNewName);
		P_GET_UBOOL(Z_Param_bNotify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDisplayName(Z_Param_Out_InElementHandle,Z_Param_InNewName,Z_Param_bNotify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITestTypedElementInterfaceA::execGetDisplayName)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	void UTestTypedElementInterfaceA::StaticRegisterNativesUTestTypedElementInterfaceA()
	{
		UClass* Class = UTestTypedElementInterfaceA::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &ITestTypedElementInterfaceA::execGetDisplayName },
			{ "SetDisplayName", &ITestTypedElementInterfaceA::execSetDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics
	{
		struct TestTypedElementInterfaceA_eventGetDisplayName_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceA_eventGetDisplayName_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceA_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Testing" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTypedElementInterfaceA, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::TestTypedElementInterfaceA_eventGetDisplayName_Parms), Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics
	{
		struct TestTypedElementInterfaceA_eventSetDisplayName_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FText InNewName;
			bool bNotify;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InNewName;
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceA_eventSetDisplayName_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceA_eventSetDisplayName_Parms, InNewName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((TestTypedElementInterfaceA_eventSetDisplayName_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TestTypedElementInterfaceA_eventSetDisplayName_Parms), &Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TestTypedElementInterfaceA_eventSetDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TestTypedElementInterfaceA_eventSetDisplayName_Parms), &Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Testing" },
		{ "CPP_Default_bNotify", "true" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTypedElementInterfaceA, nullptr, "SetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::TestTypedElementInterfaceA_eventSetDisplayName_Parms), Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceA);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister()
	{
		return UTestTypedElementInterfaceA::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceA_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName, "GetDisplayName" }, // 4191094945
		{ &Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName, "SetDisplayName" }, // 1662659106
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestTypedElementInterfaceA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::ClassParams = {
		&UTestTypedElementInterfaceA::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceA>()
	{
		return UTestTypedElementInterfaceA::StaticClass();
	}
	UTestTypedElementInterfaceA::UTestTypedElementInterfaceA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceA);
	UTestTypedElementInterfaceA::~UTestTypedElementInterfaceA() {}
	DEFINE_FUNCTION(ITestTypedElementInterfaceB::execMarkAsTested)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MarkAsTested(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	void UTestTypedElementInterfaceB::StaticRegisterNativesUTestTypedElementInterfaceB()
	{
		UClass* Class = UTestTypedElementInterfaceB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MarkAsTested", &ITestTypedElementInterfaceB::execMarkAsTested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics
	{
		struct TestTypedElementInterfaceB_eventMarkAsTested_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceB_eventMarkAsTested_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TestTypedElementInterfaceB_eventMarkAsTested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TestTypedElementInterfaceB_eventMarkAsTested_Parms), &Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Testing" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTypedElementInterfaceB, nullptr, "MarkAsTested", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::TestTypedElementInterfaceB_eventMarkAsTested_Parms), Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceB);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister()
	{
		return UTestTypedElementInterfaceB::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested, "MarkAsTested" }, // 452959405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestTypedElementInterfaceB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::ClassParams = {
		&UTestTypedElementInterfaceB::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceB()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceB>()
	{
		return UTestTypedElementInterfaceB::StaticClass();
	}
	UTestTypedElementInterfaceB::UTestTypedElementInterfaceB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceB);
	UTestTypedElementInterfaceB::~UTestTypedElementInterfaceB() {}
	DEFINE_FUNCTION(ITestTypedElementInterfaceC::execGetIsTested)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsTested(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	void UTestTypedElementInterfaceC::StaticRegisterNativesUTestTypedElementInterfaceC()
	{
		UClass* Class = UTestTypedElementInterfaceC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsTested", &ITestTypedElementInterfaceC::execGetIsTested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics
	{
		struct TestTypedElementInterfaceC_eventGetIsTested_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestTypedElementInterfaceC_eventGetIsTested_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TestTypedElementInterfaceC_eventGetIsTested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TestTypedElementInterfaceC_eventGetIsTested_Parms), &Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Testing" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestTypedElementInterfaceC, nullptr, "GetIsTested", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::TestTypedElementInterfaceC_eventGetIsTested_Parms), Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceC);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister()
	{
		return UTestTypedElementInterfaceC::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested, "GetIsTested" }, // 616960651
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestTypedElementInterfaceC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::ClassParams = {
		&UTestTypedElementInterfaceC::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceC()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceC>()
	{
		return UTestTypedElementInterfaceC::StaticClass();
	}
	UTestTypedElementInterfaceC::UTestTypedElementInterfaceC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceC);
	UTestTypedElementInterfaceC::~UTestTypedElementInterfaceC() {}
	void UTestTypedElementInterfaceA_ImplTyped::StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceA_ImplTyped);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister()
	{
		return UTestTypedElementInterfaceA_ImplTyped::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementFrameworkTests.h" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister, (int32)VTABLE_OFFSET(UTestTypedElementInterfaceA_ImplTyped, ITestTypedElementInterfaceA), false },  // 2147703978
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestTypedElementInterfaceA_ImplTyped>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::ClassParams = {
		&UTestTypedElementInterfaceA_ImplTyped::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceA_ImplTyped>()
	{
		return UTestTypedElementInterfaceA_ImplTyped::StaticClass();
	}
	UTestTypedElementInterfaceA_ImplTyped::UTestTypedElementInterfaceA_ImplTyped(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceA_ImplTyped);
	UTestTypedElementInterfaceA_ImplTyped::~UTestTypedElementInterfaceA_ImplTyped() {}
	void UTestTypedElementInterfaceA_ImplUntyped::StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceA_ImplUntyped);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister()
	{
		return UTestTypedElementInterfaceA_ImplUntyped::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test untyped\n */" },
		{ "IncludePath", "TypedElementFrameworkTests.h" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
		{ "ToolTip", "Test untyped" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister, (int32)VTABLE_OFFSET(UTestTypedElementInterfaceA_ImplUntyped, ITestTypedElementInterfaceA), false },  // 2147703978
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestTypedElementInterfaceA_ImplUntyped>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::ClassParams = {
		&UTestTypedElementInterfaceA_ImplUntyped::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceA_ImplUntyped>()
	{
		return UTestTypedElementInterfaceA_ImplUntyped::StaticClass();
	}
	UTestTypedElementInterfaceA_ImplUntyped::UTestTypedElementInterfaceA_ImplUntyped(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceA_ImplUntyped);
	UTestTypedElementInterfaceA_ImplUntyped::~UTestTypedElementInterfaceA_ImplUntyped() {}
	void UTestTypedElementInterfaceBAndC_Typed::StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestTypedElementInterfaceBAndC_Typed);
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister()
	{
		return UTestTypedElementInterfaceBAndC_Typed::StaticClass();
	}
	struct Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test to two implementation in one object\n */" },
		{ "IncludePath", "TypedElementFrameworkTests.h" },
		{ "ModuleRelativePath", "Private/TypedElementFrameworkTests.h" },
		{ "ToolTip", "Test to two implementation in one object" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister, (int32)VTABLE_OFFSET(UTestTypedElementInterfaceBAndC_Typed, ITestTypedElementInterfaceB), false },  // 1112774352
			{ Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister, (int32)VTABLE_OFFSET(UTestTypedElementInterfaceBAndC_Typed, ITestTypedElementInterfaceC), false },  // 3871675043
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestTypedElementInterfaceBAndC_Typed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::ClassParams = {
		&UTestTypedElementInterfaceBAndC_Typed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed()
	{
		if (!Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton, Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTestTypedElementInterfaceBAndC_Typed>()
	{
		return UTestTypedElementInterfaceBAndC_Typed::StaticClass();
	}
	UTestTypedElementInterfaceBAndC_Typed::UTestTypedElementInterfaceBAndC_Typed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestTypedElementInterfaceBAndC_Typed);
	UTestTypedElementInterfaceBAndC_Typed::~UTestTypedElementInterfaceBAndC_Typed() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestTypedElementInterfaceA, UTestTypedElementInterfaceA::StaticClass, TEXT("UTestTypedElementInterfaceA"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceA), 2147703978U) },
		{ Z_Construct_UClass_UTestTypedElementInterfaceB, UTestTypedElementInterfaceB::StaticClass, TEXT("UTestTypedElementInterfaceB"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceB), 1112774352U) },
		{ Z_Construct_UClass_UTestTypedElementInterfaceC, UTestTypedElementInterfaceC::StaticClass, TEXT("UTestTypedElementInterfaceC"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceC), 3871675043U) },
		{ Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped, UTestTypedElementInterfaceA_ImplTyped::StaticClass, TEXT("UTestTypedElementInterfaceA_ImplTyped"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceA_ImplTyped), 124883588U) },
		{ Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped, UTestTypedElementInterfaceA_ImplUntyped::StaticClass, TEXT("UTestTypedElementInterfaceA_ImplUntyped"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceA_ImplUntyped), 726104004U) },
		{ Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed, UTestTypedElementInterfaceBAndC_Typed::StaticClass, TEXT("UTestTypedElementInterfaceBAndC_Typed"), &Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestTypedElementInterfaceBAndC_Typed), 1936816138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_800506819(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
