// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Net/UnitTestPackageMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestPackageMap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestPackageMap();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestPackageMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestPackageMap::StaticRegisterNativesUUnitTestPackageMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestPackageMap);
	UClass* Z_Construct_UClass_UUnitTestPackageMap_NoRegister()
	{
		return UUnitTestPackageMap::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestPackageMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClient_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MinClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTestPackageMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPackageMapClient,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestPackageMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Package map override, for blocking the creation of actor channels for specific actors (by detecting the actor class being created)\n */" },
		{ "IncludePath", "Net/UnitTestPackageMap.h" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestPackageMap.h" },
		{ "ToolTip", "Package map override, for blocking the creation of actor channels for specific actors (by detecting the actor class being created)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestPackageMap_Statics::NewProp_MinClient_MetaData[] = {
		{ "Comment", "/** Cached reference to the minimal client that owns this package map */" },
		{ "ModuleRelativePath", "Classes/Net/UnitTestPackageMap.h" },
		{ "ToolTip", "Cached reference to the minimal client that owns this package map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTestPackageMap_Statics::NewProp_MinClient = { "MinClient", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestPackageMap, MinClient), Z_Construct_UClass_UMinimalClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnitTestPackageMap_Statics::NewProp_MinClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestPackageMap_Statics::NewProp_MinClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTestPackageMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestPackageMap_Statics::NewProp_MinClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestPackageMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestPackageMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestPackageMap_Statics::ClassParams = {
		&UUnitTestPackageMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTestPackageMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestPackageMap_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestPackageMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestPackageMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestPackageMap()
	{
		if (!Z_Registration_Info_UClass_UUnitTestPackageMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestPackageMap.OuterSingleton, Z_Construct_UClass_UUnitTestPackageMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestPackageMap.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestPackageMap>()
	{
		return UUnitTestPackageMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestPackageMap);
	UUnitTestPackageMap::~UUnitTestPackageMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestPackageMap, UUnitTestPackageMap::StaticClass, TEXT("UUnitTestPackageMap"), &Z_Registration_Info_UClass_UUnitTestPackageMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestPackageMap), 261237348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_3305922323(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_Net_UnitTestPackageMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
