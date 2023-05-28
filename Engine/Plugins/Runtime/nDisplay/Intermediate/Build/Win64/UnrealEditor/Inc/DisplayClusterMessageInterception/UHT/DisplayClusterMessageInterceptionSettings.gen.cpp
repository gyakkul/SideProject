// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterMessageInterceptionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMessageInterceptionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTERMESSAGEINTERCEPTION_API UClass* Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings();
	DISPLAYCLUSTERMESSAGEINTERCEPTION_API UClass* Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_NoRegister();
	DISPLAYCLUSTERMESSAGEINTERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FMessageInterceptionSettings();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMessageInterception();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageInterceptionSettings;
class UScriptStruct* FMessageInterceptionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageInterceptionSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterMessageInterception(), TEXT("MessageInterceptionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERMESSAGEINTERCEPTION_API UScriptStruct* StaticStruct<FMessageInterceptionSettings>()
{
	return FMessageInterceptionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterceptMultiUserMessages_MetaData[];
#endif
		static void NewProp_bInterceptMultiUserMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptMultiUserMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageInterceptionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Interception Settings" },
		{ "Comment", "/** Indicates if message interception is enabled. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
		{ "ToolTip", "Indicates if message interception is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FMessageInterceptionSettings*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMessageInterceptionSettings), &Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages_MetaData[] = {
		{ "Category", "Interception Settings" },
		{ "Comment", "/** Indicates whether messages from multi user are intercepted. */" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
		{ "ToolTip", "Indicates whether messages from multi user are intercepted." },
	};
#endif
	void Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages_SetBit(void* Obj)
	{
		((FMessageInterceptionSettings*)Obj)->bInterceptMultiUserMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages = { "bInterceptMultiUserMessages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMessageInterceptionSettings), &Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_TimeoutSeconds_MetaData[] = {
		{ "Category", "Interception Settings" },
		{ "Comment", "/** Maximum seconds to keep intercepted message to be synchronized across cluster. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
		{ "ToolTip", "Maximum seconds to keep intercepted message to be synchronized across cluster." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMessageInterceptionSettings, TimeoutSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_TimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_TimeoutSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_bInterceptMultiUserMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewProp_TimeoutSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMessageInterception,
		nullptr,
		&NewStructOps,
		"MessageInterceptionSettings",
		sizeof(FMessageInterceptionSettings),
		alignof(FMessageInterceptionSettings),
		Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageInterceptionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.InnerSingleton, Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MessageInterceptionSettings.InnerSingleton;
	}
	void UDisplayClusterMessageInterceptionSettings::StaticRegisterNativesUDisplayClusterMessageInterceptionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMessageInterceptionSettings);
	UClass* Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_NoRegister()
	{
		return UDisplayClusterMessageInterceptionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterceptionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterceptionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMessageInterception,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayClusterMessageInterceptionSettings.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::NewProp_InterceptionSettings_MetaData[] = {
		{ "Category", "Interception Settings" },
		{ "Comment", "/**\n\x09 * Settings related to interception. \n\x09 * @note Settings from primary node will be synchronized across the cluster\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterMessageInterceptionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings related to interception.\n@note Settings from primary node will be synchronized across the cluster" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::NewProp_InterceptionSettings = { "InterceptionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterMessageInterceptionSettings, InterceptionSettings), Z_Construct_UScriptStruct_FMessageInterceptionSettings, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::NewProp_InterceptionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::NewProp_InterceptionSettings_MetaData)) }; // 1472144921
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::NewProp_InterceptionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMessageInterceptionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::ClassParams = {
		&UDisplayClusterMessageInterceptionSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMessageInterceptionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMessageInterceptionSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMessageInterceptionSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMESSAGEINTERCEPTION_API UClass* StaticClass<UDisplayClusterMessageInterceptionSettings>()
	{
		return UDisplayClusterMessageInterceptionSettings::StaticClass();
	}
	UDisplayClusterMessageInterceptionSettings::UDisplayClusterMessageInterceptionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMessageInterceptionSettings);
	UDisplayClusterMessageInterceptionSettings::~UDisplayClusterMessageInterceptionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ScriptStructInfo[] = {
		{ FMessageInterceptionSettings::StaticStruct, Z_Construct_UScriptStruct_FMessageInterceptionSettings_Statics::NewStructOps, TEXT("MessageInterceptionSettings"), &Z_Registration_Info_UScriptStruct_MessageInterceptionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageInterceptionSettings), 1472144921U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMessageInterceptionSettings, UDisplayClusterMessageInterceptionSettings::StaticClass, TEXT("UDisplayClusterMessageInterceptionSettings"), &Z_Registration_Info_UClass_UDisplayClusterMessageInterceptionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMessageInterceptionSettings), 1807726999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_1252232024(TEXT("/Script/DisplayClusterMessageInterception"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMessageInterceptor_Public_DisplayClusterMessageInterceptionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
