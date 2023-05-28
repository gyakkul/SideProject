// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Physics/AsyncPhysicsInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncPhysicsInputComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execGetDataToConsume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetDataToConsume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execGetDataToWrite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetDataToWrite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execServerRPCBufferInput)
	{
		P_GET_OBJECT(UAsyncPhysicsData,Z_Param_AsyncPhysicsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRPCBufferInput_Implementation(Z_Param_AsyncPhysicsData);
		P_NATIVE_END;
	}
	struct AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms
	{
		UAsyncPhysicsData* AsyncPhysicsData;
	};
	static FName NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput = FName(TEXT("ServerRPCBufferInput"));
	void UAsyncPhysicsInputComponent::ServerRPCBufferInput(UAsyncPhysicsData* AsyncPhysicsData)
	{
		AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms Parms;
		Parms.AsyncPhysicsData=AsyncPhysicsData;
		ProcessEvent(FindFunctionChecked(NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput),&Parms);
	}
	void UAsyncPhysicsInputComponent::StaticRegisterNativesUAsyncPhysicsInputComponent()
	{
		UClass* Class = UAsyncPhysicsInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataToConsume", &UAsyncPhysicsInputComponent::execGetDataToConsume },
			{ "GetDataToWrite", &UAsyncPhysicsInputComponent::execGetDataToWrite },
			{ "ServerRPCBufferInput", &UAsyncPhysicsInputComponent::execServerRPCBufferInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics
	{
		struct AsyncPhysicsInputComponent_eventGetDataToConsume_Parms
		{
			const UAsyncPhysicsData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventGetDataToConsume_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Get the async physics data to execute logic off of. This data should not be modified and will NOT make its way back. Should be called from async tick */" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
		{ "ToolTip", "Get the async physics data to execute logic off of. This data should not be modified and will NOT make its way back. Should be called from async tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "GetDataToConsume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::AsyncPhysicsInputComponent_eventGetDataToConsume_Parms), Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics
	{
		struct AsyncPhysicsInputComponent_eventGetDataToWrite_Parms
		{
			UAsyncPhysicsData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventGetDataToWrite_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Get the async physics data to write to. This data will make its way to the async physics tick on client and server. Should not be called from async tick */" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
		{ "ToolTip", "Get the async physics data to write to. This data will make its way to the async physics tick on client and server. Should not be called from async tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "GetDataToWrite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::AsyncPhysicsInputComponent_eventGetDataToWrite_Parms), Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncPhysicsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::NewProp_AsyncPhysicsData = { "AsyncPhysicsData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms, AsyncPhysicsData), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::NewProp_AsyncPhysicsData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "ServerRPCBufferInput", nullptr, nullptr, sizeof(AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms), Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncPhysicsInputComponent);
	UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister()
	{
		return UAsyncPhysicsInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BufferedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToConsume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataToConsume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataToWrite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataToWrite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume, "GetDataToConsume" }, // 3524306790
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite, "GetDataToWrite" }, // 1963545767
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput, "ServerRPCBufferInput" }, // 2366817026
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Physics/AsyncPhysicsInputComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass = { "DataClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_Inner = { "BufferedData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData = { "BufferedData", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsInputComponent, BufferedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume = { "DataToConsume", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataToConsume), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite = { "DataToWrite", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataToWrite), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPhysicsInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::ClassParams = {
		&UAsyncPhysicsInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent()
	{
		if (!Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton, Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncPhysicsInputComponent>()
	{
		return UAsyncPhysicsInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncPhysicsInputComponent);
	UAsyncPhysicsInputComponent::~UAsyncPhysicsInputComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPhysicsInputComponent, UAsyncPhysicsInputComponent::StaticClass, TEXT("UAsyncPhysicsInputComponent"), &Z_Registration_Info_UClass_UAsyncPhysicsInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPhysicsInputComponent), 1875827854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_2127085397(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
