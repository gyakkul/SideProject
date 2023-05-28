// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchboardEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchboardEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	SWITCHBOARDEDITOR_API UClass* Z_Construct_UClass_USwitchboardEditorSettings();
	SWITCHBOARDEDITOR_API UClass* Z_Construct_UClass_USwitchboardEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SwitchboardEditor();
// End Cross Module References
	DEFINE_FUNCTION(USwitchboardEditorSettings::execGetSwitchboardEditorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USwitchboardEditorSettings**)Z_Param__Result=USwitchboardEditorSettings::GetSwitchboardEditorSettings();
		P_NATIVE_END;
	}
	void USwitchboardEditorSettings::StaticRegisterNativesUSwitchboardEditorSettings()
	{
		UClass* Class = USwitchboardEditorSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchboardEditorSettings", &USwitchboardEditorSettings::execGetSwitchboardEditorSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics
	{
		struct SwitchboardEditorSettings_eventGetSwitchboardEditorSettings_Parms
		{
			USwitchboardEditorSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SwitchboardEditorSettings_eventGetSwitchboardEditorSettings_Parms, ReturnValue), Z_Construct_UClass_USwitchboardEditorSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Switchboard" },
		{ "Comment", "/** Get Editor Settings object for Switchboard */" },
		{ "ModuleRelativePath", "Public/SwitchboardEditorSettings.h" },
		{ "ToolTip", "Get Editor Settings object for Switchboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitchboardEditorSettings, nullptr, "GetSwitchboardEditorSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::SwitchboardEditorSettings_eventGetSwitchboardEditorSettings_Parms), Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwitchboardEditorSettings);
	UClass* Z_Construct_UClass_USwitchboardEditorSettings_NoRegister()
	{
		return USwitchboardEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USwitchboardEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualEnvironmentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualEnvironmentPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerCommandlineArguments_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListenerCommandlineArguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchboardEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchboardEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USwitchboardEditorSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USwitchboardEditorSettings_GetSwitchboardEditorSettings, "GetSwitchboardEditorSettings" }, // 1057966253
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchboardEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SwitchboardEditorSettings.h" },
		{ "ModuleRelativePath", "Public/SwitchboardEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_VirtualEnvironmentPath_MetaData[] = {
		{ "Category", "Switchboard" },
		{ "Comment", "/** Path to Switchboard's Python virtual environment, where third-party dependencies are installed. */" },
		{ "ModuleRelativePath", "Public/SwitchboardEditorSettings.h" },
		{ "ToolTip", "Path to Switchboard's Python virtual environment, where third-party dependencies are installed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_VirtualEnvironmentPath = { "VirtualEnvironmentPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwitchboardEditorSettings, VirtualEnvironmentPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_VirtualEnvironmentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_VirtualEnvironmentPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_ListenerCommandlineArguments_MetaData[] = {
		{ "Category", "Switchboard Listener" },
		{ "Comment", "/** Arguments that should be passed to the Switchboard Listener. */" },
		{ "ModuleRelativePath", "Public/SwitchboardEditorSettings.h" },
		{ "ToolTip", "Arguments that should be passed to the Switchboard Listener." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_ListenerCommandlineArguments = { "ListenerCommandlineArguments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwitchboardEditorSettings, ListenerCommandlineArguments), METADATA_PARAMS(Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_ListenerCommandlineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_ListenerCommandlineArguments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwitchboardEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_VirtualEnvironmentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitchboardEditorSettings_Statics::NewProp_ListenerCommandlineArguments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchboardEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchboardEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwitchboardEditorSettings_Statics::ClassParams = {
		&USwitchboardEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USwitchboardEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USwitchboardEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchboardEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchboardEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USwitchboardEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwitchboardEditorSettings.OuterSingleton, Z_Construct_UClass_USwitchboardEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwitchboardEditorSettings.OuterSingleton;
	}
	template<> SWITCHBOARDEDITOR_API UClass* StaticClass<USwitchboardEditorSettings>()
	{
		return USwitchboardEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchboardEditorSettings);
	USwitchboardEditorSettings::~USwitchboardEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwitchboardEditorSettings, USwitchboardEditorSettings::StaticClass, TEXT("USwitchboardEditorSettings"), &Z_Registration_Info_UClass_USwitchboardEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwitchboardEditorSettings), 3567885536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_1641596057(TEXT("/Script/SwitchboardEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Public_SwitchboardEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
