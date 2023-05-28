// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerHandle() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimerHandle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "TimerDynamicDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTimerDynamicDelegate_DelegateWrapper(const FScriptDelegate& TimerDynamicDelegate)
{
	TimerDynamicDelegate.ProcessDelegate<UObject>(NULL);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimerHandle;
class UScriptStruct* FTimerHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimerHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimerHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimerHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimerHandle"));
	}
	return Z_Registration_Info_UScriptStruct_TimerHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimerHandle>()
{
	return FTimerHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimerHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimerHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Unique handle that can be used to distinguish timers that have identical delegates. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimerHandle.h" },
		{ "ToolTip", "Unique handle that can be used to distinguish timers that have identical delegates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimerHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimerHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimerHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimerHandle.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FTimerHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimerHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimerHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerHandle_Statics::NewProp_Handle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimerHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimerHandle_Statics::NewProp_Handle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimerHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimerHandle",
		sizeof(FTimerHandle),
		alignof(FTimerHandle),
		Z_Construct_UScriptStruct_FTimerHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimerHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimerHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_TimerHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimerHandle.InnerSingleton, Z_Construct_UScriptStruct_FTimerHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimerHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimerHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimerHandle_h_Statics::ScriptStructInfo[] = {
		{ FTimerHandle::StaticStruct, Z_Construct_UScriptStruct_FTimerHandle_Statics::NewStructOps, TEXT("TimerHandle"), &Z_Registration_Info_UScriptStruct_TimerHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimerHandle), 3633724737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimerHandle_h_474094036(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimerHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimerHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
