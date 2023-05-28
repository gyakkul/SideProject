// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTService_Log.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTService_Log() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_Log();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTService_Log_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	void UTestBTService_Log::StaticRegisterNativesUTestBTService_Log()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTService_Log);
	UClass* Z_Construct_UClass_UTestBTService_Log_NoRegister()
	{
		return UTestBTService_Log::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTService_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogActivation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogActivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogDeactivation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogDeactivation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameTick_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameBecomeRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameBecomeRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyNameCeaseRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyNameCeaseRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToggleValue_MetaData[];
#endif
		static void NewProp_bToggleValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTService_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTService_Log.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation = { "LogActivation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, LogActivation), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation = { "LogDeactivation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, LogDeactivation), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick = { "KeyNameTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, KeyNameTick), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant = { "KeyNameBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, KeyNameBecomeRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant = { "KeyNameCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, KeyNameCeaseRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick = { "LogTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTService_Log, LogTick), METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTService_Log.h" },
	};
#endif
	void Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_SetBit(void* Obj)
	{
		((UTestBTService_Log*)Obj)->bToggleValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue = { "bToggleValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestBTService_Log), &Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogDeactivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameBecomeRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_KeyNameCeaseRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_LogTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTService_Log_Statics::NewProp_bToggleValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTService_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTService_Log>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTService_Log_Statics::ClassParams = {
		&UTestBTService_Log::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTService_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTService_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTService_Log()
	{
		if (!Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton, Z_Construct_UClass_UTestBTService_Log_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTService_Log.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTService_Log>()
	{
		return UTestBTService_Log::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTService_Log);
	UTestBTService_Log::~UTestBTService_Log() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTService_Log, UTestBTService_Log::StaticClass, TEXT("UTestBTService_Log"), &Z_Registration_Info_UClass_UTestBTService_Log, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTService_Log), 656389951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_1905426216(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTService_Log_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
