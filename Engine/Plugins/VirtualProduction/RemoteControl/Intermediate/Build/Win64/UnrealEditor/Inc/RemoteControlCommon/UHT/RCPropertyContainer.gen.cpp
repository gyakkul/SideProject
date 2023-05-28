// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RCPropertyContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCPropertyContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerBase();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerBase_NoRegister();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerRegistry();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_URCPropertyContainerRegistry_NoRegister();
	REMOTECONTROLCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FRCPropertyContainerKey();
	UPackage* Z_Construct_UPackage__Script_RemoteControlCommon();
// End Cross Module References
	void URCPropertyContainerBase::StaticRegisterNativesURCPropertyContainerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCPropertyContainerBase);
	UClass* Z_Construct_UClass_URCPropertyContainerBase_NoRegister()
	{
		return URCPropertyContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_URCPropertyContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCPropertyContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyContainerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RCPropertyContainer.h" },
		{ "ModuleRelativePath", "Public/RCPropertyContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCPropertyContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCPropertyContainerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCPropertyContainerBase_Statics::ClassParams = {
		&URCPropertyContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_URCPropertyContainerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCPropertyContainerBase()
	{
		if (!Z_Registration_Info_UClass_URCPropertyContainerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCPropertyContainerBase.OuterSingleton, Z_Construct_UClass_URCPropertyContainerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCPropertyContainerBase.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UClass* StaticClass<URCPropertyContainerBase>()
	{
		return URCPropertyContainerBase::StaticClass();
	}
	URCPropertyContainerBase::URCPropertyContainerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCPropertyContainerBase);
	URCPropertyContainerBase::~URCPropertyContainerBase() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPropertyContainerKey;
class UScriptStruct* FRCPropertyContainerKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPropertyContainerKey, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("RCPropertyContainerKey"));
	}
	return Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.OuterSingleton;
}
template<> REMOTECONTROLCOMMON_API UScriptStruct* StaticStruct<FRCPropertyContainerKey>()
{
	return FRCPropertyContainerKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValueTypeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Minimal information needed to lookup a unique property container class */" },
		{ "ModuleRelativePath", "Public/RCPropertyContainer.h" },
		{ "ToolTip", "Minimal information needed to lookup a unique property container class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPropertyContainerKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewProp_ValueTypeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RCPropertyContainer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewProp_ValueTypeName = { "ValueTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyContainerKey, ValueTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewProp_ValueTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewProp_ValueTypeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewProp_ValueTypeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		&NewStructOps,
		"RCPropertyContainerKey",
		sizeof(FRCPropertyContainerKey),
		alignof(FRCPropertyContainerKey),
		Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPropertyContainerKey()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.InnerSingleton, Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPropertyContainerKey.InnerSingleton;
	}
	void URCPropertyContainerRegistry::StaticRegisterNativesURCPropertyContainerRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCPropertyContainerRegistry);
	UClass* Z_Construct_UClass_URCPropertyContainerRegistry_NoRegister()
	{
		return URCPropertyContainerRegistry::StaticClass();
	}
	struct Z_Construct_UClass_URCPropertyContainerRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CachedContainerClasses_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedContainerClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedContainerClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedContainerClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCPropertyContainerRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyContainerRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A subsystem to provide and cache dynamically created PropertyContainer classes. */" },
		{ "IncludePath", "RCPropertyContainer.h" },
		{ "ModuleRelativePath", "Public/RCPropertyContainer.h" },
		{ "ToolTip", "A subsystem to provide and cache dynamically created PropertyContainer classes." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_ValueProp = { "CachedContainerClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_URCPropertyContainerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_Key_KeyProp = { "CachedContainerClasses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPropertyContainerKey, METADATA_PARAMS(nullptr, 0) }; // 3916842421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/RCPropertyContainer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses = { "CachedContainerClasses", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCPropertyContainerRegistry, CachedContainerClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_MetaData)) }; // 3916842421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCPropertyContainerRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCPropertyContainerRegistry_Statics::NewProp_CachedContainerClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCPropertyContainerRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCPropertyContainerRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCPropertyContainerRegistry_Statics::ClassParams = {
		&URCPropertyContainerRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCPropertyContainerRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyContainerRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCPropertyContainerRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCPropertyContainerRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCPropertyContainerRegistry()
	{
		if (!Z_Registration_Info_UClass_URCPropertyContainerRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCPropertyContainerRegistry.OuterSingleton, Z_Construct_UClass_URCPropertyContainerRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCPropertyContainerRegistry.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UClass* StaticClass<URCPropertyContainerRegistry>()
	{
		return URCPropertyContainerRegistry::StaticClass();
	}
	URCPropertyContainerRegistry::URCPropertyContainerRegistry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCPropertyContainerRegistry);
	URCPropertyContainerRegistry::~URCPropertyContainerRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ScriptStructInfo[] = {
		{ FRCPropertyContainerKey::StaticStruct, Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics::NewStructOps, TEXT("RCPropertyContainerKey"), &Z_Registration_Info_UScriptStruct_RCPropertyContainerKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPropertyContainerKey), 3916842421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCPropertyContainerBase, URCPropertyContainerBase::StaticClass, TEXT("URCPropertyContainerBase"), &Z_Registration_Info_UClass_URCPropertyContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCPropertyContainerBase), 2356596485U) },
		{ Z_Construct_UClass_URCPropertyContainerRegistry, URCPropertyContainerRegistry::StaticClass, TEXT("URCPropertyContainerRegistry"), &Z_Registration_Info_UClass_URCPropertyContainerRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCPropertyContainerRegistry), 2385247819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_354043990(TEXT("/Script/RemoteControlCommon"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
