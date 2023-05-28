// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AutoDestroySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoDestroySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAutoDestroySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UAutoDestroySubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAutoDestroySubsystem::execOnActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UAutoDestroySubsystem::StaticRegisterNativesUAutoDestroySubsystem()
	{
		UClass* Class = UAutoDestroySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorEndPlay", &UAutoDestroySubsystem::execOnActorEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics
	{
		struct AutoDestroySubsystem_eventOnActorEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutoDestroySubsystem_eventOnActorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutoDestroySubsystem_eventOnActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback for a registered actor's End Play so we can remove it from our known actors */" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "Callback for a registered actor's End Play so we can remove it from our known actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDestroySubsystem, nullptr, "OnActorEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::AutoDestroySubsystem_eventOnActorEndPlay_Parms), Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoDestroySubsystem);
	UClass* Z_Construct_UClass_UAutoDestroySubsystem_NoRegister()
	{
		return UAutoDestroySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAutoDestroySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsToPoll_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToPoll_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToPoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoDestroySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoDestroySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay, "OnActorEndPlay" }, // 1839224423
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDestroySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The Auto destroy subsystem manages actors who have bAutoDestroyWhenFinished\n* set as true. This ensures that even actors who do not have Tick enabled \n* get properly destroyed, as well as decouple this behavior from AActor::Tick\n*/" },
		{ "IncludePath", "Engine/AutoDestroySubsystem.h" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "The Auto destroy subsystem manages actors who have bAutoDestroyWhenFinished\nset as true. This ensures that even actors who do not have Tick enabled\nget properly destroyed, as well as decouple this behavior from AActor::Tick" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_Inner = { "ActorsToPoll", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_MetaData[] = {
		{ "Comment", "/** Actors to check if they should auto destroy or not */" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "Actors to check if they should auto destroy or not" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll = { "ActorsToPoll", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutoDestroySubsystem, ActorsToPoll), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoDestroySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoDestroySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::ClassParams = {
		&UAutoDestroySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoDestroySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoDestroySubsystem()
	{
		if (!Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton, Z_Construct_UClass_UAutoDestroySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAutoDestroySubsystem>()
	{
		return UAutoDestroySubsystem::StaticClass();
	}
	UAutoDestroySubsystem::UAutoDestroySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoDestroySubsystem);
	UAutoDestroySubsystem::~UAutoDestroySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoDestroySubsystem, UAutoDestroySubsystem::StaticClass, TEXT("UAutoDestroySubsystem"), &Z_Registration_Info_UClass_UAutoDestroySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoDestroySubsystem), 2437117005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_474151789(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
