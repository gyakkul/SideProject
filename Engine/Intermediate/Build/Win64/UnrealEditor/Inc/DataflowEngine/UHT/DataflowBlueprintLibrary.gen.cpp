// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBlueprintLibrary();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References
	DEFINE_FUNCTION(UDataflowBlueprintLibrary::execEvaluateTerminalNodeByName)
	{
		P_GET_OBJECT(UDataflow,Z_Param_Dataflow);
		P_GET_PROPERTY(FNameProperty,Z_Param_TerminalNodeName);
		P_GET_OBJECT(UObject,Z_Param_ResultAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(Z_Param_Dataflow,Z_Param_TerminalNodeName,Z_Param_ResultAsset);
		P_NATIVE_END;
	}
	void UDataflowBlueprintLibrary::StaticRegisterNativesUDataflowBlueprintLibrary()
	{
		UClass* Class = UDataflowBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateTerminalNodeByName", &UDataflowBlueprintLibrary::execEvaluateTerminalNodeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics
	{
		struct DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms
		{
			UDataflow* Dataflow;
			FName TerminalNodeName;
			UObject* ResultAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dataflow;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TerminalNodeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_Dataflow = { "Dataflow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, Dataflow), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_TerminalNodeName = { "TerminalNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, TerminalNodeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_ResultAsset = { "ResultAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, ResultAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_Dataflow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_TerminalNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_ResultAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/**\n\x09* Find a specific terminal node by name evaluate it using a specific UObject\n\x09*/" },
		{ "Keywords", "Dataflow graph" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowBlueprintLibrary.h" },
		{ "ToolTip", "Find a specific terminal node by name evaluate it using a specific UObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataflowBlueprintLibrary, nullptr, "EvaluateTerminalNodeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms), Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowBlueprintLibrary);
	UClass* Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister()
	{
		return UDataflowBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName, "EvaluateTerminalNodeByName" }, // 600788129
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::ClassParams = {
		&UDataflowBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton;
	}
	template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowBlueprintLibrary>()
	{
		return UDataflowBlueprintLibrary::StaticClass();
	}
	UDataflowBlueprintLibrary::UDataflowBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowBlueprintLibrary);
	UDataflowBlueprintLibrary::~UDataflowBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowBlueprintLibrary, UDataflowBlueprintLibrary::StaticClass, TEXT("UDataflowBlueprintLibrary"), &Z_Registration_Info_UClass_UDataflowBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowBlueprintLibrary), 2369092120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_3489512065(TEXT("/Script/DataflowEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
