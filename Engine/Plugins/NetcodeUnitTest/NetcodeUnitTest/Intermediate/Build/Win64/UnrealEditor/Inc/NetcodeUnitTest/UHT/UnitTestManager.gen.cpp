// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestManager();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestManager::StaticRegisterNativesUUnitTestManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestManager);
	UClass* Z_Construct_UClass_UUnitTestManager_NoRegister()
	{
		return UUnitTestManager::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCapUnitTestCount_MetaData[];
#endif
		static void NewProp_bCapUnitTestCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapUnitTestCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUnitTestCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxUnitTestCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCapUnitTestMemory_MetaData[];
#endif
		static void NewProp_bCapUnitTestMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapUnitTestMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMemoryPercent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxMemoryPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCloseMemoryPercent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoCloseMemoryPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAutoCloseCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxAutoCloseCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitTestSessionCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UnitTestSessionCount;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PendingUnitTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingUnitTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingUnitTests;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveUnitTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveUnitTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveUnitTests;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FinishedUnitTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishedUnitTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinishedUnitTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages centralized execution and tracking of unit tests, as well as handling console commands,\n * and some misc tasks like local log hooking\n */" },
		{ "IncludePath", "UnitTestManager.h" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Manages centralized execution and tracking of unit tests, as well as handling console commands,\nand some misc tasks like local log hooking" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount_MetaData[] = {
		{ "Comment", "/** Whether or not to cap the maximum number of unit tests that can be active at any given time */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Whether or not to cap the maximum number of unit tests that can be active at any given time" },
	};
#endif
	void Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount_SetBit(void* Obj)
	{
		((UUnitTestManager*)Obj)->bCapUnitTestCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount = { "bCapUnitTestCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUnitTestManager), &Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxUnitTestCount_MetaData[] = {
		{ "Comment", "/** Specifies the maximum number of unit tests that can be run at any given time */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Specifies the maximum number of unit tests that can be run at any given time" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxUnitTestCount = { "MaxUnitTestCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, MaxUnitTestCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxUnitTestCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxUnitTestCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory_MetaData[] = {
		{ "Comment", "/** Whether or not to cap active unit tests, based on memory usage */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Whether or not to cap active unit tests, based on memory usage" },
	};
#endif
	void Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory_SetBit(void* Obj)
	{
		((UUnitTestManager*)Obj)->bCapUnitTestMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory = { "bCapUnitTestMemory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUnitTestManager), &Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxMemoryPercent_MetaData[] = {
		{ "Comment", "/** When total physical memory usage, as a percentage, reaches this limit, no new unit tests can be started */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "When total physical memory usage, as a percentage, reaches this limit, no new unit tests can be started" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxMemoryPercent = { "MaxMemoryPercent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, MaxMemoryPercent), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxMemoryPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxMemoryPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_AutoCloseMemoryPercent_MetaData[] = {
		{ "Comment", "/** As above, but when reaching this limit, recently started unit test(s) will be terminated/re-queued, to get back within limits */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "As above, but when reaching this limit, recently started unit test(s) will be terminated/re-queued, to get back within limits" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_AutoCloseMemoryPercent = { "AutoCloseMemoryPercent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, AutoCloseMemoryPercent), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_AutoCloseMemoryPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_AutoCloseMemoryPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxAutoCloseCount_MetaData[] = {
		{ "Comment", "/** Limits the number of auto-aborts a particular unit test will allow, before it is no longer accepted for re-queueing */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Limits the number of auto-aborts a particular unit test will allow, before it is no longer accepted for re-queueing" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxAutoCloseCount = { "MaxAutoCloseCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, MaxAutoCloseCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxAutoCloseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxAutoCloseCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_UnitTestSessionCount_MetaData[] = {
		{ "Comment", "/** The number of recorded sessions where UE has run unit tests (max one per each run of the UE process) */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "The number of recorded sessions where UE has run unit tests (max one per each run of the UE process)" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_UnitTestSessionCount = { "UnitTestSessionCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, UnitTestSessionCount), METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_UnitTestSessionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_UnitTestSessionCount_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests_Inner = { "PendingUnitTests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests_MetaData[] = {
		{ "Comment", "/** Holds a list of unit tests pending execution */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Holds a list of unit tests pending execution" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests = { "PendingUnitTests", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, PendingUnitTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests_Inner = { "ActiveUnitTests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUnitTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests_MetaData[] = {
		{ "Comment", "/** Holds a list of currently active unit tests */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Holds a list of currently active unit tests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests = { "ActiveUnitTests", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, ActiveUnitTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests_Inner = { "FinishedUnitTests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUnitTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests_MetaData[] = {
		{ "Comment", "/** Unit tests which are finished, and are kept around until printing the final summary */" },
		{ "ModuleRelativePath", "Classes/UnitTestManager.h" },
		{ "ToolTip", "Unit tests which are finished, and are kept around until printing the final summary" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests = { "FinishedUnitTests", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTestManager, FinishedUnitTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTestManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxUnitTestCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_bCapUnitTestMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxMemoryPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_AutoCloseMemoryPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_MaxAutoCloseCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_UnitTestSessionCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_PendingUnitTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_ActiveUnitTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTestManager_Statics::NewProp_FinishedUnitTests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestManager_Statics::ClassParams = {
		&UUnitTestManager::StaticClass,
		"UnitTest",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestManager()
	{
		if (!Z_Registration_Info_UClass_UUnitTestManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestManager.OuterSingleton, Z_Construct_UClass_UUnitTestManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestManager.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestManager>()
	{
		return UUnitTestManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestManager);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestManager, UUnitTestManager::StaticClass, TEXT("UUnitTestManager"), &Z_Registration_Info_UClass_UUnitTestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestManager), 2234493506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_999939116(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
