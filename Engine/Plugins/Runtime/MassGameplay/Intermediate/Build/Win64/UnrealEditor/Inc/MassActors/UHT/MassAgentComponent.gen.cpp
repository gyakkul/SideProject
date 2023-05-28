// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassAgentComponent.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
#include "MassEntityConfigAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAgentComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister();
	MASSACTORS_API UEnum* Z_Construct_UEnum_MassActors_EAgentComponentState();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkID();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityConfig();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgentComponentState;
	static UEnum* EAgentComponentState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAgentComponentState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAgentComponentState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassActors_EAgentComponentState, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("EAgentComponentState"));
		}
		return Z_Registration_Info_UEnum_EAgentComponentState.OuterSingleton;
	}
	template<> MASSACTORS_API UEnum* StaticEnum<EAgentComponentState>()
	{
		return EAgentComponentState_StaticEnum();
	}
	struct Z_Construct_UEnum_MassActors_EAgentComponentState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enumerators[] = {
		{ "EAgentComponentState::None", (int64)EAgentComponentState::None },
		{ "EAgentComponentState::EntityPendingCreation", (int64)EAgentComponentState::EntityPendingCreation },
		{ "EAgentComponentState::EntityCreated", (int64)EAgentComponentState::EntityCreated },
		{ "EAgentComponentState::PuppetPendingInitialization", (int64)EAgentComponentState::PuppetPendingInitialization },
		{ "EAgentComponentState::PuppetInitialized", (int64)EAgentComponentState::PuppetInitialized },
		{ "EAgentComponentState::PuppetPaused", (int64)EAgentComponentState::PuppetPaused },
		{ "EAgentComponentState::PuppetPendingReplication", (int64)EAgentComponentState::PuppetPendingReplication },
		{ "EAgentComponentState::PuppetReplicatedOrphan", (int64)EAgentComponentState::PuppetReplicatedOrphan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enum_MetaDataParams[] = {
		{ "EntityCreated.Comment", "// Actor waiting for entity creation\n" },
		{ "EntityCreated.Name", "EAgentComponentState::EntityCreated" },
		{ "EntityCreated.ToolTip", "Actor waiting for entity creation" },
		{ "EntityPendingCreation.Comment", "// States of actors needing mass entity creation\n" },
		{ "EntityPendingCreation.Name", "EAgentComponentState::EntityPendingCreation" },
		{ "EntityPendingCreation.ToolTip", "States of actors needing mass entity creation" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
		{ "None.Name", "EAgentComponentState::None" },
		{ "PuppetInitialized.Comment", "// Puppet actor queued for fragments initialization\n" },
		{ "PuppetInitialized.Name", "EAgentComponentState::PuppetInitialized" },
		{ "PuppetInitialized.ToolTip", "Puppet actor queued for fragments initialization" },
		{ "PuppetPaused.Comment", "// Puppet actor with all initialized fragments\n" },
		{ "PuppetPaused.Name", "EAgentComponentState::PuppetPaused" },
		{ "PuppetPaused.ToolTip", "Puppet actor with all initialized fragments" },
		{ "PuppetPendingInitialization.Comment", "// States are for Actor driven by Mass (puppet) needing fragments initialization\n" },
		{ "PuppetPendingInitialization.Name", "EAgentComponentState::PuppetPendingInitialization" },
		{ "PuppetPendingInitialization.ToolTip", "States are for Actor driven by Mass (puppet) needing fragments initialization" },
		{ "PuppetPendingReplication.Comment", "// Puppet actor with all fragments removed \n" },
		{ "PuppetPendingReplication.Name", "EAgentComponentState::PuppetPendingReplication" },
		{ "PuppetPendingReplication.ToolTip", "Puppet actor with all fragments removed" },
		{ "PuppetReplicatedOrphan.Comment", "// Replicated puppet actor waiting for NetID\n" },
		{ "PuppetReplicatedOrphan.Name", "EAgentComponentState::PuppetReplicatedOrphan" },
		{ "PuppetReplicatedOrphan.ToolTip", "Replicated puppet actor waiting for NetID" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassActors,
		nullptr,
		"EAgentComponentState",
		"EAgentComponentState",
		Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassActors_EAgentComponentState()
	{
		if (!Z_Registration_Info_UEnum_EAgentComponentState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgentComponentState.InnerSingleton, Z_Construct_UEnum_MassActors_EAgentComponentState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAgentComponentState.InnerSingleton;
	}
	DEFINE_FUNCTION(UMassAgentComponent::execOnRep_NetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassAgentComponent::execKillEntity)
	{
		P_GET_UBOOL(Z_Param_bDestroyActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillEntity(Z_Param_bDestroyActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassAgentComponent::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassAgentComponent::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable();
		P_NATIVE_END;
	}
	void UMassAgentComponent::StaticRegisterNativesUMassAgentComponent()
	{
		UClass* Class = UMassAgentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &UMassAgentComponent::execDisable },
			{ "Enable", &UMassAgentComponent::execEnable },
			{ "KillEntity", &UMassAgentComponent::execKillEntity },
			{ "OnRep_NetID", &UMassAgentComponent::execOnRep_NetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassAgentComponent_Disable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassAgentComponent_Disable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "Comment", "/** Registers the component with the owner effectively turning it off */" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
		{ "ToolTip", "Registers the component with the owner effectively turning it off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassAgentComponent_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassAgentComponent, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassAgentComponent_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassAgentComponent_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassAgentComponent_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassAgentComponent_Enable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassAgentComponent_Enable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "Comment", "/** Registers the component with the owner effectively turning it on. Calling it multiple times won't break anything  */" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
		{ "ToolTip", "Registers the component with the owner effectively turning it on. Calling it multiple times won't break anything" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassAgentComponent_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassAgentComponent, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassAgentComponent_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassAgentComponent_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassAgentComponent_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics
	{
		struct MassAgentComponent_eventKillEntity_Parms
		{
			bool bDestroyActor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActor_MetaData[];
#endif
		static void NewProp_bDestroyActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor_SetBit(void* Obj)
	{
		((MassAgentComponent_eventKillEntity_Parms*)Obj)->bDestroyActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor = { "bDestroyActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MassAgentComponent_eventKillEntity_Parms), &Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::NewProp_bDestroyActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassAgentComponent, nullptr, "KillEntity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::MassAgentComponent_eventKillEntity_Parms), Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassAgentComponent_KillEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassAgentComponent_KillEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassAgentComponent, nullptr, "OnRep_NetID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentComponent);
	UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister()
	{
		return UMassAgentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterInEditorMode_MetaData[];
#endif
		static void NewProp_bAutoRegisterInEditorMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterInEditorMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassAgentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassAgentComponent_Disable, "Disable" }, // 1797960596
		{ &Z_Construct_UFunction_UMassAgentComponent_Enable, "Enable" }, // 2669246969
		{ &Z_Construct_UFunction_UMassAgentComponent_KillEntity, "KillEntity" }, // 317960155
		{ &Z_Construct_UFunction_UMassAgentComponent_OnRep_NetID, "OnRep_NetID" }, // 4161672739
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mass" },
		{ "Comment", "/** \n *  There are two primary use cases for this component:\n *  1. If placed on an AActor blueprint can it lets the used specify additional fragments that will be created for \n *     entities spawned based on this given blueprint. \n *  2. If present present on an actor in the world it makes it communicate with the MassSimulation which will create an \n *     entity representing given actor. Use case 1) will also applicable in this case. The component is unregistered by \n *     default and requires manual enabling via a 'Enable' call\n * \n *  @todo use case 2) is currently sitting in a shelved CL of mine. Will be worked on next.\n */" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "MassAgentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
		{ "ToolTip", "There are two primary use cases for this component:\n1. If placed on an AActor blueprint can it lets the used specify additional fragments that will be created for\n   entities spawned based on this given blueprint.\n2. If present present on an actor in the world it makes it communicate with the MassSimulation which will create an\n   entity representing given actor. Use case 1) will also applicable in this case. The component is unregistered by\n   default and requires manual enabling via a 'Enable' call\n\n@todo use case 2) is currently sitting in a shelved CL of mine. Will be worked on next." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_EntityConfig_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_EntityConfig = { "EntityConfig", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentComponent, EntityConfig), Z_Construct_UScriptStruct_FMassEntityConfig, METADATA_PARAMS(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_EntityConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_EntityConfig_MetaData)) }; // 1558737933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_NetID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_NetID = { "NetID", "OnRep_NetID", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentComponent, NetID), Z_Construct_UScriptStruct_FMassNetworkID, METADATA_PARAMS(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_NetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_NetID_MetaData)) }; // 4144379630
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassAgentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode_SetBit(void* Obj)
	{
		((UMassAgentComponent*)Obj)->bAutoRegisterInEditorMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode = { "bAutoRegisterInEditorMode", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMassAgentComponent), &Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassAgentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_EntityConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_NetID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentComponent_Statics::NewProp_bAutoRegisterInEditorMode,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentComponent_Statics::ClassParams = {
		&UMassAgentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMassAgentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentComponent()
	{
		if (!Z_Registration_Info_UClass_UMassAgentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentComponent.OuterSingleton, Z_Construct_UClass_UMassAgentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentComponent.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentComponent>()
	{
		return UMassAgentComponent::StaticClass();
	}

	void UMassAgentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NetID(TEXT("NetID"));

		const bool bIsValid = true
			&& Name_NetID == ClassReps[(int32)ENetFields_Private::NetID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMassAgentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentComponent);
	UMassAgentComponent::~UMassAgentComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::EnumInfo[] = {
		{ EAgentComponentState_StaticEnum, TEXT("EAgentComponentState"), &Z_Registration_Info_UEnum_EAgentComponentState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3786159478U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassAgentComponent, UMassAgentComponent::StaticClass, TEXT("UMassAgentComponent"), &Z_Registration_Info_UClass_UMassAgentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentComponent), 949543412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_1303108373(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
