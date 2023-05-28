// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/Obsolete/UTT61_DebugReplicateData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTT61_DebugReplicateData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UUTT61_DebugReplicateData();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UUTT61_DebugReplicateData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NUTUnrealEngine();
// End Cross Module References
	void UUTT61_DebugReplicateData::StaticRegisterNativesUUTT61_DebugReplicateData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTT61_DebugReplicateData);
	UClass* Z_Construct_UClass_UUTT61_DebugReplicateData_NoRegister()
	{
		return UUTT61_DebugReplicateData::StaticClass();
	}
	struct Z_Construct_UClass_UUTT61_DebugReplicateData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RepClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replicator_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Replicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClientUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NUTUnrealEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements UTT GameplayDebuggingComponent/ServerReplicateData crash\n *\n * Command:\n *\x09UTT -b 61 127.0.0.1\n *\n * Documentation from Luigi:\n * - TEST VULNERABILITY: ServerReplicateData array overflow\n * ####\n * 07 May 2014\n * ServerReplicateData array overflow\n * \n * The ServerReplicateMessageToAIDebugView function used for some\n * debugging features is affected by an array overflow with the\n * InMessages: ActivateDataView and DeactivateDataView.\n * \n * This is the same function that was affected by the bug 55 reported\n * the 27 March, anyway remember that it's NOT used in shipping builds.\n */" },
		{ "IncludePath", "UnitTests/Obsolete/UTT61_DebugReplicateData.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/Obsolete/UTT61_DebugReplicateData.h" },
		{ "ToolTip", "Implements UTT GameplayDebuggingComponent/ServerReplicateData crash\n\nCommand:\n    UTT -b 61 127.0.0.1\n\nDocumentation from Luigi:\n- TEST VULNERABILITY: ServerReplicateData array overflow\n####\n07 May 2014\nServerReplicateData array overflow\n\nThe ServerReplicateMessageToAIDebugView function used for some\ndebugging features is affected by an array overflow with the\nInMessages: ActivateDataView and DeactivateDataView.\n\nThis is the same function that was affected by the bug 55 reported\nthe 27 March, anyway remember that it's NOT used in shipping builds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_RepClass_MetaData[] = {
		{ "Comment", "/** Reference to the GameplayDebuggingReplicator class */" },
		{ "ModuleRelativePath", "Classes/UnitTests/Obsolete/UTT61_DebugReplicateData.h" },
		{ "ToolTip", "Reference to the GameplayDebuggingReplicator class" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_RepClass = { "RepClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTT61_DebugReplicateData, RepClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_RepClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_RepClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_Replicator_MetaData[] = {
		{ "Comment", "/** Once the GameplayDebuggingReplicator is received, cache it */" },
		{ "ModuleRelativePath", "Classes/UnitTests/Obsolete/UTT61_DebugReplicateData.h" },
		{ "ToolTip", "Once the GameplayDebuggingReplicator is received, cache it" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_Replicator = { "Replicator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTT61_DebugReplicateData, Replicator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_Replicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_Replicator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_RepClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::NewProp_Replicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTT61_DebugReplicateData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::ClassParams = {
		&UUTT61_DebugReplicateData::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTT61_DebugReplicateData()
	{
		if (!Z_Registration_Info_UClass_UUTT61_DebugReplicateData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTT61_DebugReplicateData.OuterSingleton, Z_Construct_UClass_UUTT61_DebugReplicateData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTT61_DebugReplicateData.OuterSingleton;
	}
	template<> NUTUNREALENGINE_API UClass* StaticClass<UUTT61_DebugReplicateData>()
	{
		return UUTT61_DebugReplicateData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTT61_DebugReplicateData);
	UUTT61_DebugReplicateData::~UUTT61_DebugReplicateData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_Obsolete_UTT61_DebugReplicateData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_Obsolete_UTT61_DebugReplicateData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTT61_DebugReplicateData, UUTT61_DebugReplicateData::StaticClass, TEXT("UUTT61_DebugReplicateData"), &Z_Registration_Info_UClass_UUTT61_DebugReplicateData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTT61_DebugReplicateData), 4170752611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_Obsolete_UTT61_DebugReplicateData_h_1632936559(TEXT("/Script/NUTUnrealEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_Obsolete_UTT61_DebugReplicateData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_Obsolete_UTT61_DebugReplicateData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
