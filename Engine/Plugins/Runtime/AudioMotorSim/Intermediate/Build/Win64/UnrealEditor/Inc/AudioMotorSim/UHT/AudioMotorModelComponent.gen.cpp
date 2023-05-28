// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMotorModelComponent.h"
#include "AudioMotorSimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMotorModelComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorModelComponent();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorModelComponent_NoRegister();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSim_NoRegister();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimOutput_NoRegister();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimInputContext();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FMotorSimEntry();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSim();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotorSimEntry;
class UScriptStruct* FMotorSimEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotorSimEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotorSimEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotorSimEntry, (UObject*)Z_Construct_UPackage__Script_AudioMotorSim(), TEXT("MotorSimEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MotorSimEntry.OuterSingleton;
}
template<> AUDIOMOTORSIM_API UScriptStruct* StaticStruct<FMotorSimEntry>()
{
	return FMotorSimEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotorSimEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotorSimEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotorSimEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotorSimEntry>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotorSimEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
		nullptr,
		&NewStructOps,
		"MotorSimEntry",
		sizeof(FMotorSimEntry),
		alignof(FMotorSimEntry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotorSimEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotorSimEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotorSimEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MotorSimEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotorSimEntry.InnerSingleton, Z_Construct_UScriptStruct_FMotorSimEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotorSimEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execGetCachedInputData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAudioMotorSimInputContext*)Z_Param__Result=P_THIS->GetCachedInputData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execGetRuntimeInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAudioMotorSimRuntimeContext*)Z_Param__Result=P_THIS->GetRuntimeInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execGetGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execGetRpm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRpm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execRemoveMotorSimComponent)
	{
		P_GET_TINTERFACE(IAudioMotorSim,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMotorSimComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execAddMotorSimComponent)
	{
		P_GET_TINTERFACE(IAudioMotorSim,Z_Param_InComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_SortOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMotorSimComponent(Z_Param_InComponent,Z_Param_SortOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execRemoveMotorAudioComponent)
	{
		P_GET_TINTERFACE(IAudioMotorSimOutput,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMotorAudioComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execAddMotorAudioComponent)
	{
		P_GET_TINTERFACE(IAudioMotorSimOutput,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMotorAudioComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execStopOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execStartOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioMotorModelComponent::execUpdate)
	{
		P_GET_STRUCT(FAudioMotorSimInputContext,Z_Param_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_Input);
		P_NATIVE_END;
	}
	void UAudioMotorModelComponent::StaticRegisterNativesUAudioMotorModelComponent()
	{
		UClass* Class = UAudioMotorModelComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMotorAudioComponent", &UAudioMotorModelComponent::execAddMotorAudioComponent },
			{ "AddMotorSimComponent", &UAudioMotorModelComponent::execAddMotorSimComponent },
			{ "GetCachedInputData", &UAudioMotorModelComponent::execGetCachedInputData },
			{ "GetGear", &UAudioMotorModelComponent::execGetGear },
			{ "GetRpm", &UAudioMotorModelComponent::execGetRpm },
			{ "GetRuntimeInfo", &UAudioMotorModelComponent::execGetRuntimeInfo },
			{ "RemoveMotorAudioComponent", &UAudioMotorModelComponent::execRemoveMotorAudioComponent },
			{ "RemoveMotorSimComponent", &UAudioMotorModelComponent::execRemoveMotorSimComponent },
			{ "Reset", &UAudioMotorModelComponent::execReset },
			{ "StartOutput", &UAudioMotorModelComponent::execStartOutput },
			{ "StopOutput", &UAudioMotorModelComponent::execStopOutput },
			{ "Update", &UAudioMotorModelComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics
	{
		struct AudioMotorModelComponent_eventAddMotorAudioComponent_Parms
		{
			TScriptInterface<IAudioMotorSimOutput> InComponent;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventAddMotorAudioComponent_Parms, InComponent), Z_Construct_UClass_UAudioMotorSimOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "AddMotorAudioComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::AudioMotorModelComponent_eventAddMotorAudioComponent_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics
	{
		struct AudioMotorModelComponent_eventAddMotorSimComponent_Parms
		{
			TScriptInterface<IAudioMotorSim> InComponent;
			int32 SortOrder;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventAddMotorSimComponent_Parms, InComponent), Z_Construct_UClass_UAudioMotorSim_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_SortOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventAddMotorSimComponent_Parms, SortOrder), METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_SortOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_InComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::NewProp_SortOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "CPP_Default_SortOrder", "0" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "AddMotorSimComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::AudioMotorModelComponent_eventAddMotorSimComponent_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics
	{
		struct AudioMotorModelComponent_eventGetCachedInputData_Parms
		{
			FAudioMotorSimInputContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventGetCachedInputData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioMotorSimInputContext, METADATA_PARAMS(nullptr, 0) }; // 1694601809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "GetCachedInputData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::AudioMotorModelComponent_eventGetCachedInputData_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics
	{
		struct AudioMotorModelComponent_eventGetGear_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventGetGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "GetGear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::AudioMotorModelComponent_eventGetGear_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_GetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_GetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics
	{
		struct AudioMotorModelComponent_eventGetRpm_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventGetRpm_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "GetRpm", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::AudioMotorModelComponent_eventGetRpm_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics
	{
		struct AudioMotorModelComponent_eventGetRuntimeInfo_Parms
		{
			FAudioMotorSimRuntimeContext ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventGetRuntimeInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext, METADATA_PARAMS(nullptr, 0) }; // 519738428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "GetRuntimeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::AudioMotorModelComponent_eventGetRuntimeInfo_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics
	{
		struct AudioMotorModelComponent_eventRemoveMotorAudioComponent_Parms
		{
			TScriptInterface<IAudioMotorSimOutput> InComponent;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventRemoveMotorAudioComponent_Parms, InComponent), Z_Construct_UClass_UAudioMotorSimOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "RemoveMotorAudioComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::AudioMotorModelComponent_eventRemoveMotorAudioComponent_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics
	{
		struct AudioMotorModelComponent_eventRemoveMotorSimComponent_Parms
		{
			TScriptInterface<IAudioMotorSim> InComponent;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventRemoveMotorSimComponent_Parms, InComponent), Z_Construct_UClass_UAudioMotorSim_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "RemoveMotorSimComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::AudioMotorModelComponent_eventRemoveMotorSimComponent_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "StartOutput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "StopOutput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics
	{
		struct AudioMotorModelComponent_eventUpdate_Parms
		{
			FAudioMotorSimInputContext Input;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioMotorModelComponent_eventUpdate_Parms, Input), Z_Construct_UScriptStruct_FAudioMotorSimInputContext, METADATA_PARAMS(nullptr, 0) }; // 1694601809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotorModel" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorModelComponent, nullptr, "Update", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::AudioMotorModelComponent_eventUpdate_Parms), Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMotorModelComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorModelComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMotorModelComponent);
	UClass* Z_Construct_UClass_UAudioMotorModelComponent_NoRegister()
	{
		return UAudioMotorModelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMotorModelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimComponents;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AudioComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMotorModelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMotorModelComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorAudioComponent, "AddMotorAudioComponent" }, // 1464282479
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_AddMotorSimComponent, "AddMotorSimComponent" }, // 3369117070
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_GetCachedInputData, "GetCachedInputData" }, // 356820703
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_GetGear, "GetGear" }, // 3133924582
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_GetRpm, "GetRpm" }, // 240204030
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_GetRuntimeInfo, "GetRuntimeInfo" }, // 2678008204
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorAudioComponent, "RemoveMotorAudioComponent" }, // 1401580126
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_RemoveMotorSimComponent, "RemoveMotorSimComponent" }, // 4250001311
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_Reset, "Reset" }, // 2405258470
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_StartOutput, "StartOutput" }, // 459282513
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_StopOutput, "StopOutput" }, // 7043961
		{ &Z_Construct_UFunction_UAudioMotorModelComponent_Update, "Update" }, // 1979986482
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorModelComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "IncludePath", "AudioMotorModelComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents_Inner = { "SimComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotorSimEntry, METADATA_PARAMS(nullptr, 0) }; // 2550748615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents = { "SimComponents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMotorModelComponent, SimComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents_MetaData)) }; // 2550748615
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents_Inner = { "AudioComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAudioMotorSimOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioMotorModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents = { "AudioComponents", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioMotorModelComponent, AudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMotorModelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_SimComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorModelComponent_Statics::NewProp_AudioComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMotorModelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMotorModelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMotorModelComponent_Statics::ClassParams = {
		&UAudioMotorModelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioMotorModelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorModelComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMotorModelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorModelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMotorModelComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioMotorModelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMotorModelComponent.OuterSingleton, Z_Construct_UClass_UAudioMotorModelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMotorModelComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIM_API UClass* StaticClass<UAudioMotorModelComponent>()
	{
		return UAudioMotorModelComponent::StaticClass();
	}
	UAudioMotorModelComponent::UAudioMotorModelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMotorModelComponent);
	UAudioMotorModelComponent::~UAudioMotorModelComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ScriptStructInfo[] = {
		{ FMotorSimEntry::StaticStruct, Z_Construct_UScriptStruct_FMotorSimEntry_Statics::NewStructOps, TEXT("MotorSimEntry"), &Z_Registration_Info_UScriptStruct_MotorSimEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotorSimEntry), 2550748615U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMotorModelComponent, UAudioMotorModelComponent::StaticClass, TEXT("UAudioMotorModelComponent"), &Z_Registration_Info_UClass_UAudioMotorModelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMotorModelComponent), 3304571187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_2707766916(TEXT("/Script/AudioMotorSim"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
