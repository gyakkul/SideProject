// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchboardProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchboardProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	SWITCHBOARDEDITOR_API UClass* Z_Construct_UClass_USwitchboardProjectSettings();
	SWITCHBOARDEDITOR_API UClass* Z_Construct_UClass_USwitchboardProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SwitchboardEditor();
// End Cross Module References
	DEFINE_FUNCTION(USwitchboardProjectSettings::execGetSwitchboardProjectSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USwitchboardProjectSettings**)Z_Param__Result=USwitchboardProjectSettings::GetSwitchboardProjectSettings();
		P_NATIVE_END;
	}
	void USwitchboardProjectSettings::StaticRegisterNativesUSwitchboardProjectSettings()
	{
		UClass* Class = USwitchboardProjectSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchboardProjectSettings", &USwitchboardProjectSettings::execGetSwitchboardProjectSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics
	{
		struct SwitchboardProjectSettings_eventGetSwitchboardProjectSettings_Parms
		{
			USwitchboardProjectSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SwitchboardProjectSettings_eventGetSwitchboardProjectSettings_Parms, ReturnValue), Z_Construct_UClass_USwitchboardProjectSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switchboard" },
		{ "Comment", "/** Get Project Settings object for Switchboard */" },
		{ "ModuleRelativePath", "Public/SwitchboardProjectSettings.h" },
		{ "ToolTip", "Get Project Settings object for Switchboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitchboardProjectSettings, nullptr, "GetSwitchboardProjectSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::SwitchboardProjectSettings_eventGetSwitchboardProjectSettings_Parms), Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwitchboardProjectSettings);
	UClass* Z_Construct_UClass_USwitchboardProjectSettings_NoRegister()
	{
		return USwitchboardProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_USwitchboardProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchboardOSCListener_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchboardOSCListener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchboardProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchboardEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USwitchboardProjectSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USwitchboardProjectSettings_GetSwitchboardProjectSettings, "GetSwitchboardProjectSettings" }, // 380397642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchboardProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SwitchboardProjectSettings.h" },
		{ "ModuleRelativePath", "Public/SwitchboardProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchboardProjectSettings_Statics::NewProp_SwitchboardOSCListener_MetaData[] = {
		{ "Category", "OSC" },
		{ "DisplayName", "Default Switchboard OSC Listener" },
		{ "ModuleRelativePath", "Public/SwitchboardProjectSettings.h" },
		{ "Tooltip", "The OSC listener for Switchboard. An OSC server can be started on launch via the Virtual Production Editor section of the Project Settings. Switchboard uses port 8000 by default, but this can be configured in your Switchboard config settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchboardProjectSettings_Statics::NewProp_SwitchboardOSCListener = { "SwitchboardOSCListener", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwitchboardProjectSettings, SwitchboardOSCListener), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USwitchboardProjectSettings_Statics::NewProp_SwitchboardOSCListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardProjectSettings_Statics::NewProp_SwitchboardOSCListener_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwitchboardProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchboardProjectSettings_Statics::NewProp_SwitchboardOSCListener,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchboardProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchboardProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwitchboardProjectSettings_Statics::ClassParams = {
		&USwitchboardProjectSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USwitchboardProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USwitchboardProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchboardProjectSettings()
	{
		if (!Z_Registration_Info_UClass_USwitchboardProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwitchboardProjectSettings.OuterSingleton, Z_Construct_UClass_USwitchboardProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwitchboardProjectSettings.OuterSingleton;
	}
	template<> SWITCHBOARDEDITOR_API UClass* StaticClass<USwitchboardProjectSettings>()
	{
		return USwitchboardProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchboardProjectSettings);
	USwitchboardProjectSettings::~USwitchboardProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwitchboardProjectSettings, USwitchboardProjectSettings::StaticClass, TEXT("USwitchboardProjectSettings"), &Z_Registration_Info_UClass_USwitchboardProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwitchboardProjectSettings), 3611559369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardProjectSettings_h_3040177002(TEXT("/Script/SwitchboardEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
