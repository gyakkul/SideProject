// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolDMXSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolDMXSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROLPROTOCOLDMX_API UClass* Z_Construct_UClass_URemoteControlProtocolDMXSettings();
	REMOTECONTROLPROTOCOLDMX_API UClass* Z_Construct_UClass_URemoteControlProtocolDMXSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolDMX();
// End Cross Module References
	DEFINE_FUNCTION(URemoteControlProtocolDMXSettings::execGetOrCreateDefaultInputPortId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetOrCreateDefaultInputPortId();
		P_NATIVE_END;
	}
	void URemoteControlProtocolDMXSettings::StaticRegisterNativesURemoteControlProtocolDMXSettings()
	{
		UClass* Class = URemoteControlProtocolDMXSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOrCreateDefaultInputPortId", &URemoteControlProtocolDMXSettings::execGetOrCreateDefaultInputPortId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics
	{
		struct RemoteControlProtocolDMXSettings_eventGetOrCreateDefaultInputPortId_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlProtocolDMXSettings_eventGetOrCreateDefaultInputPortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "//~ End UObject interface\n" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlProtocolDMXSettings, nullptr, "GetOrCreateDefaultInputPortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::RemoteControlProtocolDMXSettings_eventGetOrCreateDefaultInputPortId_Parms), Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlProtocolDMXSettings);
	UClass* Z_Construct_UClass_URemoteControlProtocolDMXSettings_NoRegister()
	{
		return URemoteControlProtocolDMXSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputPortId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputPortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolDMX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteControlProtocolDMXSettings_GetOrCreateDefaultInputPortId, "GetOrCreateDefaultInputPortId" }, // 2621301873
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * DMX Remote Control Settings\n */" },
		{ "IncludePath", "RemoteControlProtocolDMXSettings.h" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMXSettings.h" },
		{ "ToolTip", "DMX Remote Control Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::NewProp_DefaultInputPortId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetOrCreateDefaultInputPortId" },
		{ "Category", "Mapping" },
		{ "Comment", "/** DMX Default Device */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMXSettings.h" },
		{ "ToolTip", "DMX Default Device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::NewProp_DefaultInputPortId = { "DefaultInputPortId", nullptr, (EPropertyFlags)0x0040000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlProtocolDMXSettings, DefaultInputPortId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::NewProp_DefaultInputPortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::NewProp_DefaultInputPortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::NewProp_DefaultInputPortId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlProtocolDMXSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::ClassParams = {
		&URemoteControlProtocolDMXSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlProtocolDMXSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteControlProtocolDMXSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlProtocolDMXSettings.OuterSingleton, Z_Construct_UClass_URemoteControlProtocolDMXSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlProtocolDMXSettings.OuterSingleton;
	}
	template<> REMOTECONTROLPROTOCOLDMX_API UClass* StaticClass<URemoteControlProtocolDMXSettings>()
	{
		return URemoteControlProtocolDMXSettings::StaticClass();
	}
	URemoteControlProtocolDMXSettings::URemoteControlProtocolDMXSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlProtocolDMXSettings);
	URemoteControlProtocolDMXSettings::~URemoteControlProtocolDMXSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMXSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMXSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlProtocolDMXSettings, URemoteControlProtocolDMXSettings::StaticClass, TEXT("URemoteControlProtocolDMXSettings"), &Z_Registration_Info_UClass_URemoteControlProtocolDMXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlProtocolDMXSettings), 3224734797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMXSettings_h_4211412267(TEXT("/Script/RemoteControlProtocolDMX"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMXSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMXSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
