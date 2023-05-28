// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptPluginComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptPluginComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptPluginComponent();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptPluginComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UScriptPluginComponent::execCallScriptFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CallScriptFunction(Z_Param_FunctionName);
		P_NATIVE_END;
	}
	void UScriptPluginComponent::StaticRegisterNativesUScriptPluginComponent()
	{
		UClass* Class = UScriptPluginComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallScriptFunction", &UScriptPluginComponent::execCallScriptFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics
	{
		struct ScriptPluginComponent_eventCallScriptFunction_Parms
		{
			FString FunctionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptPluginComponent_eventCallScriptFunction_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptPluginComponent_eventCallScriptFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptPluginComponent_eventCallScriptFunction_Parms), &Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Script|Functions" },
		{ "Comment", "/**\n\x09* Calls a script-defined function (no arguments)\n\x09* @param FunctionName Name of the function to call\n\x09*/" },
		{ "ModuleRelativePath", "Classes/ScriptPluginComponent.h" },
		{ "ToolTip", "Calls a script-defined function (no arguments)\n@param FunctionName Name of the function to call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptPluginComponent, nullptr, "CallScriptFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::ScriptPluginComponent_eventCallScriptFunction_Parms), Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptPluginComponent);
	UClass* Z_Construct_UClass_UScriptPluginComponent_NoRegister()
	{
		return UScriptPluginComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScriptPluginComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptPluginComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptPluginComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptPluginComponent_CallScriptFunction, "CallScriptFunction" }, // 3794594536
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptPluginComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Script" },
		{ "Comment", "/** \n * Script-extendable component class\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Object ActorComponent" },
		{ "IncludePath", "ScriptPluginComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScriptPluginComponent.h" },
		{ "ToolTip", "Script-extendable component class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptPluginComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptPluginComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptPluginComponent_Statics::ClassParams = {
		&UScriptPluginComponent::StaticClass,
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
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptPluginComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptPluginComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptPluginComponent()
	{
		if (!Z_Registration_Info_UClass_UScriptPluginComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptPluginComponent.OuterSingleton, Z_Construct_UClass_UScriptPluginComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptPluginComponent.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<UScriptPluginComponent>()
	{
		return UScriptPluginComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptPluginComponent);
	UScriptPluginComponent::~UScriptPluginComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptPluginComponent, UScriptPluginComponent::StaticClass, TEXT("UScriptPluginComponent"), &Z_Registration_Info_UClass_UScriptPluginComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptPluginComponent), 2027404966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_3074387042(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
