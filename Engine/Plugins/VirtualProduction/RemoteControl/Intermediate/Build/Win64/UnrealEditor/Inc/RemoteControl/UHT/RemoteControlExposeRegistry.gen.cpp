// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlExposeRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlExposeRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlExposeRegistry();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCEntityWrapper();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCEntityWrapper;
class UScriptStruct* FRCEntityWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCEntityWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCEntityWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCEntityWrapper, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCEntityWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RCEntityWrapper.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCEntityWrapper>()
{
	return FRCEntityWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCEntityWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper class used to serialize exposable entities in a generic way. */" },
		{ "ModuleRelativePath", "Private/RemoteControlExposeRegistry.h" },
		{ "ToolTip", "Wrapper class used to serialize exposable entities in a generic way." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCEntityWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RCEntityWrapper",
		sizeof(FRCEntityWrapper),
		alignof(FRCEntityWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCEntityWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_RCEntityWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCEntityWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCEntityWrapper.InnerSingleton;
	}
	void URemoteControlExposeRegistry::StaticRegisterNativesURemoteControlExposeRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlExposeRegistry);
	UClass* Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister()
	{
		return URemoteControlExposeRegistry::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlExposeRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedEntities_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedEntities_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ExposedEntities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelToIdCache_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LabelToIdCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelToIdCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LabelToIdCache;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExposedTypes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ExposedTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlExposeRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlExposeRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteControlExposeRegistry.h" },
		{ "ModuleRelativePath", "Private/RemoteControlExposeRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities_ElementProp = { "ExposedEntities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCEntityWrapper, METADATA_PARAMS(nullptr, 0) }; // 4140728467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities_MetaData[] = {
		{ "Comment", "/** Holds the exposed entities. */" },
		{ "ModuleRelativePath", "Private/RemoteControlExposeRegistry.h" },
		{ "ToolTip", "Holds the exposed entities." },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FRCEntityWrapper>::Value, "The structure 'FRCEntityWrapper' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities = { "ExposedEntities", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlExposeRegistry, ExposedEntities), METADATA_PARAMS(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities_MetaData)) }; // 4140728467
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_ValueProp = { "LabelToIdCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_Key_KeyProp = { "LabelToIdCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_MetaData[] = {
		{ "Comment", "/** Cache of label to ids. */" },
		{ "ModuleRelativePath", "Private/RemoteControlExposeRegistry.h" },
		{ "ToolTip", "Cache of label to ids." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache = { "LabelToIdCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlExposeRegistry, LabelToIdCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes_ElementProp = { "ExposedTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes_MetaData[] = {
		{ "Comment", "/** Holds the types of entities exposed in the registry. */" },
		{ "ModuleRelativePath", "Private/RemoteControlExposeRegistry.h" },
		{ "ToolTip", "Holds the types of entities exposed in the registry." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes = { "ExposedTypes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlExposeRegistry, ExposedTypes), METADATA_PARAMS(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlExposeRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedEntities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_LabelToIdCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlExposeRegistry_Statics::NewProp_ExposedTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlExposeRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlExposeRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlExposeRegistry_Statics::ClassParams = {
		&URemoteControlExposeRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlExposeRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlExposeRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlExposeRegistry()
	{
		if (!Z_Registration_Info_UClass_URemoteControlExposeRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlExposeRegistry.OuterSingleton, Z_Construct_UClass_URemoteControlExposeRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlExposeRegistry.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlExposeRegistry>()
	{
		return URemoteControlExposeRegistry::StaticClass();
	}
	URemoteControlExposeRegistry::URemoteControlExposeRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlExposeRegistry);
	URemoteControlExposeRegistry::~URemoteControlExposeRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ScriptStructInfo[] = {
		{ FRCEntityWrapper::StaticStruct, Z_Construct_UScriptStruct_FRCEntityWrapper_Statics::NewStructOps, TEXT("RCEntityWrapper"), &Z_Registration_Info_UScriptStruct_RCEntityWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCEntityWrapper), 4140728467U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlExposeRegistry, URemoteControlExposeRegistry::StaticClass, TEXT("URemoteControlExposeRegistry"), &Z_Registration_Info_UClass_URemoteControlExposeRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlExposeRegistry), 3831527850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_615883076(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
