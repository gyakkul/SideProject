// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARBlueprintProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintProxy() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	void UARBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARBaseAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBaseAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARBaseAsyncTaskBlueprintProxy::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBaseAsyncTaskBlueprintProxy>()
	{
		return UARBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBaseAsyncTaskBlueprintProxy);
	UARBaseAsyncTaskBlueprintProxy::~UARBaseAsyncTaskBlueprintProxy() {}
	struct Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventARSaveWorldPin_Parms
		{
			TArray<uint8> SavedWorld;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedWorld_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedWorld_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_Inner = { "SavedWorld", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld = { "SavedWorld", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventARSaveWorldPin_Parms, SavedWorld), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "ARSaveWorldPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::_Script_AugmentedReality_eventARSaveWorldPin_Parms), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FARSaveWorldPin_DelegateWrapper(const FMulticastScriptDelegate& ARSaveWorldPin, TArray<uint8> const& SavedWorld)
{
	struct _Script_AugmentedReality_eventARSaveWorldPin_Parms
	{
		TArray<uint8> SavedWorld;
	};
	_Script_AugmentedReality_eventARSaveWorldPin_Parms Parms;
	Parms.SavedWorld=SavedWorld;
	ARSaveWorldPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UARSaveWorldAsyncTaskBlueprintProxy::execARSaveWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSaveWorldAsyncTaskBlueprintProxy**)Z_Param__Result=UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UARSaveWorldAsyncTaskBlueprintProxy::StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy()
	{
		UClass* Class = UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ARSaveWorld", &UARSaveWorldAsyncTaskBlueprintProxy::execARSaveWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics
	{
		struct ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms
		{
			UObject* WorldContextObject;
			UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms, ReturnValue), Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Augmented Reality" },
		{ "Comment", "/**\n\x09 * Saves an AR world to a byte array for network replication or saving to disk\n\x09 *\n\x09 * @param bCompressData whether to compress the data or not\n\x09 */" },
		{ "DisplayName", "Save AR World" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
		{ "ToolTip", "Saves an AR world to a byte array for network replication or saving to disk\n\n@param bCompressData whether to compress the data or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy, nullptr, "ARSaveWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms), Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSaveWorldAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld, "ARSaveWorld" }, // 876732244
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSaveWorldAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1385054746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSaveWorldAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) }; // 1385054746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSaveWorldAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARSaveWorldAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARSaveWorldAsyncTaskBlueprintProxy>()
	{
		return UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
	}
	UARSaveWorldAsyncTaskBlueprintProxy::UARSaveWorldAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSaveWorldAsyncTaskBlueprintProxy);
	UARSaveWorldAsyncTaskBlueprintProxy::~UARSaveWorldAsyncTaskBlueprintProxy() {}
	struct Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventARGetCandidateObjectPin_Parms
		{
			UARCandidateObject* SavedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::NewProp_SavedObject = { "SavedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms, SavedObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::NewProp_SavedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "ARGetCandidateObjectPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FARGetCandidateObjectPin_DelegateWrapper(const FMulticastScriptDelegate& ARGetCandidateObjectPin, UARCandidateObject* SavedObject)
{
	struct _Script_AugmentedReality_eventARGetCandidateObjectPin_Parms
	{
		UARCandidateObject* SavedObject;
	};
	_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms Parms;
	Parms.SavedObject=SavedObject;
	ARGetCandidateObjectPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UARGetCandidateObjectAsyncTaskBlueprintProxy::execARGetCandidateObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARGetCandidateObjectAsyncTaskBlueprintProxy**)Z_Param__Result=UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Extent);
		P_NATIVE_END;
	}
	void UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy()
	{
		UClass* Class = UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ARGetCandidateObject", &UARGetCandidateObjectAsyncTaskBlueprintProxy::execARGetCandidateObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics
	{
		struct ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FVector Extent;
			UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, ReturnValue), Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Augmented Reality" },
		{ "Comment", "/**\n\x09 * Saves the point cloud centered at the specified location capturing all of the features within the specified extent as an object that can be detected later\n\x09 *\n\x09 * @param Location the center of the extent to grab features at\n\x09 * @param Extent the size of the region to grab feature points\n\x09 */" },
		{ "DisplayName", "Get AR Candidate Object" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
		{ "ToolTip", "Saves the point cloud centered at the specified location capturing all of the features within the specified extent as an object that can be detected later\n\n@param Location the center of the extent to grab features at\n@param Extent the size of the region to grab feature points" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy, nullptr, "ARGetCandidateObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms), Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARGetCandidateObjectAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject, "ARGetCandidateObject" }, // 1701270318
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2640206740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) }; // 2640206740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGetCandidateObjectAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGetCandidateObjectAsyncTaskBlueprintProxy>()
	{
		return UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
	}
	UARGetCandidateObjectAsyncTaskBlueprintProxy::UARGetCandidateObjectAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGetCandidateObjectAsyncTaskBlueprintProxy);
	UARGetCandidateObjectAsyncTaskBlueprintProxy::~UARGetCandidateObjectAsyncTaskBlueprintProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy::StaticClass, TEXT("UARBaseAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARBaseAsyncTaskBlueprintProxy), 1105044687U) },
		{ Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy, UARSaveWorldAsyncTaskBlueprintProxy::StaticClass, TEXT("UARSaveWorldAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSaveWorldAsyncTaskBlueprintProxy), 4049681796U) },
		{ Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy, UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass, TEXT("UARGetCandidateObjectAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARGetCandidateObjectAsyncTaskBlueprintProxy), 1109050052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_399765665(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
