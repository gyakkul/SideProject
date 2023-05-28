// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientUnitTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnitTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_ANUTActor_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UMinimalClient_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UProcessUnitTest();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UClientUnitTest::StaticRegisterNativesUClientUnitTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClientUnitTest);
	UClass* Z_Construct_UClass_UClientUnitTest_NoRegister()
	{
		return UClientUnitTest::StaticClass();
	}
	struct Z_Construct_UClass_UClientUnitTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedClientActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClientActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedClientActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClient_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MinClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitPC_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UnitPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitNUTActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UnitNUTActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitBeacon_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UnitBeacon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineBeaconClass_Private_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OnlineBeaconClass_Private;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientUnitTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProcessUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all unit tests depending upon a MinimalClient connecting to a server.\n * The MinimalClient handles creation/cleanup of an entire new UWorld, UNetDriver and UNetConnection, for fast unit testing.\n *\n * NOTE: See NUTEnum.h, for important flags for configuring unit tests and the minimal client.\n * \n * In subclasses, implement the unit test within the ExecuteClientUnitTest function (remembering to call parent)\n */" },
		{ "IncludePath", "ClientUnitTest.h" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "Base class for all unit tests depending upon a MinimalClient connecting to a server.\nThe MinimalClient handles creation/cleanup of an entire new UWorld, UNetDriver and UNetConnection, for fast unit testing.\n\nNOTE: See NUTEnum.h, for important flags for configuring unit tests and the minimal client.\n\nIn subclasses, implement the unit test within the ExecuteClientUnitTest function (remembering to call parent)" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors_Inner = { "AllowedClientActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors_MetaData[] = {
		{ "Comment", "/** Actors the server is allowed replicate to client (requires AllowActors flag). Use NotifyAllowNetActor for conditional allows. */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "Actors the server is allowed replicate to client (requires AllowActors flag). Use NotifyAllowNetActor for conditional allows." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors = { "AllowedClientActors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, AllowedClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_MinClient_MetaData[] = {
		{ "Comment", "/** The object which handles implementation of the minimal client */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "The object which handles implementation of the minimal client" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_MinClient = { "MinClient", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, MinClient), Z_Construct_UClass_UMinimalClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_MinClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_MinClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitPC_MetaData[] = {
		{ "Comment", "/** Stores a reference to the replicated PlayerController (if set to wait for this), after NotifyHandleClientPlayer */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "Stores a reference to the replicated PlayerController (if set to wait for this), after NotifyHandleClientPlayer" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitPC = { "UnitPC", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, UnitPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitNUTActor_MetaData[] = {
		{ "Comment", "/** If EUnitTestFlags::RequireNUTActor is set, stores a reference to the replicated NUTActor */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "If EUnitTestFlags::RequireNUTActor is set, stores a reference to the replicated NUTActor" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitNUTActor = { "UnitNUTActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, UnitNUTActor), Z_Construct_UClass_ANUTActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitNUTActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitNUTActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitBeacon_MetaData[] = {
		{ "Comment", "/** If EUnitTestFlags::RequireBeacon is set, stores a reference to the replicated beacon */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "If EUnitTestFlags::RequireBeacon is set, stores a reference to the replicated beacon" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitBeacon = { "UnitBeacon", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, UnitBeacon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitBeacon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitBeacon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientUnitTest_Statics::NewProp_OnlineBeaconClass_Private_MetaData[] = {
		{ "Comment", "/** Cached reference to the OnlineBeaconClient static class */" },
		{ "ModuleRelativePath", "Classes/ClientUnitTest.h" },
		{ "ToolTip", "Cached reference to the OnlineBeaconClient static class" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UClientUnitTest_Statics::NewProp_OnlineBeaconClass_Private = { "OnlineBeaconClass_Private", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientUnitTest, OnlineBeaconClass_Private), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_OnlineBeaconClass_Private_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::NewProp_OnlineBeaconClass_Private_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClientUnitTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_AllowedClientActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_MinClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitNUTActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_UnitBeacon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientUnitTest_Statics::NewProp_OnlineBeaconClass_Private,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientUnitTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientUnitTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClientUnitTest_Statics::ClassParams = {
		&UClientUnitTest::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClientUnitTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UClientUnitTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientUnitTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientUnitTest()
	{
		if (!Z_Registration_Info_UClass_UClientUnitTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClientUnitTest.OuterSingleton, Z_Construct_UClass_UClientUnitTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClientUnitTest.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UClientUnitTest>()
	{
		return UClientUnitTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientUnitTest);
	UClientUnitTest::~UClientUnitTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClientUnitTest, UClientUnitTest::StaticClass, TEXT("UClientUnitTest"), &Z_Registration_Info_UClass_UClientUnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClientUnitTest), 942800869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_492825983(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ClientUnitTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
