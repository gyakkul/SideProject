// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionSubsystem.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UWorldPartitionSubsystem::execIsAllStreamingCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllStreamingCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionSubsystem::execIsStreamingCompleted)
	{
		P_GET_ENUM(EWorldPartitionRuntimeCellState,Z_Param_QueryState);
		P_GET_TARRAY_REF(FWorldPartitionStreamingQuerySource,Z_Param_Out_QuerySources);
		P_GET_UBOOL(Z_Param_bExactState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreamingCompleted(EWorldPartitionRuntimeCellState(Z_Param_QueryState),Z_Param_Out_QuerySources,Z_Param_bExactState);
		P_NATIVE_END;
	}
	void UWorldPartitionSubsystem::StaticRegisterNativesUWorldPartitionSubsystem()
	{
		UClass* Class = UWorldPartitionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAllStreamingCompleted", &UWorldPartitionSubsystem::execIsAllStreamingCompleted },
			{ "IsStreamingCompleted", &UWorldPartitionSubsystem::execIsStreamingCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics
	{
		struct WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if world partition is done streaming levels, adding them to the world or removing them from the world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
		{ "ToolTip", "Returns true if world partition is done streaming levels, adding them to the world or removing them from the world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionSubsystem, nullptr, "IsAllStreamingCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms), Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics
	{
		struct WorldPartitionSubsystem_eventIsStreamingCompleted_Parms
		{
			EWorldPartitionRuntimeCellState QueryState;
			TArray<FWorldPartitionStreamingQuerySource> QuerySources;
			bool bExactState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuerySources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuerySources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuerySources;
		static void NewProp_bExactState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState = { "QueryState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms, QueryState), Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState, METADATA_PARAMS(nullptr, 0) }; // 245423371
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_Inner = { "QuerySources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource, METADATA_PARAMS(nullptr, 0) }; // 551635152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources = { "QuerySources", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms, QuerySources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_MetaData)) }; // 551635152
	void Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState_SetBit(void* Obj)
	{
		((WorldPartitionSubsystem_eventIsStreamingCompleted_Parms*)Obj)->bExactState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState = { "bExactState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldPartitionSubsystem_eventIsStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "//~End FTickableGameObject\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionSubsystem, nullptr, "IsStreamingCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionSubsystem);
	UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister()
	{
		return UWorldPartitionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted, "IsAllStreamingCompleted" }, // 5071869
		{ &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted, "IsStreamingCompleted" }, // 483342228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWorldPartitionSubsystem\n */" },
		{ "IncludePath", "WorldPartition/WorldPartitionSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
		{ "ToolTip", "UWorldPartitionSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionSubsystem_Statics::ClassParams = {
		&UWorldPartitionSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton, Z_Construct_UClass_UWorldPartitionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionSubsystem>()
	{
		return UWorldPartitionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionSubsystem);
	UWorldPartitionSubsystem::~UWorldPartitionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionSubsystem, UWorldPartitionSubsystem::StaticClass, TEXT("UWorldPartitionSubsystem"), &Z_Registration_Info_UClass_UWorldPartitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionSubsystem), 2598691703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_1051069804(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
