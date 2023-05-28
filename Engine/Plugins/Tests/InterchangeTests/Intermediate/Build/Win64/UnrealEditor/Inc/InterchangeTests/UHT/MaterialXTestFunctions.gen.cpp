// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/MaterialXTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialXTestFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialXTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UMaterialXTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialXTestFunctions::execCheckInputConnected)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_UBOOL(Z_Param_bIsConnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialXTestFunctions::CheckInputConnected(Z_Param_MaterialInterface,Z_Param_InputName,Z_Param_bIsConnected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialXTestFunctions::execCheckConnectedInputCount)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialInterface);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UMaterialXTestFunctions::CheckConnectedInputCount(Z_Param_MaterialInterface,Z_Param_ExpectedNumber);
		P_NATIVE_END;
	}
	void UMaterialXTestFunctions::StaticRegisterNativesUMaterialXTestFunctions()
	{
		UClass* Class = UMaterialXTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckConnectedInputCount", &UMaterialXTestFunctions::execCheckConnectedInputCount },
			{ "CheckInputConnected", &UMaterialXTestFunctions::execCheckInputConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics
	{
		struct MaterialXTestFunctions_eventCheckConnectedInputCount_Parms
		{
			const UMaterialInterface* MaterialInterface;
			int32 ExpectedNumber;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckConnectedInputCount_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_MaterialInterface_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_ExpectedNumber = { "ExpectedNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckConnectedInputCount_Parms, ExpectedNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckConnectedInputCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_ExpectedNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of inputs are connected to the MX_StandardSurface material function */" },
		{ "DisplayName", "MX: Check Connected Input Count" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialXTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of inputs are connected to the MX_StandardSurface material function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialXTestFunctions, nullptr, "CheckConnectedInputCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::MaterialXTestFunctions_eventCheckConnectedInputCount_Parms), Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics
	{
		struct MaterialXTestFunctions_eventCheckInputConnected_Parms
		{
			const UMaterialInterface* MaterialInterface;
			FString InputName;
			bool bIsConnected;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static void NewProp_bIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckInputConnected_Parms, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckInputConnected_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_InputName_MetaData)) };
	void Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_bIsConnected_SetBit(void* Obj)
	{
		((MaterialXTestFunctions_eventCheckInputConnected_Parms*)Obj)->bIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialXTestFunctions_eventCheckInputConnected_Parms), &Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialXTestFunctions_eventCheckInputConnected_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_MaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_bIsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether a specific input of the MX_StandardSurface material function is connected or not */" },
		{ "DisplayName", "MX: Check Input Is Connected" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialXTestFunctions.h" },
		{ "ToolTip", "Check whether a specific input of the MX_StandardSurface material function is connected or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialXTestFunctions, nullptr, "CheckInputConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::MaterialXTestFunctions_eventCheckInputConnected_Parms), Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialXTestFunctions);
	UClass* Z_Construct_UClass_UMaterialXTestFunctions_NoRegister()
	{
		return UMaterialXTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialXTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialXTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialXTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialXTestFunctions_CheckConnectedInputCount, "CheckConnectedInputCount" }, // 1725473923
		{ &Z_Construct_UFunction_UMaterialXTestFunctions_CheckInputConnected, "CheckInputConnected" }, // 653487821
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialXTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/MaterialXTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/MaterialXTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialXTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialXTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialXTestFunctions_Statics::ClassParams = {
		&UMaterialXTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialXTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialXTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UMaterialXTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialXTestFunctions.OuterSingleton, Z_Construct_UClass_UMaterialXTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialXTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UMaterialXTestFunctions>()
	{
		return UMaterialXTestFunctions::StaticClass();
	}
	UMaterialXTestFunctions::UMaterialXTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialXTestFunctions);
	UMaterialXTestFunctions::~UMaterialXTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialXTestFunctions, UMaterialXTestFunctions::StaticClass, TEXT("UMaterialXTestFunctions"), &Z_Registration_Info_UClass_UMaterialXTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialXTestFunctions), 3053002835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_2800326330(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_MaterialXTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
