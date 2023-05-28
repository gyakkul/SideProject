// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationTestingActor.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTestingActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavCostDisplay;
	static UEnum* ENavCostDisplay_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavCostDisplay"));
		}
		return Z_Registration_Info_UEnum_ENavCostDisplay.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavCostDisplay::Type>()
	{
		return ENavCostDisplay_StaticEnum();
	}
	struct Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enumerators[] = {
		{ "ENavCostDisplay::TotalCost", (int64)ENavCostDisplay::TotalCost },
		{ "ENavCostDisplay::HeuristicOnly", (int64)ENavCostDisplay::HeuristicOnly },
		{ "ENavCostDisplay::RealCostOnly", (int64)ENavCostDisplay::RealCostOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enum_MetaDataParams[] = {
		{ "HeuristicOnly.Name", "ENavCostDisplay::HeuristicOnly" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "RealCostOnly.Name", "ENavCostDisplay::RealCostOnly" },
		{ "TotalCost.Name", "ENavCostDisplay::TotalCost" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		"ENavCostDisplay",
		"ENavCostDisplay::Type",
		Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NavigationSystem_ENavCostDisplay()
	{
		if (!Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavCostDisplay_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavCostDisplay.InnerSingleton;
	}
	void ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationTestingActor);
	UClass* Z_Construct_UClass_ANavigationTestingActor_NoRegister()
	{
		return ANavigationTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InvokerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActAsNavigationInvoker_MetaData[];
#endif
		static void NewProp_bActAsNavigationInvoker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActAsNavigationInvoker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryingExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryingExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectedLocationValid_MetaData[];
#endif
		static void NewProp_bProjectedLocationValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectedLocationValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchStart_MetaData[];
#endif
		static void NewProp_bSearchStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostLimitFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostLimitFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCostLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCostLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBacktracking_MetaData[];
#endif
		static void NewProp_bBacktracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBacktracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHierarchicalPathfinding_MetaData[];
#endif
		static void NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHierarchicalPathfinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGatherDetailedInfo_MetaData[];
#endif
		static void NewProp_bGatherDetailedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGatherDetailedInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[];
#endif
		static void NewProp_bRequireNavigableEndLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavigableEndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDistanceToWall_MetaData[];
#endif
		static void NewProp_bDrawDistanceToWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDistanceToWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodePool_MetaData[];
#endif
		static void NewProp_bShowNodePool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodePool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBestPath_MetaData[];
#endif
		static void NewProp_bShowBestPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBestPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDiffWithPreviousStep_MetaData[];
#endif
		static void NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDiffWithPreviousStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostDisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CostDisplayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextCanvasOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextCanvasOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathExist_MetaData[];
#endif
		static void NewProp_bPathExist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathExist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathIsPartial_MetaData[];
#endif
		static void NewProp_bPathIsPartial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathIsPartial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathSearchOutOfNodes_MetaData[];
#endif
		static void NewProp_bPathSearchOutOfNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathSearchOutOfNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfindingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathCost_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PathCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathfindingSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowStepIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShowStepIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFromCornersDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetFromCornersDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Actor Input Rendering Replication HLOD Cooking" },
		{ "IncludePath", "NavigationTestingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, EdRenderComp), Z_Construct_UClass_UNavTestRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditCondition", "bActAsNavigationInvoker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent = { "InvokerComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, InvokerComponent), Z_Construct_UClass_UNavigationInvokerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData[] = {
		{ "Category", "Navigation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bActAsNavigationInvoker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker = { "bActAsNavigationInvoker", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "Agent" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps_MetaData)) }; // 54026142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData[] = {
		{ "Category", "Agent" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent = { "QueryingExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, QueryingExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation = { "ProjectedLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData[] = {
		{ "Category", "AgentStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bProjectedLocationValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid = { "bProjectedLocationValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, start the search from this actor, else start the search from the other actor */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, start the search from this actor, else start the search from the other actor" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bSearchStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart = { "bSearchStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** this multiplier is used to compute a max node cost allowed to the open list\n\x09 *\x09(cost limit = CostLimitFactor*InitialHeuristicEstimate) */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "this multiplier is used to compute a max node cost allowed to the open list\n    (cost limit = CostLimitFactor*InitialHeuristicEstimate)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor = { "CostLimitFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, CostLimitFactor), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0" },
		{ "Comment", "/** minimum cost limit clamping value (in cost units)\n\x09 *\x09used to allow large deviation in short paths */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "minimum cost limit clamping value (in cost units)\n    used to allow large deviation in short paths" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit = { "MinimumCostLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, MinimumCostLimit), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** Instead of regular pathfinding from source to target location do\n\x09 *\x09""a 'backwards' search that searches from the source, but as if the allowed\n\x09 *\x09movement direction was coming from the target. Meaningful only for paths\n\x09 *\x09""containing one-direction nav links. */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Instead of regular pathfinding from source to target location do\n    a 'backwards' search that searches from the source, but as if the allowed\n    movement direction was coming from the target. Meaningful only for paths\n    containing one-direction nav links." },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bBacktracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking = { "bBacktracking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bUseHierarchicalPathfinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding = { "bUseHierarchicalPathfinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, all steps of A* algorithm will be accessible for debugging */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, all steps of A* algorithm will be accessible for debugging" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bGatherDetailedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo = { "bGatherDetailedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** if set, require the end location to be close to the navigation data. The tolerance is controlled by QueryingExtent */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "if set, require the end location to be close to the navigation data. The tolerance is controlled by QueryingExtent" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bRequireNavigableEndLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bDrawDistanceToWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall = { "bDrawDistanceToWall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show polys from open (orange) and closed (yellow) sets */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show polys from open (orange) and closed (yellow) sets" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowNodePool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool = { "bShowNodePool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show current best path */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show current best path" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowBestPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath = { "bShowBestPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** show which nodes were modified in current A* step */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "show which nodes were modified in current A* step" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShowDiffWithPreviousStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep = { "bShowDiffWithPreviousStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bShouldBeVisibleInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame = { "bShouldBeVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** determines which cost will be shown*/" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "determines which cost will be shown" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode = { "CostDisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, CostDisplayMode), Z_Construct_UEnum_NavigationSystem_ENavCostDisplay, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode_MetaData)) }; // 1665719717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** text canvas offset to apply */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "text canvas offset to apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset = { "TextCanvasOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, TextCanvasOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathExist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist = { "bPathExist", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathIsPartial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial = { "bPathIsPartial", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	void Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit(void* Obj)
	{
		((ANavigationTestingActor*)Obj)->bPathSearchOutOfNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes = { "bPathSearchOutOfNodes", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationTestingActor), &Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "Comment", "/** Time in micro seconds */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "Time in micro seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime = { "PathfindingTime", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathfindingTime), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost = { "PathCost", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathCost), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData[] = {
		{ "Category", "PathfindingStatus" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps = { "PathfindingSteps", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, PathfindingSteps), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, OtherActor), Z_Construct_UClass_ANavigationTestingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex = { "ShowStepIndex", nullptr, (EPropertyFlags)0x0010000000002801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, ShowStepIndex), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/NavigationTestingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance = { "OffsetFromCornersDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationTestingActor, OffsetFromCornersDistance), METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CapsuleComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_InvokerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bActAsNavigationInvoker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_NavAgentProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_QueryingExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MyNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ProjectedLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bProjectedLocationValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bSearchStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostLimitFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_MinimumCostLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bBacktracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bUseHierarchicalPathfinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bGatherDetailedInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bRequireNavigableEndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bDrawDistanceToWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowNodePool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowBestPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShowDiffWithPreviousStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bShouldBeVisibleInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_CostDisplayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_TextCanvasOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathExist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathIsPartial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_bPathSearchOutOfNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_PathfindingSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_ShowStepIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationTestingActor_Statics::NewProp_OffsetFromCornersDistance,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationTestingActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavAgentInterface), false },  // 4068322959
			{ Z_Construct_UClass_UNavPathObserverInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationTestingActor, INavPathObserverInterface), false },  // 1846612219
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams = {
		&ANavigationTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationTestingActor()
	{
		if (!Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton, Z_Construct_UClass_ANavigationTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationTestingActor.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationTestingActor>()
	{
		return ANavigationTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationTestingActor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::EnumInfo[] = {
		{ ENavCostDisplay_StaticEnum, TEXT("ENavCostDisplay"), &Z_Registration_Info_UEnum_ENavCostDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1665719717U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationTestingActor, ANavigationTestingActor::StaticClass, TEXT("ANavigationTestingActor"), &Z_Registration_Info_UClass_ANavigationTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationTestingActor), 2022258179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_4122125007(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
