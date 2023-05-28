// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/ZoneGraphAnnotationTestingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphAnnotationTestingActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_AZoneGraphAnnotationTestingActor();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_AZoneGraphAnnotationTestingActor_NoRegister();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTest();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTestingComponent();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister();
// End Cross Module References
	void UZoneGraphAnnotationTest::StaticRegisterNativesUZoneGraphAnnotationTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphAnnotationTest);
	UClass* Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister()
	{
		return UZoneGraphAnnotationTest::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphAnnotationTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for ZoneGraph Annotation tests. */" },
		{ "IncludePath", "ZoneGraphAnnotationTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
		{ "ToolTip", "Base class for ZoneGraph Annotation tests." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphAnnotationTest, OwnerComponent), Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::NewProp_OwnerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphAnnotationTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::ClassParams = {
		&UZoneGraphAnnotationTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphAnnotationTest()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphAnnotationTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphAnnotationTest.OuterSingleton, Z_Construct_UClass_UZoneGraphAnnotationTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphAnnotationTest.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphAnnotationTest>()
	{
		return UZoneGraphAnnotationTest::StaticClass();
	}
	UZoneGraphAnnotationTest::UZoneGraphAnnotationTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphAnnotationTest);
	UZoneGraphAnnotationTest::~UZoneGraphAnnotationTest() {}
	void UZoneGraphAnnotationTestingComponent::StaticRegisterNativesUZoneGraphAnnotationTestingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphAnnotationTestingComponent);
	UClass* Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister()
	{
		return UZoneGraphAnnotationTestingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/** Debug component to test Mass ZoneGraph Annotations. Handles tests and rendering. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ZoneGraphAnnotationTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug component to test Mass ZoneGraph Annotations. Handles tests and rendering." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_Inner_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UZoneGraphAnnotationTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphAnnotationTestingComponent, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::NewProp_Tests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphAnnotationTestingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::ClassParams = {
		&UZoneGraphAnnotationTestingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphAnnotationTestingComponent()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphAnnotationTestingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphAnnotationTestingComponent.OuterSingleton, Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphAnnotationTestingComponent.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphAnnotationTestingComponent>()
	{
		return UZoneGraphAnnotationTestingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphAnnotationTestingComponent);
	UZoneGraphAnnotationTestingComponent::~UZoneGraphAnnotationTestingComponent() {}
	DEFINE_FUNCTION(AZoneGraphAnnotationTestingActor::execTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trigger();
		P_NATIVE_END;
	}
	void AZoneGraphAnnotationTestingActor::StaticRegisterNativesAZoneGraphAnnotationTestingActor()
	{
		UClass* Class = AZoneGraphAnnotationTestingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Trigger", &AZoneGraphAnnotationTestingActor::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "Comment", "/**\n\x09 * Simple trigger function to trigger something on the tests.\n\x09 * Ideally this would be part of each test, but it does not work there.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
		{ "ToolTip", "Simple trigger function to trigger something on the tests.\nIdeally this would be part of each test, but it does not work there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZoneGraphAnnotationTestingActor, nullptr, "Trigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZoneGraphAnnotationTestingActor);
	UClass* Z_Construct_UClass_AZoneGraphAnnotationTestingActor_NoRegister()
	{
		return AZoneGraphAnnotationTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZoneGraphAnnotationTestingActor_Trigger, "Trigger" }, // 3740555008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Debug actor to test Mass ZoneGraph Annotations. */" },
		{ "HideCategories", "Actor Input Collision Rendering Replication Partition HLOD Cooking" },
		{ "IncludePath", "ZoneGraphAnnotationTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug actor to test Mass ZoneGraph Annotations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::NewProp_TestingComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::NewProp_TestingComp = { "TestingComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneGraphAnnotationTestingActor, TestingComp), Z_Construct_UClass_UZoneGraphAnnotationTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::NewProp_TestingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::NewProp_TestingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::NewProp_TestingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZoneGraphAnnotationTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::ClassParams = {
		&AZoneGraphAnnotationTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZoneGraphAnnotationTestingActor()
	{
		if (!Z_Registration_Info_UClass_AZoneGraphAnnotationTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZoneGraphAnnotationTestingActor.OuterSingleton, Z_Construct_UClass_AZoneGraphAnnotationTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZoneGraphAnnotationTestingActor.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<AZoneGraphAnnotationTestingActor>()
	{
		return AZoneGraphAnnotationTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZoneGraphAnnotationTestingActor);
	AZoneGraphAnnotationTestingActor::~AZoneGraphAnnotationTestingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphAnnotationTest, UZoneGraphAnnotationTest::StaticClass, TEXT("UZoneGraphAnnotationTest"), &Z_Registration_Info_UClass_UZoneGraphAnnotationTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphAnnotationTest), 2608679783U) },
		{ Z_Construct_UClass_UZoneGraphAnnotationTestingComponent, UZoneGraphAnnotationTestingComponent::StaticClass, TEXT("UZoneGraphAnnotationTestingComponent"), &Z_Registration_Info_UClass_UZoneGraphAnnotationTestingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphAnnotationTestingComponent), 2349535488U) },
		{ Z_Construct_UClass_AZoneGraphAnnotationTestingActor, AZoneGraphAnnotationTestingActor::StaticClass, TEXT("AZoneGraphAnnotationTestingActor"), &Z_Registration_Info_UClass_AZoneGraphAnnotationTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZoneGraphAnnotationTestingActor), 2526557750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_39982201(TEXT("/Script/ZoneGraphAnnotations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
