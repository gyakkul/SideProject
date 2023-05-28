// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/InterchangeResultImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeResultImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeResultImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeResultImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeResultImportTestFunctions::execCheckIfErrorOrWarningWasGenerated)
	{
		P_GET_OBJECT(UInterchangeResultsContainer,Z_Param_ResultsContainer);
		P_GET_OBJECT(UClass,Z_Param_ErrorOrWarningClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UInterchangeResultImportTestFunctions::CheckIfErrorOrWarningWasGenerated(Z_Param_ResultsContainer,Z_Param_ErrorOrWarningClass);
		P_NATIVE_END;
	}
	void UInterchangeResultImportTestFunctions::StaticRegisterNativesUInterchangeResultImportTestFunctions()
	{
		UClass* Class = UInterchangeResultImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfErrorOrWarningWasGenerated", &UInterchangeResultImportTestFunctions::execCheckIfErrorOrWarningWasGenerated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics
	{
		struct InterchangeResultImportTestFunctions_eventCheckIfErrorOrWarningWasGenerated_Parms
		{
			UInterchangeResultsContainer* ResultsContainer;
			TSubclassOf<UInterchangeResult>  ErrorOrWarningClass;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultsContainer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ErrorOrWarningClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ResultsContainer = { "ResultsContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeResultImportTestFunctions_eventCheckIfErrorOrWarningWasGenerated_Parms, ResultsContainer), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ErrorOrWarningClass = { "ErrorOrWarningClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeResultImportTestFunctions_eventCheckIfErrorOrWarningWasGenerated_Parms, ErrorOrWarningClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterchangeResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeResultImportTestFunctions_eventCheckIfErrorOrWarningWasGenerated_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ResultsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ErrorOrWarningClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the specified InterchangeResult was emitted during import */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/InterchangeResultImportTestFunctions.h" },
		{ "ToolTip", "Check whether the specified InterchangeResult was emitted during import" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeResultImportTestFunctions, nullptr, "CheckIfErrorOrWarningWasGenerated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::InterchangeResultImportTestFunctions_eventCheckIfErrorOrWarningWasGenerated_Parms), Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultImportTestFunctions);
	UClass* Z_Construct_UClass_UInterchangeResultImportTestFunctions_NoRegister()
	{
		return UInterchangeResultImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeResultImportTestFunctions_CheckIfErrorOrWarningWasGenerated, "CheckIfErrorOrWarningWasGenerated" }, // 1963203451
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/InterchangeResultImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/InterchangeResultImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::ClassParams = {
		&UInterchangeResultImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultImportTestFunctions.OuterSingleton, Z_Construct_UClass_UInterchangeResultImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeResultImportTestFunctions>()
	{
		return UInterchangeResultImportTestFunctions::StaticClass();
	}
	UInterchangeResultImportTestFunctions::UInterchangeResultImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultImportTestFunctions);
	UInterchangeResultImportTestFunctions::~UInterchangeResultImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeResultImportTestFunctions, UInterchangeResultImportTestFunctions::StaticClass, TEXT("UInterchangeResultImportTestFunctions"), &Z_Registration_Info_UClass_UInterchangeResultImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultImportTestFunctions), 3112586720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_3087590595(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_InterchangeResultImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
