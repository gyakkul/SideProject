// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewTargetPolicy/GameplayViewTargetPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayViewTargetPolicy() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UGameplayViewTargetPolicy();
	VCAMCORE_API UClass* Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams;
class UScriptStruct* FDeterminePlayerControllersTargetPolicyParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("DeterminePlayerControllersTargetPolicyParams"));
	}
	return Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FDeterminePlayerControllersTargetPolicyParams>()
{
	return FDeterminePlayerControllersTargetPolicyParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToAffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraToAffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsActive_MetaData[];
#endif
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeterminePlayerControllersTargetPolicyParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_OutputProvider_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The output provider in question */" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "The output provider in question" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_OutputProvider = { "OutputProvider", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminePlayerControllersTargetPolicyParams, OutputProvider), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_OutputProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_OutputProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_CameraToAffect_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The camera the output provider is associated with. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "The camera the output provider is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_CameraToAffect = { "CameraToAffect", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeterminePlayerControllersTargetPolicyParams, CameraToAffect), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_CameraToAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_CameraToAffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether the output provider will be made active or inactive. */" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "Whether the output provider will be made active or inactive." },
	};
#endif
	void Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((FDeterminePlayerControllersTargetPolicyParams*)Obj)->bNewIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDeterminePlayerControllersTargetPolicyParams), &Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_OutputProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_CameraToAffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewProp_bNewIsActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"DeterminePlayerControllersTargetPolicyParams",
		sizeof(FDeterminePlayerControllersTargetPolicyParams),
		alignof(FDeterminePlayerControllersTargetPolicyParams),
		Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.InnerSingleton, Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUpdateViewTargetPolicyParams>() == std::is_polymorphic<FDeterminePlayerControllersTargetPolicyParams>(), "USTRUCT FUpdateViewTargetPolicyParams cannot be polymorphic unless super FDeterminePlayerControllersTargetPolicyParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams;
