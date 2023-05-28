// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExternalRpcRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalRpcRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EXTERNALRPCREGISTRY_API UClass* Z_Construct_UClass_UExternalRpcRegistry();
	EXTERNALRPCREGISTRY_API UClass* Z_Construct_UClass_UExternalRpcRegistry_NoRegister();
	EXTERNALRPCREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FExternalRouteDesc();
	EXTERNALRPCREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FExternalRouteInfo();
	EXTERNALRPCREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FExternalRpcArgumentDesc();
	UPackage* Z_Construct_UPackage__Script_ExternalRpcRegistry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc;
class UScriptStruct* FExternalRpcArgumentDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalRpcArgumentDesc, (UObject*)Z_Construct_UPackage__Script_ExternalRpcRegistry(), TEXT("ExternalRpcArgumentDesc"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.OuterSingleton;
}
template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<FExternalRpcArgumentDesc>()
{
	return FExternalRpcArgumentDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalRpcRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalRpcArgumentDesc>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExternalRpcRegistry,
		nullptr,
		&NewStructOps,
		"ExternalRpcArgumentDesc",
		sizeof(FExternalRpcArgumentDesc),
		alignof(FExternalRpcArgumentDesc),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalRpcArgumentDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.InnerSingleton, Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalRouteInfo;
class UScriptStruct* FExternalRouteInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalRouteInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalRouteInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalRouteInfo, (UObject*)Z_Construct_UPackage__Script_ExternalRpcRegistry(), TEXT("ExternalRouteInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalRouteInfo.OuterSingleton;
}
template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<FExternalRouteInfo>()
{
	return FExternalRouteInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalRouteInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalRpcRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalRouteInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExternalRpcRegistry,
		nullptr,
		&NewStructOps,
		"ExternalRouteInfo",
		sizeof(FExternalRouteInfo),
		alignof(FExternalRouteInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalRouteInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalRouteInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalRouteInfo.InnerSingleton, Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalRouteInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalRouteDesc;
class UScriptStruct* FExternalRouteDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalRouteDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalRouteDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalRouteDesc, (UObject*)Z_Construct_UPackage__Script_ExternalRpcRegistry(), TEXT("ExternalRouteDesc"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalRouteDesc.OuterSingleton;
}
template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<FExternalRouteDesc>()
{
	return FExternalRouteDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalRouteDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalRpcRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalRouteDesc>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExternalRpcRegistry,
		nullptr,
		&NewStructOps,
		"ExternalRouteDesc",
		sizeof(FExternalRouteDesc),
		alignof(FExternalRouteDesc),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalRouteDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalRouteDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalRouteDesc.InnerSingleton, Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalRouteDesc.InnerSingleton;
	}
	void UExternalRpcRegistry::StaticRegisterNativesUExternalRpcRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalRpcRegistry);
	UClass* Z_Construct_UClass_UExternalRpcRegistry_NoRegister()
	{
		return UExternalRpcRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UExternalRpcRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalRpcRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExternalRpcRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalRpcRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is designed to be a singleton that handles registry, maintenance, and cleanup of any REST endpoints exposed on the process \n * for use in communicating with the process externally. \n */" },
		{ "IncludePath", "ExternalRpcRegistry.h" },
		{ "ModuleRelativePath", "Public/ExternalRpcRegistry.h" },
		{ "ToolTip", "This class is designed to be a singleton that handles registry, maintenance, and cleanup of any REST endpoints exposed on the process\nfor use in communicating with the process externally." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalRpcRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalRpcRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalRpcRegistry_Statics::ClassParams = {
		&UExternalRpcRegistry::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExternalRpcRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalRpcRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalRpcRegistry()
	{
		if (!Z_Registration_Info_UClass_UExternalRpcRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalRpcRegistry.OuterSingleton, Z_Construct_UClass_UExternalRpcRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExternalRpcRegistry.OuterSingleton;
	}
	template<> EXTERNALRPCREGISTRY_API UClass* StaticClass<UExternalRpcRegistry>()
	{
		return UExternalRpcRegistry::StaticClass();
	}
	UExternalRpcRegistry::UExternalRpcRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalRpcRegistry);
	UExternalRpcRegistry::~UExternalRpcRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ScriptStructInfo[] = {
		{ FExternalRpcArgumentDesc::StaticStruct, Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics::NewStructOps, TEXT("ExternalRpcArgumentDesc"), &Z_Registration_Info_UScriptStruct_ExternalRpcArgumentDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalRpcArgumentDesc), 3535292417U) },
		{ FExternalRouteInfo::StaticStruct, Z_Construct_UScriptStruct_FExternalRouteInfo_Statics::NewStructOps, TEXT("ExternalRouteInfo"), &Z_Registration_Info_UScriptStruct_ExternalRouteInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalRouteInfo), 2786122936U) },
		{ FExternalRouteDesc::StaticStruct, Z_Construct_UScriptStruct_FExternalRouteDesc_Statics::NewStructOps, TEXT("ExternalRouteDesc"), &Z_Registration_Info_UScriptStruct_ExternalRouteDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalRouteDesc), 2558099691U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExternalRpcRegistry, UExternalRpcRegistry::StaticClass, TEXT("UExternalRpcRegistry"), &Z_Registration_Info_UClass_UExternalRpcRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalRpcRegistry), 4087709951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_3574049973(TEXT("/Script/ExternalRpcRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
