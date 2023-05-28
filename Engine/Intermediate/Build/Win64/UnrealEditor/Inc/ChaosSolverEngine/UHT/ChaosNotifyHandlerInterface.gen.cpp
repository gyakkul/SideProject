// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosNotifyHandlerInterface.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosNotifyHandlerInterface() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister();
	CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo;
class UScriptStruct* FChaosPhysicsCollisionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosPhysicsCollisionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosPhysicsCollisionInfo>()
{
	return FChaosPhysicsCollisionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OtherMass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosPhysicsCollisionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Location of the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Location of the impact" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Normal at the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Normal at the impact" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity = { "OtherVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity = { "OtherAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass = { "OtherMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosPhysicsCollisionInfo",
		sizeof(FChaosPhysicsCollisionInfo),
		alignof(FChaosPhysicsCollisionInfo),
		Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton, Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics
	{
		struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms
		{
			FChaosPhysicsCollisionInfo CollisionInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo_MetaData)) }; // 1218852645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine, nullptr, "OnChaosPhysicsCollision__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosPhysicsCollision_DelegateWrapper(const FMulticastScriptDelegate& OnChaosPhysicsCollision, FChaosPhysicsCollisionInfo const& CollisionInfo)
{
	struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms
	{
		FChaosPhysicsCollisionInfo CollisionInfo;
	};
	_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms Parms;
	Parms.CollisionInfo=CollisionInfo;
	OnChaosPhysicsCollision.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UChaosNotifyHandlerInterface::StaticRegisterNativesUChaosNotifyHandlerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosNotifyHandlerInterface);
	UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister()
	{
		return UChaosNotifyHandlerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChaosNotifyHandlerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams = {
		&UChaosNotifyHandlerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface()
	{
		if (!Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton, Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosNotifyHandlerInterface>()
	{
		return UChaosNotifyHandlerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosNotifyHandlerInterface);
	UChaosNotifyHandlerInterface::~UChaosNotifyHandlerInterface() {}
	DEFINE_FUNCTION(UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult)
	{
		P_GET_STRUCT_REF(FChaosPhysicsCollisionInfo,Z_Param_Out_PhysicsCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(Z_Param_Out_PhysicsCollision);
		P_NATIVE_END;
	}
	void UChaosSolverEngineBlueprintLibrary::StaticRegisterNativesUChaosSolverEngineBlueprintLibrary()
	{
		UClass* Class = UChaosSolverEngineBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertPhysicsCollisionToHitResult", &UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics
	{
		struct ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms
		{
			FChaosPhysicsCollisionInfo PhysicsCollision;
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision = { "PhysicsCollision", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, PhysicsCollision), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision_MetaData)) }; // 1218852645
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, nullptr, "ConvertPhysicsCollisionToHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms), Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosSolverEngineBlueprintLibrary);
	UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister()
	{
		return UChaosSolverEngineBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, "ConvertPhysicsCollisionToHitResult" }, // 1639127961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolverEngineBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams = {
		&UChaosSolverEngineBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolverEngineBlueprintLibrary>()
	{
		return UChaosSolverEngineBlueprintLibrary::StaticClass();
	}
	UChaosSolverEngineBlueprintLibrary::UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolverEngineBlueprintLibrary);
	UChaosSolverEngineBlueprintLibrary::~UChaosSolverEngineBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ScriptStructInfo[] = {
		{ FChaosPhysicsCollisionInfo::StaticStruct, Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewStructOps, TEXT("ChaosPhysicsCollisionInfo"), &Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosPhysicsCollisionInfo), 1218852645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosNotifyHandlerInterface, UChaosNotifyHandlerInterface::StaticClass, TEXT("UChaosNotifyHandlerInterface"), &Z_Registration_Info_UClass_UChaosNotifyHandlerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosNotifyHandlerInterface), 3174670757U) },
		{ Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, UChaosSolverEngineBlueprintLibrary::StaticClass, TEXT("UChaosSolverEngineBlueprintLibrary"), &Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosSolverEngineBlueprintLibrary), 732395524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_2547420922(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
