// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavCorridorTestingComponent.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "NavCorridor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCorridorTestingComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	NAVCORRIDOR_API UClass* Z_Construct_UClass_ANavCorridorTestingActor();
	NAVCORRIDOR_API UClass* Z_Construct_UClass_ANavCorridorTestingActor_NoRegister();
	NAVCORRIDOR_API UClass* Z_Construct_UClass_UNavCorridorTestingComponent();
	NAVCORRIDOR_API UClass* Z_Construct_UClass_UNavCorridorTestingComponent_NoRegister();
	NAVCORRIDOR_API UScriptStruct* Z_Construct_UScriptStruct_FNavCorridorParams();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavCorridor();
// End Cross Module References
	void UNavCorridorTestingComponent::StaticRegisterNativesUNavCorridorTestingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavCorridorTestingComponent);
	UClass* Z_Construct_UClass_UNavCorridorTestingComponent_NoRegister()
	{
		return UNavCorridorTestingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavCorridorTestingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFindCorridorToGoal_MetaData[];
#endif
		static void NewProp_bFindCorridorToGoal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindCorridorToGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPathOnGoalCorridor_MetaData[];
#endif
		static void NewProp_bFollowPathOnGoalCorridor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPathOnGoalCorridor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowLookAheadDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowLookAheadDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GoalActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorridorParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CorridorParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateParametersFromWidth_MetaData[];
#endif
		static void NewProp_bUpdateParametersFromWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateParametersFromWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingTimeUs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfindingTimeUs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorridorTimeUs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorridorTimeUs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavCorridorTestingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavCorridor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/** Component for testing AI Locomotion functionality. */" },
		{ "HideCategories", "Physics Collision Rendering Cooking Lighting Navigation Tags HLOD Mobile AssetUserData Activation Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavCorridorTestingComponent.h" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component for testing AI Locomotion functionality." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavAgentProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavAgentProps_MetaData)) }; // 54026142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** If true, finds path to Goal actor. */" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
		{ "ToolTip", "If true, finds path to Goal actor." },
	};
#endif
	void Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal_SetBit(void* Obj)
	{
		((UNavCorridorTestingComponent*)Obj)->bFindCorridorToGoal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal = { "bFindCorridorToGoal", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNavCorridorTestingComponent), &Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** If true, finds nearest path location on Goal actor corridor. */" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
		{ "ToolTip", "If true, finds nearest path location on Goal actor corridor." },
	};
#endif
	void Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor_SetBit(void* Obj)
	{
		((UNavCorridorTestingComponent*)Obj)->bFollowPathOnGoalCorridor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor = { "bFollowPathOnGoalCorridor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNavCorridorTestingComponent), &Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FollowLookAheadDistance_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FollowLookAheadDistance = { "FollowLookAheadDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, FollowLookAheadDistance), METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FollowLookAheadDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FollowLookAheadDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_GoalActor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_GoalActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_GoalActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorParams_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorParams = { "CorridorParams", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, CorridorParams), Z_Construct_UScriptStruct_FNavCorridorParams, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorParams_MetaData)) }; // 2363194505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth_SetBit(void* Obj)
	{
		((UNavCorridorTestingComponent*)Obj)->bUpdateParametersFromWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth = { "bUpdateParametersFromWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNavCorridorTestingComponent), &Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathOffset_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathOffset = { "PathOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, PathOffset), METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathfindingTimeUs_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathfindingTimeUs = { "PathfindingTimeUs", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, PathfindingTimeUs), METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathfindingTimeUs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathfindingTimeUs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorTimeUs_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorTimeUs = { "CorridorTimeUs", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavCorridorTestingComponent, CorridorTimeUs), METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorTimeUs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorTimeUs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavCorridorTestingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavAgentProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFindCorridorToGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bFollowPathOnGoalCorridor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_FollowLookAheadDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_GoalActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_bUpdateParametersFromWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_PathfindingTimeUs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCorridorTestingComponent_Statics::NewProp_CorridorTimeUs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavCorridorTestingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavCorridorTestingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavCorridorTestingComponent_Statics::ClassParams = {
		&UNavCorridorTestingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavCorridorTestingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavCorridorTestingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavCorridorTestingComponent()
	{
		if (!Z_Registration_Info_UClass_UNavCorridorTestingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavCorridorTestingComponent.OuterSingleton, Z_Construct_UClass_UNavCorridorTestingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavCorridorTestingComponent.OuterSingleton;
	}
	template<> NAVCORRIDOR_API UClass* StaticClass<UNavCorridorTestingComponent>()
	{
		return UNavCorridorTestingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCorridorTestingComponent);
	UNavCorridorTestingComponent::~UNavCorridorTestingComponent() {}
	void ANavCorridorTestingActor::StaticRegisterNativesANavCorridorTestingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavCorridorTestingActor);
	UClass* Z_Construct_UClass_ANavCorridorTestingActor_NoRegister()
	{
		return ANavCorridorTestingActor::StaticClass();
	}
	struct Z_Construct_UClass_ANavCorridorTestingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_ANavCorridorTestingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavCorridor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavCorridorTestingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Debug actor to visually test zone graph. */" },
		{ "HideCategories", "Actor Input Collision Rendering Replication Partition HLOD Cooking" },
		{ "IncludePath", "NavCorridorTestingComponent.h" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Debug actor to visually test zone graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavCorridorTestingActor_Statics::NewProp_DebugComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavCorridorTestingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavCorridorTestingActor_Statics::NewProp_DebugComp = { "DebugComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavCorridorTestingActor, DebugComp), Z_Construct_UClass_UNavCorridorTestingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavCorridorTestingActor_Statics::NewProp_DebugComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavCorridorTestingActor_Statics::NewProp_DebugComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavCorridorTestingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavCorridorTestingActor_Statics::NewProp_DebugComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavCorridorTestingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavCorridorTestingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavCorridorTestingActor_Statics::ClassParams = {
		&ANavCorridorTestingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavCorridorTestingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavCorridorTestingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavCorridorTestingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavCorridorTestingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavCorridorTestingActor()
	{
		if (!Z_Registration_Info_UClass_ANavCorridorTestingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavCorridorTestingActor.OuterSingleton, Z_Construct_UClass_ANavCorridorTestingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavCorridorTestingActor.OuterSingleton;
	}
	template<> NAVCORRIDOR_API UClass* StaticClass<ANavCorridorTestingActor>()
	{
		return ANavCorridorTestingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavCorridorTestingActor);
	ANavCorridorTestingActor::~ANavCorridorTestingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridorTestingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridorTestingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavCorridorTestingComponent, UNavCorridorTestingComponent::StaticClass, TEXT("UNavCorridorTestingComponent"), &Z_Registration_Info_UClass_UNavCorridorTestingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavCorridorTestingComponent), 2377686467U) },
		{ Z_Construct_UClass_ANavCorridorTestingActor, ANavCorridorTestingActor::StaticClass, TEXT("ANavCorridorTestingActor"), &Z_Registration_Info_UClass_ANavCorridorTestingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavCorridorTestingActor), 3412155444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridorTestingComponent_h_3920129529(TEXT("/Script/NavCorridor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridorTestingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridorTestingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
