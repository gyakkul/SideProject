// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationLibrary() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationLibrary();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UConversationLibrary::execStartConversation)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ConversationEntryTag);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_STRUCT(FGameplayTag,Z_Param_InstigatorTag);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FGameplayTag,Z_Param_TargetTag);
		P_GET_OBJECT(UClass,Z_Param_ConversationInstanceClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConversationInstance**)Z_Param__Result=UConversationLibrary::StartConversation(Z_Param_ConversationEntryTag,Z_Param_Instigator,Z_Param_InstigatorTag,Z_Param_Target,Z_Param_TargetTag,Z_Param_ConversationInstanceClass);
		P_NATIVE_END;
	}
	void UConversationLibrary::StaticRegisterNativesUConversationLibrary()
	{
		UClass* Class = UConversationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartConversation", &UConversationLibrary::execStartConversation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics
	{
		struct ConversationLibrary_eventStartConversation_Parms
		{
			FGameplayTag ConversationEntryTag;
			AActor* Instigator;
			FGameplayTag InstigatorTag;
			AActor* Target;
			FGameplayTag TargetTag;
			const TSubclassOf<UConversationInstance>  ConversationInstanceClass;
			UConversationInstance* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversationEntryTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConversationInstanceClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationEntryTag = { "ConversationEntryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, ConversationEntryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_InstigatorTag = { "InstigatorTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, InstigatorTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationInstanceClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationInstanceClass = { "ConversationInstanceClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, ConversationInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationInstanceClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationLibrary_eventStartConversation_Parms, ReturnValue), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationEntryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_InstigatorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_TargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ConversationInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "CPP_Default_ConversationInstanceClass", "None" },
		{ "DeterminesOutputType", "ConversationType" },
		{ "ModuleRelativePath", "Public/ConversationLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationLibrary, nullptr, "StartConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::ConversationLibrary_eventStartConversation_Parms), Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationLibrary_StartConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationLibrary_StartConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationLibrary);
	UClass* Z_Construct_UClass_UConversationLibrary_NoRegister()
	{
		return UConversationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConversationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationLibrary_StartConversation, "StartConversation" }, // 4110994049
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationLibrary.h" },
		{ "ModuleRelativePath", "Public/ConversationLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationLibrary_Statics::ClassParams = {
		&UConversationLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationLibrary()
	{
		if (!Z_Registration_Info_UClass_UConversationLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationLibrary.OuterSingleton, Z_Construct_UClass_UConversationLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationLibrary.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationLibrary>()
	{
		return UConversationLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationLibrary);
	UConversationLibrary::~UConversationLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationLibrary, UConversationLibrary::StaticClass, TEXT("UConversationLibrary"), &Z_Registration_Info_UClass_UConversationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationLibrary), 1858947881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_2202020930(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
