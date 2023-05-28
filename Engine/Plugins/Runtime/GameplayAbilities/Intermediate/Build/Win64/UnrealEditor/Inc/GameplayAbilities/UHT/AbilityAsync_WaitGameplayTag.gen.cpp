// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync_WaitGameplayTag.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayTag() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag, nullptr, "AsyncWaitGameplayTagDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAbilityAsync_WaitGameplayTag::FAsyncWaitGameplayTagDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagDelegate)
{
	AsyncWaitGameplayTagDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	void UAbilityAsync_WaitGameplayTag::StaticRegisterNativesUAbilityAsync_WaitGameplayTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTag);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_NoRegister()
	{
		return UAbilityAsync_WaitGameplayTag::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics
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
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, "AsyncWaitGameplayTagDelegate__DelegateSignature" }, // 2438877168
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayTag::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTag()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTag>()
	{
		return UAbilityAsync_WaitGameplayTag::StaticClass();
	}
	UAbilityAsync_WaitGameplayTag::UAbilityAsync_WaitGameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTag);
	UAbilityAsync_WaitGameplayTag::~UAbilityAsync_WaitGameplayTag() {}
	DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagAdded::execWaitGameplayTagAddToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitGameplayTagAdded**)Z_Param__Result=UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(Z_Param_TargetActor,Z_Param_Tag,Z_Param_OnlyTriggerOnce);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitGameplayTagAdded::StaticRegisterNativesUAbilityAsync_WaitGameplayTagAdded()
	{
		UClass* Class = UAbilityAsync_WaitGameplayTagAdded::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayTagAddToActor", &UAbilityAsync_WaitGameplayTagAdded::execWaitGameplayTagAddToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics
	{
		struct AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms
		{
			AActor* TargetActor;
			FGameplayTag Tag;
			bool OnlyTriggerOnce;
			UAbilityAsync_WaitGameplayTagAdded* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_OnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag is Added to Target Actor's ability component\n\x09 * If the tag is already present when this task is started, it will immediately broadcast the Added event. It will keep listening as long as OnlyTriggerOnce = false.\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagAdd instead.\n\x09 */" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ToolTip", "Wait until the specified gameplay tag is Added to Target Actor's ability component\nIf the tag is already present when this task is started, it will immediately broadcast the Added event. It will keep listening as long as OnlyTriggerOnce = false.\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagAdd instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded, nullptr, "WaitGameplayTagAddToActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::AbilityAsync_WaitGameplayTagAdded_eventWaitGameplayTagAddToActor_Parms), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagAdded);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_NoRegister()
	{
		return UAbilityAsync_WaitGameplayTagAdded::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Added_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Added;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor, "WaitGameplayTagAddToActor" }, // 3546711758
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added = { "Added", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagAdded, Added), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added_MetaData)) }; // 2438877168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::NewProp_Added,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagAdded>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayTagAdded::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagAdded>()
	{
		return UAbilityAsync_WaitGameplayTagAdded::StaticClass();
	}
	UAbilityAsync_WaitGameplayTagAdded::UAbilityAsync_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagAdded);
	UAbilityAsync_WaitGameplayTagAdded::~UAbilityAsync_WaitGameplayTagAdded() {}
	DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagRemoved::execWaitGameplayTagRemoveFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitGameplayTagRemoved**)Z_Param__Result=UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(Z_Param_TargetActor,Z_Param_Tag,Z_Param_OnlyTriggerOnce);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitGameplayTagRemoved::StaticRegisterNativesUAbilityAsync_WaitGameplayTagRemoved()
	{
		UClass* Class = UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayTagRemoveFromActor", &UAbilityAsync_WaitGameplayTagRemoved::execWaitGameplayTagRemoveFromActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics
	{
		struct AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms
		{
			AActor* TargetActor;
			FGameplayTag Tag;
			bool OnlyTriggerOnce;
			UAbilityAsync_WaitGameplayTagRemoved* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_OnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag is Removed from Target Actor's ability component\n\x09 * If the tag is not present when this task is started, it will immediately broadcast the Removed event. It will keep listening as long as OnlyTriggerOnce = false.\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagRemove instead.\n\x09 */" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ToolTip", "Wait until the specified gameplay tag is Removed from Target Actor's ability component\nIf the tag is not present when this task is started, it will immediately broadcast the Removed event. It will keep listening as long as OnlyTriggerOnce = false.\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagRemove instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved, nullptr, "WaitGameplayTagRemoveFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::AbilityAsync_WaitGameplayTagRemoved_eventWaitGameplayTagRemoveFromActor_Parms), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagRemoved);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_NoRegister()
	{
		return UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Removed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTag,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor, "WaitGameplayTagRemoveFromActor" }, // 1571235614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTag.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagRemoved, Removed), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayTag_AsyncWaitGameplayTagDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed_MetaData)) }; // 2438877168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::NewProp_Removed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagRemoved>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayTagRemoved::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagRemoved>()
	{
		return UAbilityAsync_WaitGameplayTagRemoved::StaticClass();
	}
	UAbilityAsync_WaitGameplayTagRemoved::UAbilityAsync_WaitGameplayTagRemoved(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagRemoved);
	UAbilityAsync_WaitGameplayTagRemoved::~UAbilityAsync_WaitGameplayTagRemoved() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTag, UAbilityAsync_WaitGameplayTag::StaticClass, TEXT("UAbilityAsync_WaitGameplayTag"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTag), 2112256825U) },
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagAdded, UAbilityAsync_WaitGameplayTagAdded::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagAdded"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagAdded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagAdded), 3194470563U) },
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagRemoved, UAbilityAsync_WaitGameplayTagRemoved::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagRemoved"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagRemoved, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagRemoved), 2688712402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_1026386032(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
