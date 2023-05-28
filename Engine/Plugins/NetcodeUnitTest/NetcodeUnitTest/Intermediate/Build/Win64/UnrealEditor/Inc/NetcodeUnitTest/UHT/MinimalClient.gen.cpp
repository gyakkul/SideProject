// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimalClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UMinimalClient::StaticRegisterNativesUMinimalClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinimalClient);
	UClass* Z_Construct_UClass_UMinimalClient_NoRegister()
	{
		return UMinimalClient::StaticClass();
	}
	struct Z_Construct_UClass_UMinimalClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitNetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitNetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitConn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitConn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinimalClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for implementing a barebones/stripped-down game client, capable of connecting to a regular game server,\n * but stripped/locked-down so that the absolute minimum of client/server netcode functionality is executed, for connecting the client.\n */" },
		{ "IncludePath", "MinimalClient.h" },
		{ "ModuleRelativePath", "Classes/MinimalClient.h" },
		{ "ToolTip", "Base class for implementing a barebones/stripped-down game client, capable of connecting to a regular game server,\nbut stripped/locked-down so that the absolute minimum of client/server netcode functionality is executed, for connecting the client." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitWorld_MetaData[] = {
		{ "Comment", "/** Stores a reference to the created empty world, for execution and later cleanup */" },
		{ "ModuleRelativePath", "Classes/MinimalClient.h" },
		{ "ToolTip", "Stores a reference to the created empty world, for execution and later cleanup" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitWorld = { "UnitWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMinimalClient, UnitWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitNetDriver_MetaData[] = {
		{ "Comment", "/** Stores a reference to the created unit test net driver, for execution and later cleanup */" },
		{ "ModuleRelativePath", "Classes/MinimalClient.h" },
		{ "ToolTip", "Stores a reference to the created unit test net driver, for execution and later cleanup" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitNetDriver = { "UnitNetDriver", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMinimalClient, UnitNetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitNetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitConn_MetaData[] = {
		{ "Comment", "/** Stores a reference to the server connection */" },
		{ "ModuleRelativePath", "Classes/MinimalClient.h" },
		{ "ToolTip", "Stores a reference to the server connection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitConn = { "UnitConn", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMinimalClient, UnitConn), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitConn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitConn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinimalClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitNetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalClient_Statics::NewProp_UnitConn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinimalClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimalClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinimalClient_Statics::ClassParams = {
		&UMinimalClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMinimalClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalClient_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinimalClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinimalClient()
	{
		if (!Z_Registration_Info_UClass_UMinimalClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinimalClient.OuterSingleton, Z_Construct_UClass_UMinimalClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinimalClient.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UMinimalClient>()
	{
		return UMinimalClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimalClient);
	UMinimalClient::~UMinimalClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinimalClient, UMinimalClient::StaticClass, TEXT("UMinimalClient"), &Z_Registration_Info_UClass_UMinimalClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinimalClient), 341283530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_3253149675(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_MinimalClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
