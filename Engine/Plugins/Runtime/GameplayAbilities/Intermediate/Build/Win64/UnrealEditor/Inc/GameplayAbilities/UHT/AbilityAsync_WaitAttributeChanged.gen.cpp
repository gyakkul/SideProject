// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync_WaitAttributeChanged.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitAttributeChanged() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics
	{
		struct AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms
		{
			FGameplayAttribute Attribute;
			float NewValue;
			float OldValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitAttributeChanged.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged, nullptr, "AsyncWaitAttributeChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms), Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAbilityAsync_WaitAttributeChanged::FAsyncWaitAttributeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitAttributeChangedDelegate, FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	struct AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
	AbilityAsync_WaitAttributeChanged_eventAsyncWaitAttributeChangedDelegate_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.NewValue=NewValue;
	Parms.OldValue=OldValue;
	AsyncWaitAttributeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityAsync_WaitAttributeChanged::execWaitForAttributeChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitAttributeChanged**)Z_Param__Result=UAbilityAsync_WaitAttributeChanged::WaitForAttributeChanged(Z_Param_TargetActor,Z_Param_Attribute,Z_Param_OnlyTriggerOnce);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitAttributeChanged::StaticRegisterNativesUAbilityAsync_WaitAttributeChanged()
	{
		UClass* Class = UAbilityAsync_WaitAttributeChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForAttributeChanged", &UAbilityAsync_WaitAttributeChanged::execWaitForAttributeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics
	{
		struct AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms
		{
			AActor* TargetActor;
			FGameplayAttribute Attribute;
			bool OnlyTriggerOnce;
			UAbilityAsync_WaitAttributeChanged* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	void Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_OnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay attribute is changed on a target ability system component\n\x09 * It will keep listening as long as OnlyTriggerOnce = false\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitForAttributeChange instead.\n\x09 */" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitAttributeChanged.h" },
		{ "ToolTip", "Wait until the specified gameplay attribute is changed on a target ability system component\nIt will keep listening as long as OnlyTriggerOnce = false\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitForAttributeChange instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged, nullptr, "WaitForAttributeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::AbilityAsync_WaitAttributeChanged_eventWaitForAttributeChanged_Parms), Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitAttributeChanged);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_NoRegister()
	{
		return UAbilityAsync_WaitAttributeChanged::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Changed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature, "AsyncWaitAttributeChangedDelegate__DelegateSignature" }, // 328834152
		{ &Z_Construct_UFunction_UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged, "WaitForAttributeChanged" }, // 2636561952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitAttributeChanged.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitAttributeChanged.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::NewProp_Changed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitAttributeChanged.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::NewProp_Changed = { "Changed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitAttributeChanged, Changed), Z_Construct_UDelegateFunction_UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::NewProp_Changed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::NewProp_Changed_MetaData)) }; // 328834152
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::NewProp_Changed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitAttributeChanged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::ClassParams = {
		&UAbilityAsync_WaitAttributeChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitAttributeChanged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitAttributeChanged.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitAttributeChanged.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitAttributeChanged>()
	{
		return UAbilityAsync_WaitAttributeChanged::StaticClass();
	}
	UAbilityAsync_WaitAttributeChanged::UAbilityAsync_WaitAttributeChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitAttributeChanged);
	UAbilityAsync_WaitAttributeChanged::~UAbilityAsync_WaitAttributeChanged() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitAttributeChanged, UAbilityAsync_WaitAttributeChanged::StaticClass, TEXT("UAbilityAsync_WaitAttributeChanged"), &Z_Registration_Info_UClass_UAbilityAsync_WaitAttributeChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitAttributeChanged), 2729513263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_1707575739(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitAttributeChanged_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
