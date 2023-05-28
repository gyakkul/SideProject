// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NUTGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNUTGlobals() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UNUTGlobals();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UNUTGlobals_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UNUTGlobals::StaticRegisterNativesUNUTGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNUTGlobals);
	UClass* Z_Construct_UClass_UNUTGlobals_NoRegister()
	{
		return UNUTGlobals::StaticClass();
	}
	struct Z_Construct_UClass_UNUTGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventWatcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventWatcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPortOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPortOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitTestNetDriverCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnitTestNetDriverCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DumpRPCMatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DumpRPCMatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DumpRPCMatches;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnitTestModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitTestModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnitTestModules;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnloadedModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadedModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnloadedModules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNUTGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores globals/static-variables for NetcodeUnitTest - for compatibility with hot reload\n */" },
		{ "IncludePath", "NUTGlobals.h" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "Stores globals/static-variables for NetcodeUnitTest - for compatibility with hot reload" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_EventWatcher_MetaData[] = {
		{ "Comment", "/** For NUTActor - the UNetConnection that 'watch' events will be sent to */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "For NUTActor - the UNetConnection that 'watch' events will be sent to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_EventWatcher = { "EventWatcher", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, EventWatcher), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_EventWatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_EventWatcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_ServerPortOffset_MetaData[] = {
		{ "Comment", "/** For ClientUnitTest - the (+10) incremented port number, for each server instance */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "For ClientUnitTest - the (+10) incremented port number, for each server instance" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_ServerPortOffset = { "ServerPortOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, ServerPortOffset), METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_ServerPortOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_ServerPortOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestNetDriverCount_MetaData[] = {
		{ "Comment", "/** For MinimalClient - counter for the number of unit test net drivers created */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "For MinimalClient - counter for the number of unit test net drivers created" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestNetDriverCount = { "UnitTestNetDriverCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, UnitTestNetDriverCount), METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestNetDriverCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestNetDriverCount_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches_Inner = { "DumpRPCMatches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches_MetaData[] = {
		{ "Comment", "/** For the '-DumpRPCs' commandline parameter - limits DumpRPCs to RPC's (partially) matching the specified names */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "For the '-DumpRPCs' commandline parameter - limits DumpRPCs to RPC's (partially) matching the specified names" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches = { "DumpRPCMatches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, DumpRPCMatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules_Inner = { "UnitTestModules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules_MetaData[] = {
		{ "Comment", "/** List of modules recognized as containing unit tests, plus implementing FNUTModuleInterface for hot reload */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "List of modules recognized as containing unit tests, plus implementing FNUTModuleInterface for hot reload" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules = { "UnitTestModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, UnitTestModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules_Inner = { "UnloadedModules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules_MetaData[] = {
		{ "Comment", "/** List of unit test modules that have been unloaded, prior to reloading for Hot Reload */" },
		{ "ModuleRelativePath", "Classes/NUTGlobals.h" },
		{ "ToolTip", "List of unit test modules that have been unloaded, prior to reloading for Hot Reload" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules = { "UnloadedModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNUTGlobals, UnloadedModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNUTGlobals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_EventWatcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_ServerPortOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestNetDriverCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_DumpRPCMatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnitTestModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNUTGlobals_Statics::NewProp_UnloadedModules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNUTGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNUTGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNUTGlobals_Statics::ClassParams = {
		&UNUTGlobals::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNUTGlobals_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNUTGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNUTGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNUTGlobals()
	{
		if (!Z_Registration_Info_UClass_UNUTGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNUTGlobals.OuterSingleton, Z_Construct_UClass_UNUTGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNUTGlobals.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UNUTGlobals>()
	{
		return UNUTGlobals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNUTGlobals);
	UNUTGlobals::~UNUTGlobals() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNUTGlobals, UNUTGlobals::StaticClass, TEXT("UNUTGlobals"), &Z_Registration_Info_UClass_UNUTGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNUTGlobals), 912244242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_1567022398(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
