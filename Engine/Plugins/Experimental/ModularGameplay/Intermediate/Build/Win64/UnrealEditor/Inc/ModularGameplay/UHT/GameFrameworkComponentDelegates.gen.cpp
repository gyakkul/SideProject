// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFrameworkComponentDelegates() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MODULARGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature();
	MODULARGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FActorInitStateChangedParams();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams;
class UScriptStruct* FActorInitStateChangedParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInitStateChangedParams, (UObject*)Z_Construct_UPackage__Script_ModularGameplay(), TEXT("ActorInitStateChangedParams"));
	}
	return Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.OuterSingleton;
}
template<> MODULARGAMEPLAY_API UScriptStruct* StaticStruct<FActorInitStateChangedParams>()
{
	return FActorInitStateChangedParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FeatureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Implementer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Implementer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeatureState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters struct for Init State change functions */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "Parameters struct for Init State change functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInitStateChangedParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The actor owning the feature that changed */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "The actor owning the feature that changed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorInitStateChangedParams, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Name of the feature that changed */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "Name of the feature that changed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorInitStateChangedParams, FeatureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_Implementer_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The object (often a component) that implements the feature */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "The object (often a component) that implements the feature" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_Implementer = { "Implementer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorInitStateChangedParams, Implementer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_Implementer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_Implementer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The new state of the feature */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "The new state of the feature" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureState = { "FeatureState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorInitStateChangedParams, FeatureState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureState_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_Implementer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewProp_FeatureState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
		nullptr,
		&NewStructOps,
		"ActorInitStateChangedParams",
		sizeof(FActorInitStateChangedParams),
		alignof(FActorInitStateChangedParams),
		Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorInitStateChangedParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.InnerSingleton, Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics
	{
		struct _Script_ModularGameplay_eventActorInitStateChangedBPDelegate_Parms
		{
			FActorInitStateChangedParams Params;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ModularGameplay_eventActorInitStateChangedBPDelegate_Parms, Params), Z_Construct_UScriptStruct_FActorInitStateChangedParams, METADATA_PARAMS(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::NewProp_Params_MetaData)) }; // 1285139930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint delegate called when an actor feature changes init state */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentDelegates.h" },
		{ "ToolTip", "Blueprint delegate called when an actor feature changes init state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularGameplay, nullptr, "ActorInitStateChangedBPDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::_Script_ModularGameplay_eventActorInitStateChangedBPDelegate_Parms), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorInitStateChangedBPDelegate_DelegateWrapper(const FScriptDelegate& ActorInitStateChangedBPDelegate, FActorInitStateChangedParams const& Params)
{
	struct _Script_ModularGameplay_eventActorInitStateChangedBPDelegate_Parms
	{
		FActorInitStateChangedParams Params;
	};
	_Script_ModularGameplay_eventActorInitStateChangedBPDelegate_Parms Parms;
	Parms.Params=Params;
	ActorInitStateChangedBPDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentDelegates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentDelegates_h_Statics::ScriptStructInfo[] = {
		{ FActorInitStateChangedParams::StaticStruct, Z_Construct_UScriptStruct_FActorInitStateChangedParams_Statics::NewStructOps, TEXT("ActorInitStateChangedParams"), &Z_Registration_Info_UScriptStruct_ActorInitStateChangedParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInitStateChangedParams), 1285139930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentDelegates_h_662717241(TEXT("/Script/ModularGameplay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentDelegates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentDelegates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
