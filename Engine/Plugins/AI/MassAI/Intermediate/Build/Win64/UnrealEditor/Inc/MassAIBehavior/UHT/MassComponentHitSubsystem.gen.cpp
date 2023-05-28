// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassComponentHitSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "MassComponentHitTypes.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassComponentHitSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSubsystem_NoRegister();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassComponentHitSubsystem();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassComponentHitSubsystem_NoRegister();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassHitResult();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	DEFINE_FUNCTION(UMassComponentHitSubsystem::execOnHitCallback)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitCallback(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UMassComponentHitSubsystem::StaticRegisterNativesUMassComponentHitSubsystem()
	{
		UClass* Class = UMassComponentHitSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHitCallback", &UMassComponentHitSubsystem::execOnHitCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics
	{
		struct MassComponentHitSubsystem_eventOnHitCallback_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassComponentHitSubsystem_eventOnHitCallback_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassComponentHitSubsystem_eventOnHitCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassComponentHitSubsystem_eventOnHitCallback_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassComponentHitSubsystem_eventOnHitCallback_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassComponentHitSubsystem_eventOnHitCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassComponentHitSubsystem, nullptr, "OnHitCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::MassComponentHitSubsystem_eventOnHitCallback_Parms), Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassComponentHitSubsystem);
	UClass* Z_Construct_UClass_UMassComponentHitSubsystem_NoRegister()
	{
		return UMassComponentHitSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassComponentHitSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignalSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SignalSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AgentSubsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HitResults;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToEntityMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentToEntityMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToEntityMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentToEntityMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntityToComponentMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityToComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityToComponentMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntityToComponentMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassComponentHitSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassComponentHitSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassComponentHitSubsystem_OnHitCallback, "OnHitCallback" }, // 462810503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem that keeps track of the latest component hits and allow mass entities to retrieve and handle them\n */" },
		{ "IncludePath", "MassComponentHitSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
		{ "ToolTip", "Subsystem that keeps track of the latest component hits and allow mass entities to retrieve and handle them" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_SignalSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_SignalSubsystem = { "SignalSubsystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassComponentHitSubsystem, SignalSubsystem), Z_Construct_UClass_UMassSignalSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_SignalSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_SignalSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_AgentSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_AgentSubsystem = { "AgentSubsystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassComponentHitSubsystem, AgentSubsystem), Z_Construct_UClass_UMassAgentSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_AgentSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_AgentSubsystem_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_ValueProp = { "HitResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassHitResult, METADATA_PARAMS(nullptr, 0) }; // 1679787
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_Key_KeyProp = { "HitResults_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(nullptr, 0) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassComponentHitSubsystem, HitResults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_MetaData)) }; // 2284468209 1679787
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_ValueProp = { "ComponentToEntityMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(nullptr, 0) }; // 2284468209
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_Key_KeyProp = { "ComponentToEntityMap_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap = { "ComponentToEntityMap", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassComponentHitSubsystem, ComponentToEntityMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_MetaData)) }; // 2284468209
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_ValueProp = { "EntityToComponentMap", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_Key_KeyProp = { "EntityToComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(nullptr, 0) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassComponentHitSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap = { "EntityToComponentMap", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassComponentHitSubsystem, EntityToComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_MetaData)) }; // 2284468209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassComponentHitSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_SignalSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_AgentSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_HitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_ComponentToEntityMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassComponentHitSubsystem_Statics::NewProp_EntityToComponentMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassComponentHitSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassComponentHitSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassComponentHitSubsystem_Statics::ClassParams = {
		&UMassComponentHitSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMassComponentHitSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassComponentHitSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassComponentHitSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassComponentHitSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassComponentHitSubsystem.OuterSingleton, Z_Construct_UClass_UMassComponentHitSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassComponentHitSubsystem.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassComponentHitSubsystem>()
	{
		return UMassComponentHitSubsystem::StaticClass();
	}
	UMassComponentHitSubsystem::UMassComponentHitSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassComponentHitSubsystem);
	UMassComponentHitSubsystem::~UMassComponentHitSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassComponentHitSubsystem, UMassComponentHitSubsystem::StaticClass, TEXT("UMassComponentHitSubsystem"), &Z_Registration_Info_UClass_UMassComponentHitSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassComponentHitSubsystem), 3923385092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_1258046905(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
