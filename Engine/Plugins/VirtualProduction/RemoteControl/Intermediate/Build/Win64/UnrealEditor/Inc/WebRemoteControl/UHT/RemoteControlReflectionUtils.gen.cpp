// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlReflectionUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlReflectionUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UClass* Z_Construct_UClass_UWebRCStructRegistry();
	WEBREMOTECONTROL_API UClass* Z_Construct_UClass_UWebRCStructRegistry_NoRegister();
// End Cross Module References
	void UWebRCStructRegistry::StaticRegisterNativesUWebRCStructRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebRCStructRegistry);
	UClass* Z_Construct_UClass_UWebRCStructRegistry_NoRegister()
	{
		return UWebRCStructRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UWebRCStructRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedStructs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedStructs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStructs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebRCStructRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebRCStructRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A subsystem to provide and cache dynamically created ustructs. */" },
		{ "IncludePath", "RemoteControlReflectionUtils.h" },
		{ "ModuleRelativePath", "Private/RemoteControlReflectionUtils.h" },
		{ "ToolTip", "A subsystem to provide and cache dynamically created ustructs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_ValueProp = { "CachedStructs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_Key_KeyProp = { "CachedStructs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_MetaData[] = {
		{ "Comment", "/** Map of cached structs. */" },
		{ "ModuleRelativePath", "Private/RemoteControlReflectionUtils.h" },
		{ "ToolTip", "Map of cached structs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs = { "CachedStructs", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebRCStructRegistry, CachedStructs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebRCStructRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebRCStructRegistry_Statics::NewProp_CachedStructs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebRCStructRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebRCStructRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebRCStructRegistry_Statics::ClassParams = {
		&UWebRCStructRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebRCStructRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebRCStructRegistry_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebRCStructRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebRCStructRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebRCStructRegistry()
	{
		if (!Z_Registration_Info_UClass_UWebRCStructRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebRCStructRegistry.OuterSingleton, Z_Construct_UClass_UWebRCStructRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebRCStructRegistry.OuterSingleton;
	}
	template<> WEBREMOTECONTROL_API UClass* StaticClass<UWebRCStructRegistry>()
	{
		return UWebRCStructRegistry::StaticClass();
	}
	UWebRCStructRegistry::UWebRCStructRegistry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebRCStructRegistry);
	UWebRCStructRegistry::~UWebRCStructRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlReflectionUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlReflectionUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebRCStructRegistry, UWebRCStructRegistry::StaticClass, TEXT("UWebRCStructRegistry"), &Z_Registration_Info_UClass_UWebRCStructRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebRCStructRegistry), 3675117894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlReflectionUtils_h_3535357661(TEXT("/Script/WebRemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlReflectionUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlReflectionUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
