// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockRootMotionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockRootMotionComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceCache();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionSourceCache;
class UScriptStruct* FRootMotionSourceCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionSourceCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionSourceCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceCache, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("RootMotionSourceCache"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionSourceCache.OuterSingleton;
}
template<> NETWORKPREDICTIONEXTRAS_API UScriptStruct* StaticStruct<FRootMotionSourceCache>()
{
	return FRootMotionSourceCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceCache>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionSourceCache, Instance), Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewProp_Instance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewProp_Instance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		&NewStructOps,
		"RootMotionSourceCache",
		sizeof(FRootMotionSourceCache),
		alignof(FRootMotionSourceCache),
		Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceCache()
	{
		if (!Z_Registration_Info_UScriptStruct_RootMotionSourceCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionSourceCache.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootMotionSourceCache.InnerSingleton;
	}
	DEFINE_FUNCTION(UMockRootMotionComponent::execPlayRootMotionSourceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRootMotionSourceByClass(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockRootMotionComponent::execPlayRootMotionSource)
	{
		P_GET_OBJECT(UMockRootMotionSource,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRootMotionSource(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockRootMotionComponent::execInput_PlayRootMotionSourceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Input_PlayRootMotionSourceByClass(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockRootMotionComponent::execInput_PlayRootMotionSource)
	{
		P_GET_OBJECT(UMockRootMotionSource,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Input_PlayRootMotionSource(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockRootMotionComponent::execCreateRootMotionSource)
	{
		P_GET_OBJECT(UClass,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMockRootMotionSource**)Z_Param__Result=P_THIS->CreateRootMotionSource(Z_Param_Source);
		P_NATIVE_END;
	}
	void UMockRootMotionComponent::StaticRegisterNativesUMockRootMotionComponent()
	{
		UClass* Class = UMockRootMotionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRootMotionSource", &UMockRootMotionComponent::execCreateRootMotionSource },
			{ "Input_PlayRootMotionSource", &UMockRootMotionComponent::execInput_PlayRootMotionSource },
			{ "Input_PlayRootMotionSourceByClass", &UMockRootMotionComponent::execInput_PlayRootMotionSourceByClass },
			{ "PlayRootMotionSource", &UMockRootMotionComponent::execPlayRootMotionSource },
			{ "PlayRootMotionSourceByClass", &UMockRootMotionComponent::execPlayRootMotionSourceByClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics
	{
		struct MockRootMotionComponent_eventCreateRootMotionSource_Parms
		{
			TSubclassOf<UMockRootMotionSource>  Source;
			UMockRootMotionSource* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Source;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventCreateRootMotionSource_Parms, Source), Z_Construct_UClass_UClass, Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventCreateRootMotionSource_Parms, ReturnValue), Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "// ------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionComponent, nullptr, "CreateRootMotionSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::MockRootMotionComponent_eventCreateRootMotionSource_Parms), Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics
	{
		struct MockRootMotionComponent_eventInput_PlayRootMotionSource_Parms
		{
			UMockRootMotionSource* Source;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventInput_PlayRootMotionSource_Parms, Source), Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionComponent, nullptr, "Input_PlayRootMotionSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::MockRootMotionComponent_eventInput_PlayRootMotionSource_Parms), Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics
	{
		struct MockRootMotionComponent_eventInput_PlayRootMotionSourceByClass_Parms
		{
			TSubclassOf<UMockRootMotionSource>  Source;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventInput_PlayRootMotionSourceByClass_Parms, Source), Z_Construct_UClass_UClass, Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionComponent, nullptr, "Input_PlayRootMotionSourceByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::MockRootMotionComponent_eventInput_PlayRootMotionSourceByClass_Parms), Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics
	{
		struct MockRootMotionComponent_eventPlayRootMotionSource_Parms
		{
			UMockRootMotionSource* Source;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventPlayRootMotionSource_Parms, Source), Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Callable by authority. Plays \"out of band\" animation: e.g, directly sets the RootMotionSourceID on the sync state, rather than the pending InputCmd.\n// This is analogous to outside code teleporting the actor (outside of the core simulation function)\n" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
		{ "ToolTip", "Callable by authority. Plays \"out of band\" animation: e.g, directly sets the RootMotionSourceID on the sync state, rather than the pending InputCmd.\nThis is analogous to outside code teleporting the actor (outside of the core simulation function)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionComponent, nullptr, "PlayRootMotionSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::MockRootMotionComponent_eventPlayRootMotionSource_Parms), Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics
	{
		struct MockRootMotionComponent_eventPlayRootMotionSourceByClass_Parms
		{
			TSubclassOf<UMockRootMotionSource>  Source;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionComponent_eventPlayRootMotionSourceByClass_Parms, Source), Z_Construct_UClass_UClass, Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionComponent, nullptr, "PlayRootMotionSourceByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::MockRootMotionComponent_eventPlayRootMotionSourceByClass_Parms), Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionComponent);
	UClass* Z_Construct_UClass_UMockRootMotionComponent_NoRegister()
	{
		return UMockRootMotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionSourceCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionSourceCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockRootMotionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockRootMotionComponent_CreateRootMotionSource, "CreateRootMotionSource" }, // 2428798968
		{ &Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSource, "Input_PlayRootMotionSource" }, // 3822191015
		{ &Z_Construct_UFunction_UMockRootMotionComponent_Input_PlayRootMotionSourceByClass, "Input_PlayRootMotionSourceByClass" }, // 440938224
		{ &Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSource, "PlayRootMotionSource" }, // 1825090505
		{ &Z_Construct_UFunction_UMockRootMotionComponent_PlayRootMotionSourceByClass, "PlayRootMotionSourceByClass" }, // 3827828487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This component acts as the Driver for the FMockRootMotionSimulation\n// It is essentially a standin for the movement component, and would be replaced by \"new movement system\" component.\n// If we support \"root motion without movement component\" then this could either be that component, or possibly\n// built into or inherit from a USkeletalMeshComponent.\n//\n// The main thing this provides is:\n//\x09\x09-Interface for initiating root motions through the NP system (via client Input and via server \"OOB\" writes)\n//\x09\x09-FinalizeFrame: take the output of the NP simulation and push it to the movement/animation components\n//\x09\x09-Place holder implementation of IRootMotionSourceStore(the temp thing that maps our RootMotionSourceIDs -> actual sources)\n" },
		{ "IncludePath", "MockRootMotionComponent.h" },
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
		{ "ToolTip", "This component acts as the Driver for the FMockRootMotionSimulation\nIt is essentially a standin for the movement component, and would be replaced by \"new movement system\" component.\nIf we support \"root motion without movement component\" then this could either be that component, or possibly\nbuilt into or inherit from a USkeletalMeshComponent.\n\nThe main thing this provides is:\n              -Interface for initiating root motions through the NP system (via client Input and via server \"OOB\" writes)\n              -FinalizeFrame: take the output of the NP simulation and push it to the movement/animation components\n              -Place holder implementation of IRootMotionSourceStore(the temp thing that maps our RootMotionSourceIDs -> actual sources)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionComponent_Statics::NewProp_RootMotionSourceCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/MockRootMotionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockRootMotionComponent_Statics::NewProp_RootMotionSourceCache = { "RootMotionSourceCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionComponent, RootMotionSourceCache), Z_Construct_UScriptStruct_FRootMotionSourceCache, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionComponent_Statics::NewProp_RootMotionSourceCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionComponent_Statics::NewProp_RootMotionSourceCache_MetaData)) }; // 1836110480
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockRootMotionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionComponent_Statics::NewProp_RootMotionSourceCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionComponent_Statics::ClassParams = {
		&UMockRootMotionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMockRootMotionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionComponent()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionComponent.OuterSingleton, Z_Construct_UClass_UMockRootMotionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionComponent>()
	{
		return UMockRootMotionComponent::StaticClass();
	}
	UMockRootMotionComponent::UMockRootMotionComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionComponent);
	UMockRootMotionComponent::~UMockRootMotionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ScriptStructInfo[] = {
		{ FRootMotionSourceCache::StaticStruct, Z_Construct_UScriptStruct_FRootMotionSourceCache_Statics::NewStructOps, TEXT("RootMotionSourceCache"), &Z_Registration_Info_UScriptStruct_RootMotionSourceCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionSourceCache), 1836110480U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockRootMotionComponent, UMockRootMotionComponent::StaticClass, TEXT("UMockRootMotionComponent"), &Z_Registration_Info_UClass_UMockRootMotionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionComponent), 327783880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_757633618(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
