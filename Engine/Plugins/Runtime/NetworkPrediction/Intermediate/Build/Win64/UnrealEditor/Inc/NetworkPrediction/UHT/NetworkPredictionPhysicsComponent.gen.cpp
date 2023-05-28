// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionPhysicsComponent.h"
#include "NetworkPredictionProxy.h"
#include "NetworkPredictionReplicationProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionPhysicsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent_NoRegister();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionProxy();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationProxy();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	void UNetworkPredictionPhysicsComponent::StaticRegisterNativesUNetworkPredictionPhysicsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPredictionPhysicsComponent);
	UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent_NoRegister()
	{
		return UNetworkPredictionPhysicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkPredictionProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkPredictionProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpdatedPrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n//\x09UNetworkPredictionPhysicsComponent\n//\n//\x09This is a component that will register a FGenericPhysicsModelDef and bind to the first UPrimitiveComponent found in the parent actor.\n//\x09That is - there is NO backing NetworkPrediction simulation/gameplay code. This will always be SimulatedProxy and does not support any\n//\x09of the AP<-->Server communication that UNetworkPredictionComponent.\n//\n//\x09To fully emphasize: this is for STAND ALONE physics objects that want to use NP's fixed tick services. \n//\x09It is NOT for \"any NP object that uses physics\". A vehicle that can be controlled by a client needs to use (or model after) UNetworkPredictionComponent.\n//\n//\x09""Even then, it is just sort of an example. An extra component may not be the best way to use this. It may make more sense to just\n//\x09put the important bits on your actor class and set the exact UpdatedPrimitive you want (really PhysicsActorHandle is all that matters!)\n//\n// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "NetworkPredictionPhysicsComponent.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionPhysicsComponent.h" },
		{ "ToolTip", "UNetworkPredictionPhysicsComponent\n\nThis is a component that will register a FGenericPhysicsModelDef and bind to the first UPrimitiveComponent found in the parent actor.\nThat is - there is NO backing NetworkPrediction simulation/gameplay code. This will always be SimulatedProxy and does not support any\nof the AP<-->Server communication that UNetworkPredictionComponent.\n\nTo fully emphasize: this is for STAND ALONE physics objects that want to use NP's fixed tick services.\nIt is NOT for \"any NP object that uses physics\". A vehicle that can be controlled by a client needs to use (or model after) UNetworkPredictionComponent.\n\nEven then, it is just sort of an example. An extra component may not be the best way to use this. It may make more sense to just\nput the important bits on your actor class and set the exact UpdatedPrimitive you want (really PhysicsActorHandle is all that matters!)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_NetworkPredictionProxy_MetaData[] = {
		{ "Comment", "// Proxy to interface with the NetworkPrediction system\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionPhysicsComponent.h" },
		{ "ToolTip", "Proxy to interface with the NetworkPrediction system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_NetworkPredictionProxy = { "NetworkPredictionProxy", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionPhysicsComponent, NetworkPredictionProxy), Z_Construct_UScriptStruct_FNetworkPredictionProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_NetworkPredictionProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_NetworkPredictionProxy_MetaData)) }; // 3814517317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_UpdatedPrimitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetworkPredictionPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_UpdatedPrimitive = { "UpdatedPrimitive", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionPhysicsComponent, UpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_UpdatedPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_UpdatedPrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_ReplicationProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_ReplicationProxy = { "ReplicationProxy", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionPhysicsComponent, ReplicationProxy), Z_Construct_UScriptStruct_FReplicationProxy, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_ReplicationProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_ReplicationProxy_MetaData)) }; // 3003924311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_NetworkPredictionProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_UpdatedPrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::NewProp_ReplicationProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPredictionPhysicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::ClassParams = {
		&UNetworkPredictionPhysicsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkPredictionPhysicsComponent()
	{
		if (!Z_Registration_Info_UClass_UNetworkPredictionPhysicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPredictionPhysicsComponent.OuterSingleton, Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkPredictionPhysicsComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UClass* StaticClass<UNetworkPredictionPhysicsComponent>()
	{
		return UNetworkPredictionPhysicsComponent::StaticClass();
	}

	void UNetworkPredictionPhysicsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NetworkPredictionProxy(TEXT("NetworkPredictionProxy"));
		static const FName Name_ReplicationProxy(TEXT("ReplicationProxy"));

		const bool bIsValid = true
			&& Name_NetworkPredictionProxy == ClassReps[(int32)ENetFields_Private::NetworkPredictionProxy].Property->GetFName()
			&& Name_ReplicationProxy == ClassReps[(int32)ENetFields_Private::ReplicationProxy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNetworkPredictionPhysicsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionPhysicsComponent);
	UNetworkPredictionPhysicsComponent::~UNetworkPredictionPhysicsComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPredictionPhysicsComponent, UNetworkPredictionPhysicsComponent::StaticClass, TEXT("UNetworkPredictionPhysicsComponent"), &Z_Registration_Info_UClass_UNetworkPredictionPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPredictionPhysicsComponent), 2714098508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_2087049808(TEXT("/Script/NetworkPrediction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
