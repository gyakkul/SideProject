// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionComponent.h"
#include "NetworkPredictionProxy.h"
#include "NetworkPredictionReplicationProxy.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent_NoRegister();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionProxy();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationProxy();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FServerReplicationRPCParameter();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	DEFINE_FUNCTION(UNetworkPredictionComponent::execServerReceiveClientInput)
	{
		P_GET_STRUCT(FServerReplicationRPCParameter,Z_Param_ProxyParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReceiveClientInput_Validate(Z_Param_ProxyParameter))
		{
			RPC_ValidateFailed(TEXT("ServerReceiveClientInput_Validate"));
			return;
		}
		P_THIS->ServerReceiveClientInput_Implementation(Z_Param_ProxyParameter);
		P_NATIVE_END;
	}
	struct NetworkPredictionComponent_eventServerReceiveClientInput_Parms
	{
		FServerReplicationRPCParameter ProxyParameter;
	};
	static FName NAME_UNetworkPredictionComponent_ServerReceiveClientInput = FName(TEXT("ServerReceiveClientInput"));
	void UNetworkPredictionComponent::ServerReceiveClientInput(FServerReplicationRPCParameter const& ProxyParameter)
	{
		NetworkPredictionComponent_eventServerReceiveClientInput_Parms Parms;
		Parms.ProxyParameter=ProxyParameter;
		ProcessEvent(FindFunctionChecked(NAME_UNetworkPredictionComponent_ServerReceiveClientInput),&Parms);
	}
	void UNetworkPredictionComponent::StaticRegisterNativesUNetworkPredictionComponent()
	{
		UClass* Class = UNetworkPredictionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerReceiveClientInput", &UNetworkPredictionComponent::execServerReceiveClientInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::NewProp_ProxyParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::NewProp_ProxyParameter = { "ProxyParameter", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionComponent_eventServerReceiveClientInput_Parms, ProxyParameter), Z_Construct_UScriptStruct_FServerReplicationRPCParameter, METADATA_PARAMS(Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::NewProp_ProxyParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::NewProp_ProxyParameter_MetaData)) }; // 92129886
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::NewProp_ProxyParameter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The actual ServerRPC. This needs to be a UFUNCTION but is generic and not dependent on the simulation instance\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
		{ "ToolTip", "The actual ServerRPC. This needs to be a UFUNCTION but is generic and not dependent on the simulation instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkPredictionComponent, nullptr, "ServerReceiveClientInput", nullptr, nullptr, sizeof(NetworkPredictionComponent_eventServerReceiveClientInput_Parms), Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPredictionComponent);
	UClass* Z_Construct_UClass_UNetworkPredictionComponent_NoRegister()
	{
		return UNetworkPredictionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkPredictionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkPredictionProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkPredictionProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_ServerRPC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationProxy_ServerRPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_Autonomous_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationProxy_Autonomous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_Simulated_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationProxy_Simulated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_Replay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationProxy_Replay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkPredictionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetworkPredictionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkPredictionComponent_ServerReceiveClientInput, "ServerReceiveClientInput" }, // 2357205234
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n//\x09UNetworkPredictionComponent\n//\x09This is the base component for running a TNetworkedSimulationModel through an actor component. This contains the boiler plate hooks into getting the system\n//\x09initialized and plugged into the UE replication system.\n//\n//\x09This is an abstract component and cannot function on its own. It must be subclassed and InitializeNetworkPredictionProxy must be implemented.\n//\x09Ticking and RPC sending will be handled automatically.\n//\n//\x09Its also worth pointing out that nothing about being a UActorComponent is essential here. All that this component does could be done within an AActor itself.\n//\x09""An actor component makes sense for flexible/reusable code provided by the plugin. But there is nothing stopping you from copying this directly into an actor if you had reason to.\n// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "NetworkPredictionComponent.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
		{ "ToolTip", "UNetworkPredictionComponent\nThis is the base component for running a TNetworkedSimulationModel through an actor component. This contains the boiler plate hooks into getting the system\ninitialized and plugged into the UE replication system.\n\nThis is an abstract component and cannot function on its own. It must be subclassed and InitializeNetworkPredictionProxy must be implemented.\nTicking and RPC sending will be handled automatically.\n\nIts also worth pointing out that nothing about being a UActorComponent is essential here. All that this component does could be done within an AActor itself.\nAn actor component makes sense for flexible/reusable code provided by the plugin. But there is nothing stopping you from copying this directly into an actor if you had reason to." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_NetworkPredictionProxy_MetaData[] = {
		{ "Comment", "// Proxy to interface with the NetworkPrediction system\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
		{ "ToolTip", "Proxy to interface with the NetworkPrediction system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_NetworkPredictionProxy = { "NetworkPredictionProxy", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionComponent, NetworkPredictionProxy), Z_Construct_UScriptStruct_FNetworkPredictionProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_NetworkPredictionProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_NetworkPredictionProxy_MetaData)) }; // 3814517317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_ServerRPC_MetaData[] = {
		{ "Comment", "// ReplicationProxies are just pointers to the data/NetSerialize functions within the NetworkSim\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
		{ "ToolTip", "ReplicationProxies are just pointers to the data/NetSerialize functions within the NetworkSim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_ServerRPC = { "ReplicationProxy_ServerRPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionComponent, ReplicationProxy_ServerRPC), Z_Construct_UScriptStruct_FReplicationProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_ServerRPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_ServerRPC_MetaData)) }; // 3003924311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Autonomous_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Autonomous = { "ReplicationProxy_Autonomous", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionComponent, ReplicationProxy_Autonomous), Z_Construct_UScriptStruct_FReplicationProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Autonomous_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Autonomous_MetaData)) }; // 3003924311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Simulated_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Simulated = { "ReplicationProxy_Simulated", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionComponent, ReplicationProxy_Simulated), Z_Construct_UScriptStruct_FReplicationProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Simulated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Simulated_MetaData)) }; // 3003924311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Replay_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Replay = { "ReplicationProxy_Replay", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionComponent, ReplicationProxy_Replay), Z_Construct_UScriptStruct_FReplicationProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Replay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Replay_MetaData)) }; // 3003924311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPredictionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_NetworkPredictionProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_ServerRPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Autonomous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Simulated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionComponent_Statics::NewProp_ReplicationProxy_Replay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkPredictionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPredictionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionComponent_Statics::ClassParams = {
		&UNetworkPredictionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNetworkPredictionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkPredictionComponent()
	{
		if (!Z_Registration_Info_UClass_UNetworkPredictionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPredictionComponent.OuterSingleton, Z_Construct_UClass_UNetworkPredictionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkPredictionComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UClass* StaticClass<UNetworkPredictionComponent>()
	{
		return UNetworkPredictionComponent::StaticClass();
	}

	void UNetworkPredictionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NetworkPredictionProxy(TEXT("NetworkPredictionProxy"));
		static const FName Name_ReplicationProxy_Autonomous(TEXT("ReplicationProxy_Autonomous"));
		static const FName Name_ReplicationProxy_Simulated(TEXT("ReplicationProxy_Simulated"));
		static const FName Name_ReplicationProxy_Replay(TEXT("ReplicationProxy_Replay"));

		const bool bIsValid = true
			&& Name_NetworkPredictionProxy == ClassReps[(int32)ENetFields_Private::NetworkPredictionProxy].Property->GetFName()
			&& Name_ReplicationProxy_Autonomous == ClassReps[(int32)ENetFields_Private::ReplicationProxy_Autonomous].Property->GetFName()
			&& Name_ReplicationProxy_Simulated == ClassReps[(int32)ENetFields_Private::ReplicationProxy_Simulated].Property->GetFName()
			&& Name_ReplicationProxy_Replay == ClassReps[(int32)ENetFields_Private::ReplicationProxy_Replay].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNetworkPredictionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionComponent);
	UNetworkPredictionComponent::~UNetworkPredictionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPredictionComponent, UNetworkPredictionComponent::StaticClass, TEXT("UNetworkPredictionComponent"), &Z_Registration_Info_UClass_UNetworkPredictionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPredictionComponent), 1890093474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_1698609955(TEXT("/Script/NetworkPrediction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
