// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/CrowdFollowingComponent.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UCrowdFollowingComponent::execSuspendCrowdSteering)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendCrowdSteering(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	void UCrowdFollowingComponent::StaticRegisterNativesUCrowdFollowingComponent()
	{
		UClass* Class = UCrowdFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SuspendCrowdSteering", &UCrowdFollowingComponent::execSuspendCrowdSteering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics
	{
		struct CrowdFollowingComponent_eventSuspendCrowdSteering_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((CrowdFollowingComponent_eventSuspendCrowdSteering_Parms*)Obj)->bSuspend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crowd" },
		{ "Comment", "/** main switch for crowd steering & avoidance */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "main switch for crowd steering & avoidance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdFollowingComponent, nullptr, "SuspendCrowdSteering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::CrowdFollowingComponent_eventSuspendCrowdSteering_Parms), Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdFollowingComponent);
	UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister()
	{
		return UCrowdFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdAgentMoveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrowdAgentMoveDirection;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrowdFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdFollowingComponent_SuspendCrowdSteering, "SuspendCrowdSteering" }, // 4188411390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Navigation/CrowdFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection = { "CrowdAgentMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, CrowdAgentMoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Group mask for this agent - use IRVOAvoidanceInterface instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Group mask for this agent - use IRVOAvoidanceInterface instead" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, AvoidanceGroup_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup_MetaData)) }; // 1978803236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Will avoid other agents if they are in one of specified groups - use IRVOAvoidanceInterface instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Will avoid other agents if they are in one of specified groups - use IRVOAvoidanceInterface instead" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToAvoid_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid_MetaData)) }; // 1978803236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid - use IRVOAvoidanceInterface instead */" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdFollowingComponent.h" },
		{ "ToolTip", "DEPRECATED: Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid - use IRVOAvoidanceInterface instead" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCrowdFollowingComponent, GroupsToIgnore_DEPRECATED), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore_MetaData)) }; // 1978803236
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CrowdAgentMoveDirection,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_CharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_AvoidanceGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToAvoid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdFollowingComponent_Statics::NewProp_GroupsToIgnore,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCrowdAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UCrowdFollowingComponent, ICrowdAgentInterface), false },  // 911828251
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdFollowingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdFollowingComponent_Statics::ClassParams = {
		&UCrowdFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdFollowingComponent()
	{
		if (!Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton, Z_Construct_UClass_UCrowdFollowingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdFollowingComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UCrowdFollowingComponent>()
	{
		return UCrowdFollowingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdFollowingComponent);
	UCrowdFollowingComponent::~UCrowdFollowingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdFollowingComponent, UCrowdFollowingComponent::StaticClass, TEXT("UCrowdFollowingComponent"), &Z_Registration_Info_UClass_UCrowdFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdFollowingComponent), 2726724522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_2320635870(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdFollowingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