class UScriptStruct* FUpdateViewTargetPolicyParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("UpdateViewTargetPolicyParams"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FUpdateViewTargetPolicyParams>()
{
	return FUpdateViewTargetPolicyParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateViewTargetPolicyParams>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers_Inner = { "PlayerControllers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The player controllers whose view targets should be set to CameraToAffect. */" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "The player controllers whose view targets should be set to CameraToAffect." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers = { "PlayerControllers", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUpdateViewTargetPolicyParams, PlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewProp_PlayerControllers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams,
		&NewStructOps,
		"UpdateViewTargetPolicyParams",
		sizeof(FUpdateViewTargetPolicyParams),
		alignof(FUpdateViewTargetPolicyParams),
		Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.InnerSingleton, Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayViewTargetPolicy::execUpdateViewTarget)
	{
		P_GET_STRUCT_REF(FUpdateViewTargetPolicyParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateViewTarget_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayViewTargetPolicy::execDeterminePlayerControllers)
	{
		P_GET_STRUCT_REF(FDeterminePlayerControllersTargetPolicyParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->DeterminePlayerControllers_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	struct GameplayViewTargetPolicy_eventDeterminePlayerControllers_Parms
	{
		FDeterminePlayerControllersTargetPolicyParams Params;
		TArray<APlayerController*> ReturnValue;
	};
	struct GameplayViewTargetPolicy_eventUpdateViewTarget_Parms
	{
		FUpdateViewTargetPolicyParams Params;
	};
	static FName NAME_UGameplayViewTargetPolicy_DeterminePlayerControllers = FName(TEXT("DeterminePlayerControllers"));
	TArray<APlayerController*> UGameplayViewTargetPolicy::DeterminePlayerControllers(FDeterminePlayerControllersTargetPolicyParams const& Params)
	{
		GameplayViewTargetPolicy_eventDeterminePlayerControllers_Parms Parms;
		Parms.Params=Params;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayViewTargetPolicy_DeterminePlayerControllers),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameplayViewTargetPolicy_UpdateViewTarget = FName(TEXT("UpdateViewTarget"));
	void UGameplayViewTargetPolicy::UpdateViewTarget(FUpdateViewTargetPolicyParams const& Params)
	{
		GameplayViewTargetPolicy_eventUpdateViewTarget_Parms Parms;
		Parms.Params=Params;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayViewTargetPolicy_UpdateViewTarget),&Parms);
	}
	void UGameplayViewTargetPolicy::StaticRegisterNativesUGameplayViewTargetPolicy()
	{
		UClass* Class = UGameplayViewTargetPolicy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeterminePlayerControllers", &UGameplayViewTargetPolicy::execDeterminePlayerControllers },
			{ "UpdateViewTarget", &UGameplayViewTargetPolicy::execUpdateViewTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayViewTargetPolicy_eventDeterminePlayerControllers_Parms, Params), Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams, METADATA_PARAMS(Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_Params_MetaData)) }; // 3872358219
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayViewTargetPolicy_eventDeterminePlayerControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Called when the policy should be applied: when the output provider's activation changes in a game world.\n\x09 * @return The player controllers for which the view target should be set to the output provider's camera. Typically contains 1 element but you can return more if you wish.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "Called when the policy should be applied: when the output provider's activation changes in a game world.\n@return The player controllers for which the view target should be set to the output provider's camera. Typically contains 1 element but you can return more if you wish." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayViewTargetPolicy, nullptr, "DeterminePlayerControllers", nullptr, nullptr, sizeof(GameplayViewTargetPolicy_eventDeterminePlayerControllers_Parms), Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayViewTargetPolicy_eventUpdateViewTarget_Parms, Params), Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams, METADATA_PARAMS(Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::NewProp_Params_MetaData)) }; // 2692016664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Called to just after the view target has been updated for the player controller that was previously returned by DeterminePlayerController.\n\x09 *\n\x09 * The default implementation sets the view target without a blend. You can override this to do a blend or perform additional actions.\n\x09 * Note this is also called when the the owning output provider is deactivated (so you can possibly reset the view target to be the old player controller's pawn).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "Called to just after the view target has been updated for the player controller that was previously returned by DeterminePlayerController.\n\nThe default implementation sets the view target without a blend. You can override this to do a blend or perform additional actions.\nNote this is also called when the the owning output provider is deactivated (so you can possibly reset the view target to be the old player controller's pawn)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayViewTargetPolicy, nullptr, "UpdateViewTarget", nullptr, nullptr, sizeof(GameplayViewTargetPolicy_eventUpdateViewTarget_Parms), Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayViewTargetPolicy);
	UClass* Z_Construct_UClass_UGameplayViewTargetPolicy_NoRegister()
	{
		return UGameplayViewTargetPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayViewTargetPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayViewTargetPolicy_DeterminePlayerControllers, "DeterminePlayerControllers" }, // 3373636583
		{ &Z_Construct_UFunction_UGameplayViewTargetPolicy_UpdateViewTarget, "UpdateViewTarget" }, // 395679016
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A gameplay view target policy determines which player controller should change its view target when gameplay is started,\n * e.g. PIE or in shipped games.\n *\n * Some output providers, such as pixel streaming, require the view target to be set to the cine camera\n */" },
		{ "IncludePath", "ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ViewTargetPolicy/GameplayViewTargetPolicy.h" },
		{ "ToolTip", "A gameplay view target policy determines which player controller should change its view target when gameplay is started,\ne.g. PIE or in shipped games.\n\nSome output providers, such as pixel streaming, require the view target to be set to the cine camera" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayViewTargetPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::ClassParams = {
		&UGameplayViewTargetPolicy::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayViewTargetPolicy()
	{
		if (!Z_Registration_Info_UClass_UGameplayViewTargetPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayViewTargetPolicy.OuterSingleton, Z_Construct_UClass_UGameplayViewTargetPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayViewTargetPolicy.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UGameplayViewTargetPolicy>()
	{
		return UGameplayViewTargetPolicy::StaticClass();
	}
	UGameplayViewTargetPolicy::UGameplayViewTargetPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayViewTargetPolicy);
	UGameplayViewTargetPolicy::~UGameplayViewTargetPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ScriptStructInfo[] = {
		{ FDeterminePlayerControllersTargetPolicyParams::StaticStruct, Z_Construct_UScriptStruct_FDeterminePlayerControllersTargetPolicyParams_Statics::NewStructOps, TEXT("DeterminePlayerControllersTargetPolicyParams"), &Z_Registration_Info_UScriptStruct_DeterminePlayerControllersTargetPolicyParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeterminePlayerControllersTargetPolicyParams), 3872358219U) },
		{ FUpdateViewTargetPolicyParams::StaticStruct, Z_Construct_UScriptStruct_FUpdateViewTargetPolicyParams_Statics::NewStructOps, TEXT("UpdateViewTargetPolicyParams"), &Z_Registration_Info_UScriptStruct_UpdateViewTargetPolicyParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateViewTargetPolicyParams), 2692016664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayViewTargetPolicy, UGameplayViewTargetPolicy::StaticClass, TEXT("UGameplayViewTargetPolicy"), &Z_Registration_Info_UClass_UGameplayViewTargetPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayViewTargetPolicy), 2325046853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_3084898338(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_ViewTargetPolicy_GameplayViewTargetPolicy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
