// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdLaneClosingTest.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdLaneClosingTest() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSubsystem_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest();
	MASSCROWD_API UClass* Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_NoRegister();
	MASSCROWD_API UEnum* Z_Construct_UEnum_MassCrowd_ECrowdLaneState();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneLaneTest();
// End Cross Module References
	void UZoneGraphCloseCrowdLaneTest::StaticRegisterNativesUZoneGraphCloseCrowdLaneTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphCloseCrowdLaneTest);
	UClass* Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_NoRegister()
	{
		return UZoneGraphCloseCrowdLaneTest::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrowdSubsystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaneState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LaneState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevLaneState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevLaneState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevLaneState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoneLaneTest,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdLaneClosingTest.h" },
		{ "ModuleRelativePath", "Public/MassCrowdLaneClosingTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdLaneClosingTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneLocation = { "LaneLocation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCloseCrowdLaneTest, LaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_CrowdSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdLaneClosingTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_CrowdSubsystem = { "CrowdSubsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCloseCrowdLaneTest, CrowdSubsystem), Z_Construct_UClass_UMassCrowdSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_CrowdSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_CrowdSubsystem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/MassCrowdLaneClosingTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState = { "LaneState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCloseCrowdLaneTest, LaneState), Z_Construct_UEnum_MassCrowd_ECrowdLaneState, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState_MetaData)) }; // 654836309
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/MassCrowdLaneClosingTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState = { "PrevLaneState", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphCloseCrowdLaneTest, PrevLaneState), Z_Construct_UEnum_MassCrowd_ECrowdLaneState, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState_MetaData)) }; // 654836309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_CrowdSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_LaneState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::NewProp_PrevLaneState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphCloseCrowdLaneTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::ClassParams = {
		&UZoneGraphCloseCrowdLaneTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphCloseCrowdLaneTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphCloseCrowdLaneTest.OuterSingleton, Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphCloseCrowdLaneTest.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UZoneGraphCloseCrowdLaneTest>()
	{
		return UZoneGraphCloseCrowdLaneTest::StaticClass();
	}
	UZoneGraphCloseCrowdLaneTest::UZoneGraphCloseCrowdLaneTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphCloseCrowdLaneTest);
	UZoneGraphCloseCrowdLaneTest::~UZoneGraphCloseCrowdLaneTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneClosingTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneClosingTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphCloseCrowdLaneTest, UZoneGraphCloseCrowdLaneTest::StaticClass, TEXT("UZoneGraphCloseCrowdLaneTest"), &Z_Registration_Info_UClass_UZoneGraphCloseCrowdLaneTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphCloseCrowdLaneTest), 965667577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneClosingTest_h_4040851915(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneClosingTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneClosingTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
