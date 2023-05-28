// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SmartObjectTestingActor.h"
#include "SmartObjectSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectTestingActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectTestingActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectTestingActor_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSimpleQueryTest();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSimpleQueryTest_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectTest();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectTest_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectTestRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectTestRenderingComponent_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequest();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestResult();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectTest::StaticRegisterNativesUSmartObjectTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectTest);
	UClass* Z_Construct_UClass_USmartObjectTest_NoRegister()
	{
		return USmartObjectTest::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectTestingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartObjectTestingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for SmartObject tests. */" },
		{ "IncludePath", "SmartObjectTestingActor.h" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ToolTip", "Base class for SmartObject tests." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectTest_Statics::NewProp_SmartObjectTestingActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectTest_Statics::NewProp_SmartObjectTestingActor = { "SmartObjectTestingActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectTest, SmartObjectTestingActor), Z_Construct_UClass_ASmartObjectTestingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectTest_Statics::NewProp_SmartObjectTestingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTest_Statics::NewProp_SmartObjectTestingActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectTest_Statics::NewProp_SmartObjectTestingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectTest_Statics::ClassParams = {
		&USmartObjectTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTest_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectTest()
	{
		if (!Z_Registration_Info_UClass_USmartObjectTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectTest.OuterSingleton, Z_Construct_UClass_USmartObjectTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectTest.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectTest>()
	{
		return USmartObjectTest::StaticClass();
	}
	USmartObjectTest::USmartObjectTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectTest);
	USmartObjectTest::~USmartObjectTest() {}
	void USmartObjectSimpleQueryTest::StaticRegisterNativesUSmartObjectSimpleQueryTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSimpleQueryTest);
	UClass* Z_Construct_UClass_USmartObjectSimpleQueryTest_NoRegister()
	{
		return USmartObjectSimpleQueryTest::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectTest,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Simple test to run a query and draw the results. */" },
		{ "IncludePath", "SmartObjectTestingActor.h" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ToolTip", "Simple test to run a query and draw the results." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Request_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSimpleQueryTest, Request), Z_Construct_UScriptStruct_FSmartObjectRequest, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Request_MetaData)) }; // 229474394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(nullptr, 0) }; // 4207157864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSimpleQueryTest, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results_MetaData)) }; // 4207157864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::NewProp_Results,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSimpleQueryTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::ClassParams = {
		&USmartObjectSimpleQueryTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectSimpleQueryTest()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSimpleQueryTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSimpleQueryTest.OuterSingleton, Z_Construct_UClass_USmartObjectSimpleQueryTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSimpleQueryTest.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSimpleQueryTest>()
	{
		return USmartObjectSimpleQueryTest::StaticClass();
	}
	USmartObjectSimpleQueryTest::USmartObjectSimpleQueryTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSimpleQueryTest);
	USmartObjectSimpleQueryTest::~USmartObjectSimpleQueryTest() {}
	void USmartObjectTestRenderingComponent::StaticRegisterNativesUSmartObjectTestRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectTestRenderingComponent);
	UClass* Z_Construct_UClass_USmartObjectTestRenderingComponent_NoRegister()
	{
		return USmartObjectTestRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectDebugRenderingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/** Debug rendering component for SmartObject tests. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SmartObjectTestingActor.h" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ToolTip", "Debug rendering component for SmartObject tests." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectTestRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::ClassParams = {
		&USmartObjectTestRenderingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectTestRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectTestRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectTestRenderingComponent.OuterSingleton, Z_Construct_UClass_USmartObjectTestRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectTestRenderingComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectTestRenderingComponent>()
	{
		return USmartObjectTestRenderingComponent::StaticClass();
	}
	USmartObjectTestRenderingComponent::USmartObjectTestRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectTestRenderingComponent);
	USmartObjectTestRenderingComponent::~USmartObjectTestRenderingComponent() {}
	DEFINE_FUNCTION(ASmartObjectTestingActor::execResetTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartObjectTestingActor::execRunTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTests();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ASmartObjectTestingActor::execDebugCleanupSubsystemRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCleanupSubsystemRuntime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmartObjectTestingActor::execDebugInitializeSubsystemRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugInitializeSubsystemRuntime();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ASmartObjectTestingActor::StaticRegisterNativesASmartObjectTestingActor()
	{
		UClass* Class = ASmartObjectTestingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "DebugCleanupSubsystemRuntime", &ASmartObjectTestingActor::execDebugCleanupSubsystemRuntime },
			{ "DebugInitializeSubsystemRuntime", &ASmartObjectTestingActor::execDebugInitializeSubsystemRuntime },
#endif // WITH_EDITOR
			{ "ResetTests", &ASmartObjectTestingActor::execResetTests },
			{ "RunTests", &ASmartObjectTestingActor::execRunTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Can be used in Editor world to cleanup SmartObject runtime after using debug initialization */" },
		{ "DisplayName", "Cleanup Runtime" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ToolTip", "Can be used in Editor world to cleanup SmartObject runtime after using debug initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectTestingActor, nullptr, "DebugCleanupSubsystemRuntime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Can be used in Editor world to initialize SmartObject runtime with running the simulation */" },
		{ "DisplayName", "Initialize Runtime" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ToolTip", "Can be used in Editor world to initialize SmartObject runtime with running the simulation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectTestingActor, nullptr, "DebugInitializeSubsystemRuntime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectTestingActor, nullptr, "ResetTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartObjectTestingActor, nullptr, "RunTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmartObjectTestingActor_RunTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartObjectTestingActor_RunTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmartObjectTestingActor);
	UClass* Z_Construct_UClass_ASmartObjectTestingActor_NoRegister()
	{
		return ASmartObjectTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_ASmartObjectTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartObjectSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunTestsEachFrame_MetaData[];
#endif
		static void NewProp_bRunTestsEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunTestsEachFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartObjectTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmartObjectTestingActor_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ASmartObjectTestingActor_DebugCleanupSubsystemRuntime, "DebugCleanupSubsystemRuntime" }, // 1853725457
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ASmartObjectTestingActor_DebugInitializeSubsystemRuntime, "DebugInitializeSubsystemRuntime" }, // 1406092731
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_ASmartObjectTestingActor_ResetTests, "ResetTests" }, // 391721038
		{ &Z_Construct_UFunction_ASmartObjectTestingActor_RunTests, "RunTests" }, // 481835210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Debug actor to test SmartObjects. */" },
		{ "HideCategories", "Activation Actor AssetUserData Collision Cooking DataLayers HLOD Input Lighting LOD Mobile Mobility Navigation Physics RayTracing Rendering Replication Tags TextureStreaming WorldPartition" },
		{ "IncludePath", "SmartObjectTestingActor.h" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug actor to test SmartObjects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_Inner_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectTestingActor, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectTestingActor, RenderingComponent), Z_Construct_UClass_USmartObjectTestRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_RenderingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_RenderingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_SmartObjectSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_SmartObjectSubsystem = { "SmartObjectSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectTestingActor, SmartObjectSubsystem), Z_Construct_UClass_USmartObjectSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_SmartObjectSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_SmartObjectSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/SmartObjectTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame_SetBit(void* Obj)
	{
		((ASmartObjectTestingActor*)Obj)->bRunTestsEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame = { "bRunTestsEachFrame", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASmartObjectTestingActor), &Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartObjectTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_Tests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_RenderingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_SmartObjectSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectTestingActor_Statics::NewProp_bRunTestsEachFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartObjectTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartObjectTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmartObjectTestingActor_Statics::ClassParams = {
		&ASmartObjectTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASmartObjectTestingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartObjectTestingActor()
	{
		if (!Z_Registration_Info_UClass_ASmartObjectTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmartObjectTestingActor.OuterSingleton, Z_Construct_UClass_ASmartObjectTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASmartObjectTestingActor.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<ASmartObjectTestingActor>()
	{
		return ASmartObjectTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartObjectTestingActor);
	ASmartObjectTestingActor::~ASmartObjectTestingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectTestingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectTestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectTest, USmartObjectTest::StaticClass, TEXT("USmartObjectTest"), &Z_Registration_Info_UClass_USmartObjectTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectTest), 1922539405U) },
		{ Z_Construct_UClass_USmartObjectSimpleQueryTest, USmartObjectSimpleQueryTest::StaticClass, TEXT("USmartObjectSimpleQueryTest"), &Z_Registration_Info_UClass_USmartObjectSimpleQueryTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSimpleQueryTest), 399834400U) },
		{ Z_Construct_UClass_USmartObjectTestRenderingComponent, USmartObjectTestRenderingComponent::StaticClass, TEXT("USmartObjectTestRenderingComponent"), &Z_Registration_Info_UClass_USmartObjectTestRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectTestRenderingComponent), 2112619367U) },
		{ Z_Construct_UClass_ASmartObjectTestingActor, ASmartObjectTestingActor::StaticClass, TEXT("ASmartObjectTestingActor"), &Z_Registration_Info_UClass_ASmartObjectTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmartObjectTestingActor), 523400280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectTestingActor_h_3200638753(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectTestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
