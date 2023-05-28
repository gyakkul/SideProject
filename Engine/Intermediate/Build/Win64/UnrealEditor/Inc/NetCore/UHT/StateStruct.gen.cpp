// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Net/Core/Connection/StateStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateStruct() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig();
	NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig_NoRegister();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStateStruct();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateStruct;
class UScriptStruct* FStateStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("StateStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StateStruct.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FStateStruct>()
{
	return FStateStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct used for states, which is subclassed to define/implement custom states.\n */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Base struct used for states, which is subclassed to define/implement custom states." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName_MetaData[] = {
		{ "Comment", "/** The name of the state this config section represents (valid/usable during InitConfigDefaults) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "The name of the state this config section represents (valid/usable during InitConfigDefaults)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateStruct, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_StateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		&NewStructOps,
		"StateStruct",
		sizeof(FStateStruct),
		alignof(FStateStruct),
		Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton, Z_Construct_UScriptStruct_FStateStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateStruct.InnerSingleton;
	}
	void UStatePerObjectConfig::StaticRegisterNativesUStatePerObjectConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatePerObjectConfig);
	UClass* Z_Construct_UClass_UStatePerObjectConfig_NoRegister()
	{
		return UStatePerObjectConfig::StaticClass();
	}
	struct Z_Construct_UClass_UStatePerObjectConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerObjectConfigSection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerObjectConfigSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatePerObjectConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatePerObjectConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for loading and initializing state configuration\n */" },
		{ "IncludePath", "Net/Core/Connection/StateStruct.h" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Base class for loading and initializing state configuration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection_MetaData[] = {
		{ "Comment", "/** Overrides the config section name, using the CDO */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Overrides the config section name, using the CDO" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection = { "PerObjectConfigSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStatePerObjectConfig, PerObjectConfigSection), METADATA_PARAMS(Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether or not this state configuration instance is enabled (states will not load, if not) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/StateStruct.h" },
		{ "ToolTip", "Whether or not this state configuration instance is enabled (states will not load, if not)" },
	};
#endif
	void Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UStatePerObjectConfig*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStatePerObjectConfig), &Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_PerObjectConfigSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatePerObjectConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatePerObjectConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatePerObjectConfig_Statics::ClassParams = {
		&UStatePerObjectConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatePerObjectConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatePerObjectConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatePerObjectConfig()
	{
		if (!Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton, Z_Construct_UClass_UStatePerObjectConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton;
	}
	template<> NETCORE_API UClass* StaticClass<UStatePerObjectConfig>()
	{
		return UStatePerObjectConfig::StaticClass();
	}
	UStatePerObjectConfig::UStatePerObjectConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatePerObjectConfig);
	UStatePerObjectConfig::~UStatePerObjectConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ScriptStructInfo[] = {
		{ FStateStruct::StaticStruct, Z_Construct_UScriptStruct_FStateStruct_Statics::NewStructOps, TEXT("StateStruct"), &Z_Registration_Info_UScriptStruct_StateStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateStruct), 3178901809U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatePerObjectConfig, UStatePerObjectConfig::StaticClass, TEXT("UStatePerObjectConfig"), &Z_Registration_Info_UClass_UStatePerObjectConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatePerObjectConfig), 655951546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_3028047157(TEXT("/Script/NetCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
