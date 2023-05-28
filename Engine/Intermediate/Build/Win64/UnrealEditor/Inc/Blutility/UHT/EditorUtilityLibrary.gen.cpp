// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EditorUtilityLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityLibrary() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorDelay();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorDelay_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorWaitForGameWorld();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityLibrary_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityBlueprintAsyncActionBase::StaticRegisterNativesUEditorUtilityBlueprintAsyncActionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityBlueprintAsyncActionBase);
	UClass* Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_NoRegister()
	{
		return UEditorUtilityBlueprintAsyncActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityBlueprintAsyncActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::ClassParams = {
		&UEditorUtilityBlueprintAsyncActionBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityBlueprintAsyncActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityBlueprintAsyncActionBase.OuterSingleton, Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityBlueprintAsyncActionBase.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityBlueprintAsyncActionBase>()
	{
		return UEditorUtilityBlueprintAsyncActionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityBlueprintAsyncActionBase);
	UEditorUtilityBlueprintAsyncActionBase::~UEditorUtilityBlueprintAsyncActionBase() {}
	struct Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "AsyncDelayComplete__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDelayComplete_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayComplete)
{
	AsyncDelayComplete.ProcessMulticastDelegate<UObject>(NULL);
}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAsyncEditorDelay::execAsyncEditorDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncEditorDelay**)Z_Param__Result=UAsyncEditorDelay::AsyncEditorDelay(Z_Param_Seconds,Z_Param_MinimumFrames);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAsyncEditorDelay::StaticRegisterNativesUAsyncEditorDelay()
	{
#if WITH_EDITOR
		UClass* Class = UAsyncEditorDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncEditorDelay", &UAsyncEditorDelay::execAsyncEditorDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics
	{
		struct AsyncEditorDelay_eventAsyncEditorDelay_Parms
		{
			float Seconds;
			int32 MinimumFrames;
			UAsyncEditorDelay* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFrames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorDelay_eventAsyncEditorDelay_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_MinimumFrames = { "MinimumFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorDelay_eventAsyncEditorDelay_Parms, MinimumFrames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorDelay_eventAsyncEditorDelay_Parms, ReturnValue), Z_Construct_UClass_UAsyncEditorDelay_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_MinimumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_MinimumFrames", "30" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncEditorDelay, nullptr, "AsyncEditorDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::AsyncEditorDelay_eventAsyncEditorDelay_Parms), Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncEditorDelay);
	UClass* Z_Construct_UClass_UAsyncEditorDelay_NoRegister()
	{
		return UAsyncEditorDelay::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncEditorDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Complete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncEditorDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncEditorDelay_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAsyncEditorDelay_AsyncEditorDelay, "AsyncEditorDelay" }, // 1546162831
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorDelay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorDelay_Statics::NewProp_Complete_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncEditorDelay_Statics::NewProp_Complete = { "Complete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncEditorDelay, Complete), Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorDelay_Statics::NewProp_Complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorDelay_Statics::NewProp_Complete_MetaData)) }; // 2965043163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncEditorDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncEditorDelay_Statics::NewProp_Complete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncEditorDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncEditorDelay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncEditorDelay_Statics::ClassParams = {
		&UAsyncEditorDelay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAsyncEditorDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorDelay_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncEditorDelay()
	{
		if (!Z_Registration_Info_UClass_UAsyncEditorDelay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncEditorDelay.OuterSingleton, Z_Construct_UClass_UAsyncEditorDelay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncEditorDelay.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncEditorDelay>()
	{
		return UAsyncEditorDelay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncEditorDelay);
	UAsyncEditorDelay::~UAsyncEditorDelay() {}
	struct Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventAsyncEditorWaitForGameWorldEvent_Parms
		{
			UWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventAsyncEditorWaitForGameWorldEvent_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "AsyncEditorWaitForGameWorldEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::_Script_Blutility_eventAsyncEditorWaitForGameWorldEvent_Parms), Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncEditorWaitForGameWorldEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncEditorWaitForGameWorldEvent, UWorld* World)
{
	struct _Script_Blutility_eventAsyncEditorWaitForGameWorldEvent_Parms
	{
		UWorld* World;
	};
	_Script_Blutility_eventAsyncEditorWaitForGameWorldEvent_Parms Parms;
	Parms.World=World;
	AsyncEditorWaitForGameWorldEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAsyncEditorWaitForGameWorld::execAsyncWaitForGameWorld)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_Server);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncEditorWaitForGameWorld**)Z_Param__Result=UAsyncEditorWaitForGameWorld::AsyncWaitForGameWorld(Z_Param_Index,Z_Param_Server);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAsyncEditorWaitForGameWorld::StaticRegisterNativesUAsyncEditorWaitForGameWorld()
	{
#if WITH_EDITOR
		UClass* Class = UAsyncEditorWaitForGameWorld::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncWaitForGameWorld", &UAsyncEditorWaitForGameWorld::execAsyncWaitForGameWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics
	{
		struct AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms
		{
			int32 Index;
			bool Server;
			UAsyncEditorWaitForGameWorld* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_Server_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Server;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Server_SetBit(void* Obj)
	{
		((AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms*)Obj)->Server = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms), &Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Server_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms, ReturnValue), Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_Server,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Server", "false" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncEditorWaitForGameWorld, nullptr, "AsyncWaitForGameWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::AsyncEditorWaitForGameWorld_eventAsyncWaitForGameWorld_Parms), Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncEditorWaitForGameWorld);
	UClass* Z_Construct_UClass_UAsyncEditorWaitForGameWorld_NoRegister()
	{
		return UAsyncEditorWaitForGameWorld::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Complete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAsyncEditorWaitForGameWorld_AsyncWaitForGameWorld, "AsyncWaitForGameWorld" }, // 2512698666
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::NewProp_Complete_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::NewProp_Complete = { "Complete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncEditorWaitForGameWorld, Complete), Z_Construct_UDelegateFunction_Blutility_AsyncEditorWaitForGameWorldEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::NewProp_Complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::NewProp_Complete_MetaData)) }; // 466569555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::NewProp_Complete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncEditorWaitForGameWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::ClassParams = {
		&UAsyncEditorWaitForGameWorld::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncEditorWaitForGameWorld()
	{
		if (!Z_Registration_Info_UClass_UAsyncEditorWaitForGameWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncEditorWaitForGameWorld.OuterSingleton, Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncEditorWaitForGameWorld.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncEditorWaitForGameWorld>()
	{
		return UAsyncEditorWaitForGameWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncEditorWaitForGameWorld);
	UAsyncEditorWaitForGameWorld::~UAsyncEditorWaitForGameWorld() {}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAsyncEditorOpenMapAndFocusActor::execAsyncEditorOpenMapAndFocusActor)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_Map);
		P_GET_PROPERTY(FStrProperty,Z_Param_FocusActorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncEditorOpenMapAndFocusActor**)Z_Param__Result=UAsyncEditorOpenMapAndFocusActor::AsyncEditorOpenMapAndFocusActor(Z_Param_Map,Z_Param_FocusActorName);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAsyncEditorOpenMapAndFocusActor::StaticRegisterNativesUAsyncEditorOpenMapAndFocusActor()
	{
#if WITH_EDITOR
		UClass* Class = UAsyncEditorOpenMapAndFocusActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncEditorOpenMapAndFocusActor", &UAsyncEditorOpenMapAndFocusActor::execAsyncEditorOpenMapAndFocusActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AsyncEditorOpenMapAndFocusActor_eventAsyncEditorOpenMapAndFocusActor_Parms
		{
			FSoftObjectPath Map;
			FString FocusActorName;
			UAsyncEditorOpenMapAndFocusActor* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FocusActorName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorOpenMapAndFocusActor_eventAsyncEditorOpenMapAndFocusActor_Parms, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_FocusActorName = { "FocusActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorOpenMapAndFocusActor_eventAsyncEditorOpenMapAndFocusActor_Parms, FocusActorName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncEditorOpenMapAndFocusActor_eventAsyncEditorOpenMapAndFocusActor_Parms, ReturnValue), Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_FocusActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor, nullptr, "AsyncEditorOpenMapAndFocusActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::AsyncEditorOpenMapAndFocusActor_eventAsyncEditorOpenMapAndFocusActor_Parms), Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncEditorOpenMapAndFocusActor);
	UClass* Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_NoRegister()
	{
		return UAsyncEditorOpenMapAndFocusActor::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Complete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAsyncEditorOpenMapAndFocusActor_AsyncEditorOpenMapAndFocusActor, "AsyncEditorOpenMapAndFocusActor" }, // 3757307344
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::NewProp_Complete_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::NewProp_Complete = { "Complete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncEditorOpenMapAndFocusActor, Complete), Z_Construct_UDelegateFunction_Blutility_AsyncDelayComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::NewProp_Complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::NewProp_Complete_MetaData)) }; // 2965043163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::NewProp_Complete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncEditorOpenMapAndFocusActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::ClassParams = {
		&UAsyncEditorOpenMapAndFocusActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor()
	{
		if (!Z_Registration_Info_UClass_UAsyncEditorOpenMapAndFocusActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncEditorOpenMapAndFocusActor.OuterSingleton, Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncEditorOpenMapAndFocusActor.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncEditorOpenMapAndFocusActor>()
	{
		return UAsyncEditorOpenMapAndFocusActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncEditorOpenMapAndFocusActor);
	UAsyncEditorOpenMapAndFocusActor::~UAsyncEditorOpenMapAndFocusActor() {}
#if WITH_EDITOR
	DEFINE_FUNCTION(UEditorUtilityLibrary::execSyncBrowserToFolders)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_FolderList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorUtilityLibrary::SyncBrowserToFolders(Z_Param_Out_FolderList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectedFolderPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedFolderPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetCurrentContentBrowserPath)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorUtilityLibrary::GetCurrentContentBrowserPath(Z_Param_Out_OutPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetActorReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execRenameAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorUtilityLibrary::RenameAsset(Z_Param_Asset,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectedAssetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedAssetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectedBlueprintClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UClass*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedBlueprintClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectedAssetsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AssetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedAssetsOfClass(Z_Param_AssetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectedAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectionBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorUtilityLibrary::GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityLibrary::execGetSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectionSet();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UEditorUtilityLibrary::StaticRegisterNativesUEditorUtilityLibrary()
	{
#if WITH_EDITOR
		UClass* Class = UEditorUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorReference", &UEditorUtilityLibrary::execGetActorReference },
			{ "GetCurrentContentBrowserPath", &UEditorUtilityLibrary::execGetCurrentContentBrowserPath },
			{ "GetSelectedAssetData", &UEditorUtilityLibrary::execGetSelectedAssetData },
			{ "GetSelectedAssets", &UEditorUtilityLibrary::execGetSelectedAssets },
			{ "GetSelectedAssetsOfClass", &UEditorUtilityLibrary::execGetSelectedAssetsOfClass },
			{ "GetSelectedBlueprintClasses", &UEditorUtilityLibrary::execGetSelectedBlueprintClasses },
			{ "GetSelectedFolderPaths", &UEditorUtilityLibrary::execGetSelectedFolderPaths },
			{ "GetSelectionBounds", &UEditorUtilityLibrary::execGetSelectionBounds },
			{ "GetSelectionSet", &UEditorUtilityLibrary::execGetSelectionSet },
			{ "RenameAsset", &UEditorUtilityLibrary::execRenameAsset },
			{ "SyncBrowserToFolders", &UEditorUtilityLibrary::execSyncBrowserToFolders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics
	{
		struct EditorUtilityLibrary_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_PathToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09* Attempts to find the actor specified by PathToActor in the current editor world\n\x09* @param\x09PathToActor\x09The path to the actor (e.g. PersistentLevel.PlayerStart)\n\x09* @return\x09""A reference to the actor, or none if it wasn't found\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetActorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::EditorUtilityLibrary_eventGetActorReference_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics
	{
		struct EditorUtilityLibrary_eventGetCurrentContentBrowserPath_Parms
		{
			FString OutPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetCurrentContentBrowserPath_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilityLibrary_eventGetCurrentContentBrowserPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilityLibrary_eventGetCurrentContentBrowserPath_Parms), &Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_OutPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Attempts to get the path for the active content browser, returns false if there is no active content browser\n\x09 * @param\x09OutPath\x09The returned path if successfully found\n\x09 * @return\x09Whether a path was successfully returned\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Attempts to get the path for the active content browser, returns false if there is no active content browser\n@param       OutPath The returned path if successfully found\n@return      Whether a path was successfully returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetCurrentContentBrowserPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::EditorUtilityLibrary_eventGetCurrentContentBrowserPath_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorUtilityLibrary_eventGetSelectedAssetData_Parms
		{
			TArray<FAssetData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedAssetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Gets the set of currently selected asset data\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Gets the set of currently selected asset data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::EditorUtilityLibrary_eventGetSelectedAssetData_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectedAssets_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Gets the set of currently selected assets\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Gets the set of currently selected assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::EditorUtilityLibrary_eventGetSelectedAssets_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectedAssetsOfClass_Parms
		{
			UClass* AssetClass;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedAssetsOfClass_Parms, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedAssetsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedAssetsOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::EditorUtilityLibrary_eventGetSelectedAssetsOfClass_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectedBlueprintClasses_Parms
		{
			TArray<UClass*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedBlueprintClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Gets the set of currently selected classes\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Gets the set of currently selected classes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedBlueprintClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::EditorUtilityLibrary_eventGetSelectedBlueprintClasses_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectedFolderPaths_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectedFolderPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Gets the path to the currently selected folder in the content browser\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Gets the path to the currently selected folder in the content browser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectedFolderPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::EditorUtilityLibrary_eventGetSelectedFolderPaths_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectionBounds_Parms
		{
			FVector Origin;
			FVector BoxExtent;
			float SphereRadius;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionBounds_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_BoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::NewProp_SphereRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectionBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::EditorUtilityLibrary_eventGetSelectionBounds_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics
	{
		struct EditorUtilityLibrary_eventGetSelectionSet_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventGetSelectionSet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "GetSelectionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::EditorUtilityLibrary_eventGetSelectionSet_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics
	{
		struct EditorUtilityLibrary_eventRenameAsset_Parms
		{
			UObject* Asset;
			FString NewName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventRenameAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventRenameAsset_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Renames an asset (cannot move folders)\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Renames an asset (cannot move folders)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "RenameAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::EditorUtilityLibrary_eventRenameAsset_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics
	{
		struct EditorUtilityLibrary_eventSyncBrowserToFolders_Parms
		{
			TArray<FString> FolderList;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList_Inner = { "FolderList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList = { "FolderList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityLibrary_eventSyncBrowserToFolders_Parms, FolderList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::NewProp_FolderList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Content Browser" },
		{ "Comment", "/**\n\x09 * Sync the Content Browser to the given folder(s)\n\x09 * @param\x09""FolderList\x09The list of folders to sync to in the Content Browser\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Sync the Content Browser to the given folder(s)\n@param       FolderList      The list of folders to sync to in the Content Browser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityLibrary, nullptr, "SyncBrowserToFolders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::EditorUtilityLibrary_eventSyncBrowserToFolders_Parms), Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityLibrary);
	UClass* Z_Construct_UClass_UEditorUtilityLibrary_NoRegister()
	{
		return UEditorUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetActorReference, "GetActorReference" }, // 4206324820
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetCurrentContentBrowserPath, "GetCurrentContentBrowserPath" }, // 1790991785
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetData, "GetSelectedAssetData" }, // 3347626076
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssets, "GetSelectedAssets" }, // 2166678738
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedAssetsOfClass, "GetSelectedAssetsOfClass" }, // 3980602366
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedBlueprintClasses, "GetSelectedBlueprintClasses" }, // 326959289
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectedFolderPaths, "GetSelectedFolderPaths" }, // 1456850822
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionBounds, "GetSelectionBounds" }, // 734784275
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_GetSelectionSet, "GetSelectionSet" }, // 3366132005
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_RenameAsset, "RenameAsset" }, // 3616195317
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorUtilityLibrary_SyncBrowserToFolders, "SyncBrowserToFolders" }, // 1646734145
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Expose editor utility functions to Blutilities \n" },
		{ "IncludePath", "EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityLibrary.h" },
		{ "ToolTip", "Expose editor utility functions to Blutilities" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityLibrary_Statics::ClassParams = {
		&UEditorUtilityLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityLibrary.OuterSingleton, Z_Construct_UClass_UEditorUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityLibrary.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityLibrary>()
	{
		return UEditorUtilityLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityLibrary);
	UEditorUtilityLibrary::~UEditorUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase, UEditorUtilityBlueprintAsyncActionBase::StaticClass, TEXT("UEditorUtilityBlueprintAsyncActionBase"), &Z_Registration_Info_UClass_UEditorUtilityBlueprintAsyncActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityBlueprintAsyncActionBase), 573265888U) },
		{ Z_Construct_UClass_UAsyncEditorDelay, UAsyncEditorDelay::StaticClass, TEXT("UAsyncEditorDelay"), &Z_Registration_Info_UClass_UAsyncEditorDelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncEditorDelay), 2183479556U) },
		{ Z_Construct_UClass_UAsyncEditorWaitForGameWorld, UAsyncEditorWaitForGameWorld::StaticClass, TEXT("UAsyncEditorWaitForGameWorld"), &Z_Registration_Info_UClass_UAsyncEditorWaitForGameWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncEditorWaitForGameWorld), 4193779786U) },
		{ Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor, UAsyncEditorOpenMapAndFocusActor::StaticClass, TEXT("UAsyncEditorOpenMapAndFocusActor"), &Z_Registration_Info_UClass_UAsyncEditorOpenMapAndFocusActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncEditorOpenMapAndFocusActor), 342580706U) },
		{ Z_Construct_UClass_UEditorUtilityLibrary, UEditorUtilityLibrary::StaticClass, TEXT("UEditorUtilityLibrary"), &Z_Registration_Info_UClass_UEditorUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityLibrary), 1163914739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_98630512(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
