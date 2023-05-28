// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_EaseFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EaseFunction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EaseFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EaseFunction_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPin();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomPin;
class UScriptStruct* FCustomPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPin, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("CustomPin"));
	}
	return Z_Registration_Info_UScriptStruct_CustomPin.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FCustomPin>()
{
	return FCustomPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallFuncPinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CallFuncPinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValuePin_MetaData[];
#endif
		static void NewProp_bValuePin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValuePin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UK2Node_EaseFunction\n" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "UK2Node_EaseFunction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "/** Name of the pin within the current node */" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the pin within the current node" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomPin, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData[] = {
		{ "Comment", "/** Name of the pin of the call function */" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the pin of the call function" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName = { "CallFuncPinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomPin, CallFuncPinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData[] = {
		{ "Comment", "/** If TRUE this is a custom pin that does come from the type of wildcard pin connected */" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "If TRUE this is a custom pin that does come from the type of wildcard pin connected" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_SetBit(void* Obj)
	{
		((FCustomPin*)Obj)->bValuePin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin = { "bValuePin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomPin), &Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"CustomPin",
		sizeof(FCustomPin),
		alignof(FCustomPin),
		Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPin()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomPin.InnerSingleton, Z_Construct_UScriptStruct_FCustomPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomPin.InnerSingleton;
	}
	void UK2Node_EaseFunction::StaticRegisterNativesUK2Node_EaseFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EaseFunction);
	UClass* Z_Construct_UClass_UK2Node_EaseFunction_NoRegister()
	{
		return UK2Node_EaseFunction::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EaseFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EaseFunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EaseFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EaseFunction.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData[] = {
		{ "Comment", "/** Name of the kismet ease function to be called */" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the kismet ease function to be called" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName = { "EaseFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_EaseFunction, EaseFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EaseFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EaseFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EaseFunction_Statics::ClassParams = {
		&UK2Node_EaseFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EaseFunction()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EaseFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EaseFunction.OuterSingleton, Z_Construct_UClass_UK2Node_EaseFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EaseFunction.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EaseFunction>()
	{
		return UK2Node_EaseFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EaseFunction);
	UK2Node_EaseFunction::~UK2Node_EaseFunction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ScriptStructInfo[] = {
		{ FCustomPin::StaticStruct, Z_Construct_UScriptStruct_FCustomPin_Statics::NewStructOps, TEXT("CustomPin"), &Z_Registration_Info_UScriptStruct_CustomPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomPin), 1160775310U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EaseFunction, UK2Node_EaseFunction::StaticClass, TEXT("UK2Node_EaseFunction"), &Z_Registration_Info_UClass_UK2Node_EaseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EaseFunction), 1513269418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_469576184(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
