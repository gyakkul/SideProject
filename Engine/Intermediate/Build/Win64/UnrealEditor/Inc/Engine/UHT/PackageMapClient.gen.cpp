// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageMapClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient();
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPackageMapClient::StaticRegisterNativesUPackageMapClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackageMapClient);
	UClass* Z_Construct_UClass_UPackageMapClient_NoRegister()
	{
		return UPackageMapClient::StaticClass();
	}
	struct Z_Construct_UClass_UPackageMapClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageMapClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPackageMap,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PackageMapClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/PackageMapClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageMapClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageMapClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackageMapClient_Statics::ClassParams = {
		&UPackageMapClient::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageMapClient()
	{
		if (!Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton, Z_Construct_UClass_UPackageMapClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPackageMapClient>()
	{
		return UPackageMapClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageMapClient);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPackageMapClient)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPackageMapClient, UPackageMapClient::StaticClass, TEXT("UPackageMapClient"), &Z_Registration_Info_UClass_UPackageMapClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackageMapClient), 897200721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_1762822572(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
