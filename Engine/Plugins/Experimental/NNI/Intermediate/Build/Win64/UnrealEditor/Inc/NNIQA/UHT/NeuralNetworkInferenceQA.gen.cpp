// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInferenceQA/Public/NeuralNetworkInferenceQA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetworkInferenceQA() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEURALNETWORKINFERENCEQA_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQA();
	NEURALNETWORKINFERENCEQA_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInferenceQA();
// End Cross Module References
	DEFINE_FUNCTION(UNeuralNetworkInferenceQA::execUnitTesting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNeuralNetworkInferenceQA::UnitTesting();
		P_NATIVE_END;
	}
	void UNeuralNetworkInferenceQA::StaticRegisterNativesUNeuralNetworkInferenceQA()
	{
		UClass* Class = UNeuralNetworkInferenceQA::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UnitTesting", &UNeuralNetworkInferenceQA::execUnitTesting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics
	{
		struct NeuralNetworkInferenceQA_eventUnitTesting_Parms
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
	void Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NeuralNetworkInferenceQA_eventUnitTesting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NeuralNetworkInferenceQA_eventUnitTesting_Parms), &Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuralNetworkInferenceQA" },
		{ "ModuleRelativePath", "Public/NeuralNetworkInferenceQA.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuralNetworkInferenceQA, nullptr, "UnitTesting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::NeuralNetworkInferenceQA_eventUnitTesting_Parms), Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetworkInferenceQA);
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQA_NoRegister()
	{
		return UNeuralNetworkInferenceQA::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceQA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeuralNetworkInferenceQA_UnitTesting, "UnitTesting" }, // 592678885
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * BP wrapper of FUnitTester. It contains the main functions to test this plugin.\n */" },
		{ "IncludePath", "NeuralNetworkInferenceQA.h" },
		{ "ModuleRelativePath", "Public/NeuralNetworkInferenceQA.h" },
		{ "ToolTip", "* BP wrapper of FUnitTester. It contains the main functions to test this plugin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetworkInferenceQA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::ClassParams = {
		&UNeuralNetworkInferenceQA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQA()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetworkInferenceQA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetworkInferenceQA.OuterSingleton, Z_Construct_UClass_UNeuralNetworkInferenceQA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetworkInferenceQA.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCEQA_API UClass* StaticClass<UNeuralNetworkInferenceQA>()
	{
		return UNeuralNetworkInferenceQA::StaticClass();
	}
	UNeuralNetworkInferenceQA::UNeuralNetworkInferenceQA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetworkInferenceQA);
	UNeuralNetworkInferenceQA::~UNeuralNetworkInferenceQA() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Public_NeuralNetworkInferenceQA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Public_NeuralNetworkInferenceQA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetworkInferenceQA, UNeuralNetworkInferenceQA::StaticClass, TEXT("UNeuralNetworkInferenceQA"), &Z_Registration_Info_UClass_UNeuralNetworkInferenceQA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetworkInferenceQA), 3919814625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Public_NeuralNetworkInferenceQA_h_1444293340(TEXT("/Script/NeuralNetworkInferenceQA"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Public_NeuralNetworkInferenceQA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_Private_NeuralNetworkInferenceQA_Public_NeuralNetworkInferenceQA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
