// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetRegistry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References
	void UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetRegistryImpl);
	UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister()
	{
		return UAssetRegistryImpl::StaticClass();
	}
	struct Z_Construct_UClass_UAssetRegistryImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetRegistryImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRegistry.h" },
		{ "ModuleRelativePath", "Private/AssetRegistry.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetRegistryImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetRegistry_NoRegister, (int32)VTABLE_OFFSET(UAssetRegistryImpl, IAssetRegistry), false },  // 2906030159
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetRegistryImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRegistryImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams = {
		&UAssetRegistryImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetRegistryImpl()
	{
		if (!Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton, Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetRegistryImpl.OuterSingleton;
	}
	template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistryImpl>()
	{
		return UAssetRegistryImpl::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAssetRegistryImpl)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRegistryImpl, UAssetRegistryImpl::StaticClass, TEXT("UAssetRegistryImpl"), &Z_Registration_Info_UClass_UAssetRegistryImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRegistryImpl), 65942614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_2049006675(TEXT("/Script/AssetRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AssetRegistry_Private_AssetRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
