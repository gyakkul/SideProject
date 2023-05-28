// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_AScriptTestActor();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_AScriptTestActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(AScriptTestActor::execTestFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFactor);
		P_GET_UBOOL(Z_Param_bMultiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TestFunction(Z_Param_InValue,Z_Param_InFactor,Z_Param_bMultiply);
		P_NATIVE_END;
	}
	void AScriptTestActor::StaticRegisterNativesAScriptTestActor()
	{
		UClass* Class = AScriptTestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunction", &AScriptTestActor::execTestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics
	{
		struct ScriptTestActor_eventTestFunction_Parms
		{
			float InValue;
			float InFactor;
			bool bMultiply;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFactor;
		static void NewProp_bMultiply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptTestActor_eventTestFunction_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_InFactor = { "InFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptTestActor_eventTestFunction_Parms, InFactor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_bMultiply_SetBit(void* Obj)
	{
		((ScriptTestActor_eventTestFunction_Parms*)Obj)->bMultiply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_bMultiply = { "bMultiply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptTestActor_eventTestFunction_Parms), &Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_bMultiply_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptTestActor_eventTestFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_InFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_bMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ScriptTestActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScriptTestActor, nullptr, "TestFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::ScriptTestActor_eventTestFunction_Parms), Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScriptTestActor_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScriptTestActor_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScriptTestActor);
	UClass* Z_Construct_UClass_AScriptTestActor_NoRegister()
	{
		return AScriptTestActor::StaticClass();
	}
	struct Z_Construct_UClass_AScriptTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestBool_MetaData[];
#endif
		static void NewProp_TestBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TestBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScriptTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScriptTestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScriptTestActor_TestFunction, "TestFunction" }, // 1226126132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptTestActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Test Actor. To be removed at some point.\n*/" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "IncludePath", "ScriptTestActor.h" },
		{ "ModuleRelativePath", "Classes/ScriptTestActor.h" },
		{ "ToolTip", "Test Actor. To be removed at some point." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestString_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Classes/ScriptTestActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScriptTestActor, TestString), METADATA_PARAMS(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestValue_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Classes/ScriptTestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestValue = { "TestValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScriptTestActor, TestValue), METADATA_PARAMS(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Classes/ScriptTestActor.h" },
	};
#endif
	void Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool_SetBit(void* Obj)
	{
		((AScriptTestActor*)Obj)->TestBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool = { "TestBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AScriptTestActor), &Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScriptTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptTestActor_Statics::NewProp_TestBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScriptTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScriptTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScriptTestActor_Statics::ClassParams = {
		&AScriptTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScriptTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScriptTestActor_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScriptTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScriptTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScriptTestActor()
	{
		if (!Z_Registration_Info_UClass_AScriptTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScriptTestActor.OuterSingleton, Z_Construct_UClass_AScriptTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScriptTestActor.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<AScriptTestActor>()
	{
		return AScriptTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScriptTestActor);
	AScriptTestActor::~AScriptTestActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScriptTestActor, AScriptTestActor::StaticClass, TEXT("AScriptTestActor"), &Z_Registration_Info_UClass_AScriptTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScriptTestActor), 2402888029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_3391332273(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
