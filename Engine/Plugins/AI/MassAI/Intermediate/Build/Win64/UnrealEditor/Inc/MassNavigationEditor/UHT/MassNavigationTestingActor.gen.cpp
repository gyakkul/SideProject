// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MassNavigationTestingActor.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationTestingActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_AMassNavigationTestingActor();
	MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_AMassNavigationTestingActor_NoRegister();
	MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_UMassNavigationTestingComponent();
	MASSNAVIGATIONEDITOR_API UClass* Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassNavigationEditor();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References
	void UMassNavigationTestingComponent::StaticRegisterNativesUMassNavigationTestingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationTestingComponent);
	UClass* Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister()
	{
		return UMassNavigationTestingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationTestingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalLaneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLaneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnticipationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnticipationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpecificEndPoint_MetaData[];
#endif
		static void NewProp_bHasSpecificEndPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpecificEndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoalPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationTestingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/** Component for testing MassMovement functionality. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MassNavigationTestingActor.h" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component for testing MassMovement functionality." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_ZoneGraph_MetaData[] = {
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_ZoneGraph = { "ZoneGraph", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, ZoneGraph), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_ZoneGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_ZoneGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_LaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_LaneLocation = { "LaneLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, LaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_LaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_LaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalLaneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalLaneLocation = { "GoalLaneLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, GoalLaneLocation), Z_Construct_UScriptStruct_FZoneGraphLaneLocation, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalLaneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalLaneLocation_MetaData)) }; // 1571281676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_SearchExtent_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_SearchExtent = { "SearchExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, SearchExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_SearchExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_SearchExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AnticipationDistance_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AnticipationDistance = { "AnticipationDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, AnticipationDistance), METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AnticipationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AnticipationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, AgentRadius), METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint_SetBit(void* Obj)
	{
		((UMassNavigationTestingComponent*)Obj)->bHasSpecificEndPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint = { "bHasSpecificEndPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassNavigationTestingComponent), &Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_QueryFilter_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_QueryFilter = { "QueryFilter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, QueryFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_QueryFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_QueryFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalPosition_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalPosition = { "GoalPosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassNavigationTestingComponent, GoalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassNavigationTestingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_ZoneGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_LaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalLaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_SearchExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AnticipationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_AgentRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_bHasSpecificEndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_QueryFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassNavigationTestingComponent_Statics::NewProp_GoalPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationTestingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationTestingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationTestingComponent_Statics::ClassParams = {
		&UMassNavigationTestingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassNavigationTestingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationTestingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationTestingComponent()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationTestingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationTestingComponent.OuterSingleton, Z_Construct_UClass_UMassNavigationTestingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationTestingComponent.OuterSingleton;
	}
	template<> MASSNAVIGATIONEDITOR_API UClass* StaticClass<UMassNavigationTestingComponent>()
	{
		return UMassNavigationTestingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationTestingComponent);
	UMassNavigationTestingComponent::~UMassNavigationTestingComponent() {}
	DEFINE_FUNCTION(AMassNavigationTestingActor::execClearPinnedLane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPinnedLane();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassNavigationTestingActor::execPinLane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PinLane();
		P_NATIVE_END;
	}
	void AMassNavigationTestingActor::StaticRegisterNativesAMassNavigationTestingActor()
	{
		UClass* Class = AMassNavigationTestingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPinnedLane", &AMassNavigationTestingActor::execClearPinnedLane },
			{ "PinLane", &AMassNavigationTestingActor::execPinLane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassNavigationTestingActor, nullptr, "ClearPinnedLane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassNavigationTestingActor, nullptr, "PinLane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassNavigationTestingActor_PinLane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassNavigationTestingActor_PinLane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassNavigationTestingActor);
	UClass* Z_Construct_UClass_AMassNavigationTestingActor_NoRegister()
	{
		return AMassNavigationTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_AMassNavigationTestingActor_Statics
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
	UObject* (*const Z_Construct_UClass_AMassNavigationTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigationEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMassNavigationTestingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassNavigationTestingActor_ClearPinnedLane, "ClearPinnedLane" }, // 212795282
		{ &Z_Construct_UFunction_AMassNavigationTestingActor_PinLane, "PinLane" }, // 3758352846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassNavigationTestingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Debug actor to visually test zone graph. */" },
		{ "HideCategories", "Actor Input Collision Rendering Replication Partition HLOD Cooking" },
		{ "IncludePath", "MassNavigationTestingActor.h" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug actor to visually test zone graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassNavigationTestingActor_Statics::NewProp_DebugComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MassNavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassNavigationTestingActor_Statics::NewProp_DebugComp = { "DebugComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassNavigationTestingActor, DebugComp), Z_Construct_UClass_UMassNavigationTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMassNavigationTestingActor_Statics::NewProp_DebugComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassNavigationTestingActor_Statics::NewProp_DebugComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassNavigationTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassNavigationTestingActor_Statics::NewProp_DebugComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassNavigationTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassNavigationTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassNavigationTestingActor_Statics::ClassParams = {
		&AMassNavigationTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMassNavigationTestingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassNavigationTestingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMassNavigationTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassNavigationTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassNavigationTestingActor()
	{
		if (!Z_Registration_Info_UClass_AMassNavigationTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassNavigationTestingActor.OuterSingleton, Z_Construct_UClass_AMassNavigationTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassNavigationTestingActor.OuterSingleton;
	}
	template<> MASSNAVIGATIONEDITOR_API UClass* StaticClass<AMassNavigationTestingActor>()
	{
		return AMassNavigationTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassNavigationTestingActor);
	AMassNavigationTestingActor::~AMassNavigationTestingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassNavigationTestingComponent, UMassNavigationTestingComponent::StaticClass, TEXT("UMassNavigationTestingComponent"), &Z_Registration_Info_UClass_UMassNavigationTestingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationTestingComponent), 3792406020U) },
		{ Z_Construct_UClass_AMassNavigationTestingActor, AMassNavigationTestingActor::StaticClass, TEXT("AMassNavigationTestingActor"), &Z_Registration_Info_UClass_AMassNavigationTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassNavigationTestingActor), 3183973661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_535430170(TEXT("/Script/MassNavigationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigationEditor_Private_MassNavigationTestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
