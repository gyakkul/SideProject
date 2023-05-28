// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetInputAxisKeyValue.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetInputAxisKeyValue() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputAxisKeyValue();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetInputAxisKeyValue::StaticRegisterNativesUK2Node_GetInputAxisKeyValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetInputAxisKeyValue);
	UClass* Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_NoRegister()
	{
		return UK2Node_GetInputAxisKeyValue::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetInputAxisKeyValue.h" },
		{ "Keywords", "Get" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisKeyValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisKeyValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey = { "InputAxisKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetInputAxisKeyValue, InputAxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Prevents actors with lower priority from handling this input\n" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisKeyValue.h" },
		{ "ToolTip", "Prevents actors with lower priority from handling this input" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_GetInputAxisKeyValue*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_GetInputAxisKeyValue), &Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should the binding gather input even when the game is paused\n" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisKeyValue.h" },
		{ "ToolTip", "Should the binding gather input even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_GetInputAxisKeyValue*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_GetInputAxisKeyValue), &Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_InputAxisKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::NewProp_bExecuteWhenPaused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetInputAxisKeyValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::ClassParams = {
		&UK2Node_GetInputAxisKeyValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetInputAxisKeyValue()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetInputAxisKeyValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetInputAxisKeyValue.OuterSingleton, Z_Construct_UClass_UK2Node_GetInputAxisKeyValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetInputAxisKeyValue.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetInputAxisKeyValue>()
	{
		return UK2Node_GetInputAxisKeyValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetInputAxisKeyValue);
	UK2Node_GetInputAxisKeyValue::~UK2Node_GetInputAxisKeyValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputAxisKeyValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputAxisKeyValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetInputAxisKeyValue, UK2Node_GetInputAxisKeyValue::StaticClass, TEXT("UK2Node_GetInputAxisKeyValue"), &Z_Registration_Info_UClass_UK2Node_GetInputAxisKeyValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetInputAxisKeyValue), 2297263480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputAxisKeyValue_h_3034580851(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputAxisKeyValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetInputAxisKeyValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
