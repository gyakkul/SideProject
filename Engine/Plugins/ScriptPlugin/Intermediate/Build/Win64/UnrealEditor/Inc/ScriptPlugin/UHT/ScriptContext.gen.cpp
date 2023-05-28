// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContext();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UScriptContext::execCallScriptFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallScriptFunction(Z_Param_FunctionName);
		P_NATIVE_END;
	}
	void UScriptContext::StaticRegisterNativesUScriptContext()
	{
		UClass* Class = UScriptContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallScriptFunction", &UScriptContext::execCallScriptFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics
	{
		struct ScriptContext_eventCallScriptFunction_Parms
		{
			FString FunctionName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptContext_eventCallScriptFunction_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptContext" },
		{ "ModuleRelativePath", "Classes/ScriptContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptContext, nullptr, "CallScriptFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::ScriptContext_eventCallScriptFunction_Parms), Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptContext_CallScriptFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptContext_CallScriptFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptContext);
	UClass* Z_Construct_UClass_UScriptContext_NoRegister()
	{
		return UScriptContext::StaticClass();
	}
	struct Z_Construct_UClass_UScriptContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptContext_CallScriptFunction, "CallScriptFunction" }, // 2417105407
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Script context subobject\n*/" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "IncludePath", "ScriptContext.h" },
		{ "ModuleRelativePath", "Classes/ScriptContext.h" },
		{ "ToolTip", "Script context subobject" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptContext_Statics::ClassParams = {
		&UScriptContext::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptContext()
	{
		if (!Z_Registration_Info_UClass_UScriptContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptContext.OuterSingleton, Z_Construct_UClass_UScriptContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptContext.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<UScriptContext>()
	{
		return UScriptContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptContext);
	UScriptContext::~UScriptContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptContext, UScriptContext::StaticClass, TEXT("UScriptContext"), &Z_Registration_Info_UClass_UScriptContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptContext), 3727447859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_1414535192(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
