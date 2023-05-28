// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraphDebug/Public/ZoneGraphTestingActor.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphTestingActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphDebug();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_AZoneGraphTestingActor();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_AZoneGraphTestingActor_NoRegister();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneGraphTestingComponent();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneLaneTest();
	ZONEGRAPHDEBUG_API UClass* Z_Construct_UClass_UZoneLaneTest_NoRegister();
// End Cross Module References
	void UZoneLaneTest::StaticRegisterNativesUZoneLaneTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneLaneTest);
	UClass* Z_Construct_UClass_UZoneLaneTest_NoRegister()
	{
		return UZoneLaneTest::StaticClass();
	}
	struct Z_Construct_UClass_UZoneLaneTest_Statics
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
	UObject* (*const Z_Construct_UClass_UZoneLaneTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneLaneTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class to inherit from to be able to perform custom actions on lane detected by the testing actor. */" },
		{ "IncludePath", "ZoneGraphTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Base class to inherit from to be able to perform custom actions on lane detected by the testing actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneLaneTest_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneLaneTest_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneLaneTest, OwnerComponent), Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneLaneTest_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneLaneTest_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneLaneTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneLaneTest_Statics::NewProp_OwnerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneLaneTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneLaneTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneLaneTest_Statics::ClassParams = {
		&UZoneLaneTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneLaneTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneLaneTest_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneLaneTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneLaneTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneLaneTest()
	{
		if (!Z_Registration_Info_UClass_UZoneLaneTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneLaneTest.OuterSingleton, Z_Construct_UClass_UZoneLaneTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneLaneTest.OuterSingleton;
	}
	template<> ZONEGRAPHDEBUG_API UClass* StaticClass<UZoneLaneTest>()
	{
		return UZoneLaneTest::StaticClass();
	}
	UZoneLaneTest::UZoneLaneTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneLaneTest);
	UZoneLaneTest::~UZoneLaneTest() {}
	DEFINE_FUNCTION(UZoneGraphTestingComponent::execDisableCustomTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCustomTests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneGraphTestingComponent::execEnableCustomTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCustomTests();
		P_NATIVE_END;
	}
	void UZoneGraphTestingComponent::StaticRegisterNativesUZoneGraphTestingComponent()
	{
		UClass* Class = UZoneGraphTestingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableCustomTests", &UZoneGraphTestingComponent::execDisableCustomTests },
			{ "EnableCustomTests", &UZoneGraphTestingComponent::execEnableCustomTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "Comment", "/** Prevent custom tests to be notified when lane location is updated. Currently active tests will get notified with an invalid location. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Prevent custom tests to be notified when lane location is updated. Currently active tests will get notified with an invalid location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneGraphTestingComponent, nullptr, "DisableCustomTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "Comment", "/** Allow custom tests to be notified when lane location is updated. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Allow custom tests to be notified when lane location is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneGraphTestingComponent, nullptr, "EnableCustomTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphTestingComponent);
	UClass* Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister()
	{
		return UZoneGraphTestingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphTestingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextLaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextLaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestLaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearestLaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvanceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestTestOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearestTestOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLinkedLanes_MetaData[];
#endif
		static void NewProp_bDrawLinkedLanes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLinkedLanes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLaneTangentVectors_MetaData[];
#endif
		static void NewProp_bDrawLaneTangentVectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLaneTangentVectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLaneSmoothing_MetaData[];
#endif
		static void NewProp_bDrawLaneSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLaneSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBVTreeQuery_MetaData[];
#endif
		static void NewProp_bDrawBVTreeQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBVTreeQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLanePath_MetaData[];
#endif
		static void NewProp_bDrawLanePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLanePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTests_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphTestingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZoneGraphTestingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoneGraphTestingComponent_DisableCustomTests, "DisableCustomTests" }, // 95535588
		{ &Z_Construct_UFunction_UZoneGraphTestingComponent_EnableCustomTests, "EnableCustomTests" }, // 1598824464
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** Actor for testing ZoneGraph functionality. */" },
		{ "HideCategories", "Physics Collision Rendering Cooking Lighting Navigation Tags HLOD Mobile AssetUserData Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ZoneGraphTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor for testing ZoneGraph functionality." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_ZoneGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_ZoneGraph = { "ZoneGraph", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, ZoneGraph), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_ZoneGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_ZoneGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_LaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_LaneLocation = { "LaneLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, LaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_LaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_LaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NextLaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NextLaneLocation = { "NextLaneLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, NextLaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NextLaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NextLaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestLaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestLaneLocation = { "NearestLaneLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, NearestLaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestLaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestLaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_SearchExtent_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_SearchExtent = { "SearchExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, SearchExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_SearchExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_SearchExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_AdvanceDistance_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_AdvanceDistance = { "AdvanceDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, AdvanceDistance), METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_AdvanceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_AdvanceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestTestOffset_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestTestOffset = { "NearestTestOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, NearestTestOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestTestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestTestOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_QueryFilter_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_QueryFilter = { "QueryFilter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, QueryFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_QueryFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_QueryFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes_SetBit(void* Obj)
	{
		((UZoneGraphTestingComponent*)Obj)->bDrawLinkedLanes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes = { "bDrawLinkedLanes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphTestingComponent), &Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors_SetBit(void* Obj)
	{
		((UZoneGraphTestingComponent*)Obj)->bDrawLaneTangentVectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors = { "bDrawLaneTangentVectors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphTestingComponent), &Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing_SetBit(void* Obj)
	{
		((UZoneGraphTestingComponent*)Obj)->bDrawLaneSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing = { "bDrawLaneSmoothing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphTestingComponent), &Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery_SetBit(void* Obj)
	{
		((UZoneGraphTestingComponent*)Obj)->bDrawBVTreeQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery = { "bDrawBVTreeQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphTestingComponent), &Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/* Experimental */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Experimental" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath_SetBit(void* Obj)
	{
		((UZoneGraphTestingComponent*)Obj)->bDrawLanePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath = { "bDrawLanePath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphTestingComponent), &Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_OtherActor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, OtherActor), Z_Construct_UClass_AZoneGraphTestingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_Inner_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_Inner = { "CustomTests", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UZoneLaneTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests = { "CustomTests", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphTestingComponent, CustomTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphTestingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_ZoneGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_LaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NextLaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestLaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_SearchExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_AdvanceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_NearestTestOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_QueryFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLinkedLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneTangentVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLaneSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawBVTreeQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_bDrawLanePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphTestingComponent_Statics::NewProp_CustomTests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphTestingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphTestingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphTestingComponent_Statics::ClassParams = {
		&UZoneGraphTestingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZoneGraphTestingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphTestingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphTestingComponent()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphTestingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphTestingComponent.OuterSingleton, Z_Construct_UClass_UZoneGraphTestingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphTestingComponent.OuterSingleton;
	}
	template<> ZONEGRAPHDEBUG_API UClass* StaticClass<UZoneGraphTestingComponent>()
	{
		return UZoneGraphTestingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphTestingComponent);
	UZoneGraphTestingComponent::~UZoneGraphTestingComponent() {}
	DEFINE_FUNCTION(AZoneGraphTestingActor::execDisableCustomTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCustomTests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZoneGraphTestingActor::execEnableCustomTests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCustomTests();
		P_NATIVE_END;
	}
	void AZoneGraphTestingActor::StaticRegisterNativesAZoneGraphTestingActor()
	{
		UClass* Class = AZoneGraphTestingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableCustomTests", &AZoneGraphTestingActor::execDisableCustomTests },
			{ "EnableCustomTests", &AZoneGraphTestingActor::execEnableCustomTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "Comment", "/** Prevent custom tests to be notified when lane location is updated. Currently active tests will get notified with an invalid location. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Prevent custom tests to be notified when lane location is updated. Currently active tests will get notified with an invalid location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZoneGraphTestingActor, nullptr, "DisableCustomTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Test" },
		{ "Comment", "/** Allow custom tests to be notified when lane location is updated. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ToolTip", "Allow custom tests to be notified when lane location is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZoneGraphTestingActor, nullptr, "EnableCustomTests", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZoneGraphTestingActor);
	UClass* Z_Construct_UClass_AZoneGraphTestingActor_NoRegister()
	{
		return AZoneGraphTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_AZoneGraphTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZoneGraphTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZoneGraphTestingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZoneGraphTestingActor_DisableCustomTests, "DisableCustomTests" }, // 4211569396
		{ &Z_Construct_UFunction_AZoneGraphTestingActor_EnableCustomTests, "EnableCustomTests" }, // 3717831477
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphTestingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Debug actor to visually test zone graph. */" },
		{ "HideCategories", "Actor Input Collision Rendering Replication Partition HLOD Cooking" },
		{ "IncludePath", "ZoneGraphTestingActor.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug actor to visually test zone graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZoneGraphTestingActor_Statics::NewProp_DebugComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AZoneGraphTestingActor_Statics::NewProp_DebugComp = { "DebugComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZoneGraphTestingActor, DebugComp), Z_Construct_UClass_UZoneGraphTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZoneGraphTestingActor_Statics::NewProp_DebugComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphTestingActor_Statics::NewProp_DebugComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZoneGraphTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZoneGraphTestingActor_Statics::NewProp_DebugComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZoneGraphTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZoneGraphTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZoneGraphTestingActor_Statics::ClassParams = {
		&AZoneGraphTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZoneGraphTestingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphTestingActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZoneGraphTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZoneGraphTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZoneGraphTestingActor()
	{
		if (!Z_Registration_Info_UClass_AZoneGraphTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZoneGraphTestingActor.OuterSingleton, Z_Construct_UClass_AZoneGraphTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZoneGraphTestingActor.OuterSingleton;
	}
	template<> ZONEGRAPHDEBUG_API UClass* StaticClass<AZoneGraphTestingActor>()
	{
		return AZoneGraphTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZoneGraphTestingActor);
	AZoneGraphTestingActor::~AZoneGraphTestingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneLaneTest, UZoneLaneTest::StaticClass, TEXT("UZoneLaneTest"), &Z_Registration_Info_UClass_UZoneLaneTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneLaneTest), 2564816634U) },
		{ Z_Construct_UClass_UZoneGraphTestingComponent, UZoneGraphTestingComponent::StaticClass, TEXT("UZoneGraphTestingComponent"), &Z_Registration_Info_UClass_UZoneGraphTestingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphTestingComponent), 3855564642U) },
		{ Z_Construct_UClass_AZoneGraphTestingActor, AZoneGraphTestingActor::StaticClass, TEXT("AZoneGraphTestingActor"), &Z_Registration_Info_UClass_AZoneGraphTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZoneGraphTestingActor), 1800552366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_2270163795(TEXT("/Script/ZoneGraphDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
