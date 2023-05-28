// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/IAudioGameplayVolumeInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioGameplayVolumeInteraction() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	DEFINE_FUNCTION(IAudioGameplayVolumeInteraction::execOnListenerExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioGameplayVolumeInteraction::execOnListenerEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerEnter_Implementation();
		P_NATIVE_END;
	}
	void IAudioGameplayVolumeInteraction::OnListenerEnter()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListenerEnter instead.");
	}
	void IAudioGameplayVolumeInteraction::OnListenerExit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListenerExit instead.");
	}
	void UAudioGameplayVolumeInteraction::StaticRegisterNativesUAudioGameplayVolumeInteraction()
	{
		UClass* Class = UAudioGameplayVolumeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnListenerEnter", &IAudioGameplayVolumeInteraction::execOnListenerEnter },
			{ "OnListenerExit", &IAudioGameplayVolumeInteraction::execOnListenerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplayVolume" },
		{ "Comment", "/**\n\x09 * Called when a listener 'enters' the associated proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayVolumeInteraction.h" },
		{ "ToolTip", "Called when a listener 'enters' the associated proxy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioGameplayVolumeInteraction, nullptr, "OnListenerEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplayVolume" },
		{ "Comment", "/**\n\x09 * Called when a listener 'exits' the associated proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayVolumeInteraction.h" },
		{ "ToolTip", "Called when a listener 'exits' the associated proxy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioGameplayVolumeInteraction, nullptr, "OnListenerExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeInteraction);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister()
	{
		return UAudioGameplayVolumeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerEnter, "OnListenerEnter" }, // 4149672254
		{ &Z_Construct_UFunction_UAudioGameplayVolumeInteraction_OnListenerExit, "OnListenerExit" }, // 3172632565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayVolumeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioGameplayVolumeInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::ClassParams = {
		&UAudioGameplayVolumeInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioGameplayVolumeInteraction>()
	{
		return UAudioGameplayVolumeInteraction::StaticClass();
	}
	UAudioGameplayVolumeInteraction::UAudioGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeInteraction);
	UAudioGameplayVolumeInteraction::~UAudioGameplayVolumeInteraction() {}
	static FName NAME_UAudioGameplayVolumeInteraction_OnListenerEnter = FName(TEXT("OnListenerEnter"));
	void IAudioGameplayVolumeInteraction::Execute_OnListenerEnter(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioGameplayVolumeInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAudioGameplayVolumeInteraction_OnListenerEnter);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAudioGameplayVolumeInteraction*)(O->GetNativeInterfaceAddress(UAudioGameplayVolumeInteraction::StaticClass())))
		{
			I->OnListenerEnter_Implementation();
		}
	}
	static FName NAME_UAudioGameplayVolumeInteraction_OnListenerExit = FName(TEXT("OnListenerExit"));
	void IAudioGameplayVolumeInteraction::Execute_OnListenerExit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioGameplayVolumeInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAudioGameplayVolumeInteraction_OnListenerExit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAudioGameplayVolumeInteraction*)(O->GetNativeInterfaceAddress(UAudioGameplayVolumeInteraction::StaticClass())))
		{
			I->OnListenerExit_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayVolumeInteraction, UAudioGameplayVolumeInteraction::StaticClass, TEXT("UAudioGameplayVolumeInteraction"), &Z_Registration_Info_UClass_UAudioGameplayVolumeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeInteraction), 1367105819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_2291374808(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
