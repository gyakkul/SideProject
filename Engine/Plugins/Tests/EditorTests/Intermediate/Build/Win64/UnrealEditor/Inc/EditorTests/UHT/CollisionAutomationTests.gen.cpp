// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UnrealEd/CollisionAutomationTests.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionAutomationTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORTESTS_API UClass* Z_Construct_UClass_UCollisionAutomationTestConfigData();
	EDITORTESTS_API UClass* Z_Construct_UClass_UCollisionAutomationTestConfigData_NoRegister();
	EDITORTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionPerfTest();
	EDITORTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionTestEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_EditorTests();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionTestEntry;
class UScriptStruct* FCollisionTestEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionTestEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionTestEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionTestEntry, (UObject*)Z_Construct_UPackage__Script_EditorTests(), TEXT("CollisionTestEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionTestEntry.OuterSingleton;
}
template<> EDITORTESTS_API UScriptStruct* StaticStruct<FCollisionTestEntry>()
{
	return FCollisionTestEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionTestEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootShapeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootShapeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for detailing collision automated test data.\n */" },
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
		{ "ToolTip", "Container for detailing collision automated test data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionTestEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_RootShapeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_RootShapeAsset = { "RootShapeAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionTestEntry, RootShapeAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_RootShapeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_RootShapeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_ShapeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionTestEntry, ShapeType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_ShapeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_HitResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionTestEntry, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_RootShapeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewProp_HitResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
		nullptr,
		&NewStructOps,
		"CollisionTestEntry",
		sizeof(FCollisionTestEntry),
		alignof(FCollisionTestEntry),
		Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionTestEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionTestEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionTestEntry.InnerSingleton, Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionTestEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionPerfTest;
class UScriptStruct* FCollisionPerfTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionPerfTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionPerfTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionPerfTest, (UObject*)Z_Construct_UPackage__Script_EditorTests(), TEXT("CollisionPerfTest"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionPerfTest.OuterSingleton;
}
template<> EDITORTESTS_API UScriptStruct* StaticStruct<FCollisionPerfTest>()
{
	return FCollisionPerfTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionPerfTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootShapeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootShapeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationElements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionPerfTest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_RootShapeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_RootShapeAsset = { "RootShapeAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPerfTest, RootShapeAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_RootShapeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_RootShapeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_ShapeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPerfTest, ShapeType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_ShapeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationBounds_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationBounds = { "CreationBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPerfTest, CreationBounds), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationElements_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationElements = { "CreationElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPerfTest, CreationElements), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_RootShapeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewProp_CreationElements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
		nullptr,
		&NewStructOps,
		"CollisionPerfTest",
		sizeof(FCollisionPerfTest),
		alignof(FCollisionPerfTest),
		Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionPerfTest()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionPerfTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionPerfTest.InnerSingleton, Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionPerfTest.InnerSingleton;
	}
	void UCollisionAutomationTestConfigData::StaticRegisterNativesUCollisionAutomationTestConfigData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionAutomationTestConfigData);
	UClass* Z_Construct_UClass_UCollisionAutomationTestConfigData_NoRegister()
	{
		return UCollisionAutomationTestConfigData::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentSweepMultiTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSweepMultiTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentSweepMultiTests;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTraceSingleByChannelTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceSingleByChannelTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineTraceSingleByChannelTests;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineTracePerformanceTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineTracePerformanceTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineTracePerformanceTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealEd/CollisionAutomationTests.h" },
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests_Inner = { "ComponentSweepMultiTests", nullptr, (EPropertyFlags)0x0000008000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionTestEntry, METADATA_PARAMS(nullptr, 0) }; // 1862482480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests = { "ComponentSweepMultiTests", nullptr, (EPropertyFlags)0x0010008000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionAutomationTestConfigData, ComponentSweepMultiTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests_MetaData)) }; // 1862482480
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests_Inner = { "LineTraceSingleByChannelTests", nullptr, (EPropertyFlags)0x0000008000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionTestEntry, METADATA_PARAMS(nullptr, 0) }; // 1862482480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests = { "LineTraceSingleByChannelTests", nullptr, (EPropertyFlags)0x0010008000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionAutomationTestConfigData, LineTraceSingleByChannelTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests_MetaData)) }; // 1862482480
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests_Inner = { "LineTracePerformanceTests", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionPerfTest, METADATA_PARAMS(nullptr, 0) }; // 560488809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests_MetaData[] = {
		{ "ModuleRelativePath", "Private/UnrealEd/CollisionAutomationTests.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests = { "LineTracePerformanceTests", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionAutomationTestConfigData, LineTracePerformanceTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests_MetaData)) }; // 560488809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_ComponentSweepMultiTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTraceSingleByChannelTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::NewProp_LineTracePerformanceTests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionAutomationTestConfigData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::ClassParams = {
		&UCollisionAutomationTestConfigData::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionAutomationTestConfigData()
	{
		if (!Z_Registration_Info_UClass_UCollisionAutomationTestConfigData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionAutomationTestConfigData.OuterSingleton, Z_Construct_UClass_UCollisionAutomationTestConfigData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionAutomationTestConfigData.OuterSingleton;
	}
	template<> EDITORTESTS_API UClass* StaticClass<UCollisionAutomationTestConfigData>()
	{
		return UCollisionAutomationTestConfigData::StaticClass();
	}
	UCollisionAutomationTestConfigData::UCollisionAutomationTestConfigData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionAutomationTestConfigData);
	UCollisionAutomationTestConfigData::~UCollisionAutomationTestConfigData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ScriptStructInfo[] = {
		{ FCollisionTestEntry::StaticStruct, Z_Construct_UScriptStruct_FCollisionTestEntry_Statics::NewStructOps, TEXT("CollisionTestEntry"), &Z_Registration_Info_UScriptStruct_CollisionTestEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionTestEntry), 1862482480U) },
		{ FCollisionPerfTest::StaticStruct, Z_Construct_UScriptStruct_FCollisionPerfTest_Statics::NewStructOps, TEXT("CollisionPerfTest"), &Z_Registration_Info_UScriptStruct_CollisionPerfTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionPerfTest), 560488809U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionAutomationTestConfigData, UCollisionAutomationTestConfigData::StaticClass, TEXT("UCollisionAutomationTestConfigData"), &Z_Registration_Info_UClass_UCollisionAutomationTestConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionAutomationTestConfigData), 4131476553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_4025895511(TEXT("/Script/EditorTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Private_UnrealEd_CollisionAutomationTests_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
