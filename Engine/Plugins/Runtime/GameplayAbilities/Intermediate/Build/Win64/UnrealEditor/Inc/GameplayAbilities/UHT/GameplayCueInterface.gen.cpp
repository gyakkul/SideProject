// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCue();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCueContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(IGameplayCueInterface::execForwardGameplayCueToParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForwardGameplayCueToParent();
		P_NATIVE_END;
	}
	struct GameplayCueInterface_eventBlueprintCustomHandler_Parms
	{
		TEnumAsByte<EGameplayCueEvent::Type> EventType;
		FGameplayCueParameters Parameters;
	};
	void IGameplayCueInterface::BlueprintCustomHandler(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BlueprintCustomHandler instead.");
	}
	void UGameplayCueInterface::StaticRegisterNativesUGameplayCueInterface()
	{
		UClass* Class = UGameplayCueInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForwardGameplayCueToParent", &IGameplayCueInterface::execForwardGameplayCueToParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueInterface_eventBlueprintCustomHandler_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(nullptr, 0) }; // 1199521666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayCueInterface_eventBlueprintCustomHandler_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Internal function to map ufunctions directly to gameplaycue tags */" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
		{ "ToolTip", "Internal function to map ufunctions directly to gameplaycue tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueInterface, nullptr, "BlueprintCustomHandler", nullptr, nullptr, sizeof(GameplayCueInterface_eventBlueprintCustomHandler_Parms), Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayCue" },
		{ "Comment", "/** Call from a Cue handler event to continue checking for additional, more generic handlers. Called from the ability system blueprint library */" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
		{ "ToolTip", "Call from a Cue handler event to continue checking for additional, more generic handlers. Called from the ability system blueprint library" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueInterface, nullptr, "ForwardGameplayCueToParent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueInterface);
	UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister()
	{
		return UGameplayCueInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayCueInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueInterface_BlueprintCustomHandler, "BlueprintCustomHandler" }, // 1367267411
		{ &Z_Construct_UFunction_UGameplayCueInterface_ForwardGameplayCueToParent, "ForwardGameplayCueToParent" }, // 3225136566
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayCueInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueInterface_Statics::ClassParams = {
		&UGameplayCueInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueInterface()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton, Z_Construct_UClass_UGameplayCueInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueInterface.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueInterface>()
	{
		return UGameplayCueInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueInterface);
	UGameplayCueInterface::~UGameplayCueInterface() {}
	static FName NAME_UGameplayCueInterface_BlueprintCustomHandler = FName(TEXT("BlueprintCustomHandler"));
	void IGameplayCueInterface::Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameplayCueInterface::StaticClass()));
		GameplayCueInterface_eventBlueprintCustomHandler_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameplayCueInterface_BlueprintCustomHandler);
		if (Func)
		{
			Parms.EventType=EventType;
			Parms.Parameters=Parameters;
			O->ProcessEvent(Func, &Parms);
		}
	}

static_assert(std::is_polymorphic<FActiveGameplayCue>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FActiveGameplayCue cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayCue;
class UScriptStruct* FActiveGameplayCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayCue, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayCue"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCue.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayCue>()
{
	return FActiveGameplayCue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveGameplayCue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPredictivelyRemoved_MetaData[];
#endif
		static void NewProp_bPredictivelyRemoved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictivelyRemoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayCue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayCue, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayCue, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayCue, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters_MetaData)) }; // 3089669807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_MetaData[] = {
		{ "Comment", "/** Has this been predictively removed on the client? */" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
		{ "ToolTip", "Has this been predictively removed on the client?" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_SetBit(void* Obj)
	{
		((FActiveGameplayCue*)Obj)->bPredictivelyRemoved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved = { "bPredictivelyRemoved", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActiveGameplayCue), &Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewProp_bPredictivelyRemoved,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"ActiveGameplayCue",
		sizeof(FActiveGameplayCue),
		alignof(FActiveGameplayCue),
		Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCue()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGameplayCue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActiveGameplayCueContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FActiveGameplayCueContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer;
class UScriptStruct* FActiveGameplayCueContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayCueContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayCueContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayCueContainer>()
{
	return FActiveGameplayCueContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FActiveGameplayCueContainer);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FActiveGameplayCueContainer);
#endif
	struct Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayCueContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_Inner = { "GameplayCues", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayCue, METADATA_PARAMS(nullptr, 0) }; // 3133217171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues = { "GameplayCues", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayCueContainer, GameplayCues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_MetaData)) }; // 3133217171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayCueContainer, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_GameplayCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"ActiveGameplayCueContainer",
		sizeof(FActiveGameplayCueContainer),
		alignof(FActiveGameplayCueContainer),
		Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayCueContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTag;
class UScriptStruct* FGameplayCueTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTag, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTag"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTag.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTag>()
{
	return FGameplayCueTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Wrapper struct around a gameplaytag with the GameplayCue category. This also allows for a details customization\n */" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
		{ "ToolTip", "Wrapper struct around a gameplaytag with the GameplayCue category. This also allows for a details customization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTag, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewProp_GameplayCueTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueTag",
		sizeof(FGameplayCueTag),
		alignof(FGameplayCueTag),
		Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy;
class UScriptStruct* FMinimalGameplayCueReplicationProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalGameplayCueReplicationProxy"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalGameplayCueReplicationProxy>()
{
	return FMinimalGameplayCueReplicationProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""An alternative way to replicating gameplay cues. This does not use fast TArray serialization and does not serialize gameplaycue parameters. The parameters are created on the receiving side with default information.\n *\x09This will be more efficient with server cpu but will take more bandwidth when the array changes.\n *\x09\n *\x09To use, put this on your replication proxy actor (such a the pawn). Call SetOwner, PreReplication and RemoveallCues in the appropriate places.\n */" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
		{ "ToolTip", "An alternative way to replicating gameplay cues. This does not use fast TArray serialization and does not serialize gameplaycue parameters. The parameters are created on the receiving side with default information.\nThis will be more efficient with server cpu but will take more bandwidth when the array changes.\n\nTo use, put this on your replication proxy actor (such a the pawn). Call SetOwner, PreReplication and RemoveallCues in the appropriate places." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalGameplayCueReplicationProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalGameplayCueReplicationProxy, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"MinimalGameplayCueReplicationProxy",
		sizeof(FMinimalGameplayCueReplicationProxy),
		alignof(FMinimalGameplayCueReplicationProxy),
		Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ScriptStructInfo[] = {
		{ FActiveGameplayCue::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayCue_Statics::NewStructOps, TEXT("ActiveGameplayCue"), &Z_Registration_Info_UScriptStruct_ActiveGameplayCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayCue), 3133217171U) },
		{ FActiveGameplayCueContainer::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics::NewStructOps, TEXT("ActiveGameplayCueContainer"), &Z_Registration_Info_UScriptStruct_ActiveGameplayCueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayCueContainer), 3444720401U) },
		{ FGameplayCueTag::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTag_Statics::NewStructOps, TEXT("GameplayCueTag"), &Z_Registration_Info_UScriptStruct_GameplayCueTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTag), 1360574655U) },
		{ FMinimalGameplayCueReplicationProxy::StaticStruct, Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics::NewStructOps, TEXT("MinimalGameplayCueReplicationProxy"), &Z_Registration_Info_UScriptStruct_MinimalGameplayCueReplicationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalGameplayCueReplicationProxy), 1109789000U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueInterface, UGameplayCueInterface::StaticClass, TEXT("UGameplayCueInterface"), &Z_Registration_Info_UClass_UGameplayCueInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueInterface), 462976300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_4293069937(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
