// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptContextComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptContextComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContextComponent();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptContextComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UScriptContextComponent::execCallScriptFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallScriptFunction(Z_Param_FunctionName);
		P_NATIVE_END;
	}
	void UScriptContextComponent::StaticRegisterNativesUScriptContextComponent()
	{
		UClass* Class = UScriptContextComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallScriptFunction", &UScriptContextComponent::execCallScriptFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics
	{
		struct ScriptContextComponent_eventCallScriptFunction_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptContextComponent_eventCallScriptFunction_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptContext" },
		{ "Comment", "/**\n\x09* Calls a script-defined function (no arguments)\n\x09* @param FunctionName Name of the function to call\n\x09*/" },
		{ "ModuleRelativePath", "Classes/ScriptContextComponent.h" },
		{ "ToolTip", "Calls a script-defined function (no arguments)\n@param FunctionName Name of the function to call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptContextComponent, nullptr, "CallScriptFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::ScriptContextComponent_eventCallScriptFunction_Parms), Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptContextComponent);
	UClass* Z_Construct_UClass_UScriptContextComponent_NoRegister()
	{
		return UScriptContextComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScriptContextComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptContextComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptContextComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptContextComponent_CallScriptFunction, "CallScriptFunction" }, // 4131252728
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptContextComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Script-extendable component class\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "IncludePath", "ScriptContextComponent.h" },
		{ "ModuleRelativePath", "Classes/ScriptContextComponent.h" },
		{ "ToolTip", "Script-extendable component class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptContextComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptContextComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptContextComponent_Statics::ClassParams = {
		&UScriptContextComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptContextComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptContextComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptContextComponent()
	{
		if (!Z_Registration_Info_UClass_UScriptContextComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptContextComponent.OuterSingleton, Z_Construct_UClass_UScriptContextComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptContextComponent.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<UScriptContextComponent>()
	{
		return UScriptContextComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptContextComponent);
	UScriptContextComponent::~UScriptContextComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptContextComponent, UScriptContextComponent::StaticClass, TEXT("UScriptContextComponent"), &Z_Registration_Info_UClass_UScriptContextComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptContextComponent), 2187281800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_3131648259(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
