// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolume() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_AAudioGameplayVolume();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_AAudioGameplayVolume_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplayVolume, nullptr, "AudioGameplayVolumeEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAudioGameplayVolumeEvent_DelegateWrapper(const FMulticastScriptDelegate& AudioGameplayVolumeEvent)
{
	AudioGameplayVolumeEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AAudioGameplayVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioGameplayVolume::execOnListenerExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioGameplayVolume::execOnListenerEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenerEnter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAudioGameplayVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	static FName NAME_AAudioGameplayVolume_OnListenerEnter = FName(TEXT("OnListenerEnter"));
	void AAudioGameplayVolume::OnListenerEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAudioGameplayVolume_OnListenerEnter),NULL);
	}
	static FName NAME_AAudioGameplayVolume_OnListenerExit = FName(TEXT("OnListenerExit"));
	void AAudioGameplayVolume::OnListenerExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAudioGameplayVolume_OnListenerExit),NULL);
	}
	void AAudioGameplayVolume::StaticRegisterNativesAAudioGameplayVolume()
	{
		UClass* Class = AAudioGameplayVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnListenerEnter", &AAudioGameplayVolume::execOnListenerEnter },
			{ "OnListenerExit", &AAudioGameplayVolume::execOnListenerExit },
			{ "OnRep_bEnabled", &AAudioGameplayVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAudioGameplayVolume::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for listener enter */" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ToolTip", "Blueprint event for listener enter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioGameplayVolume, nullptr, "OnListenerEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Blueprint event for listener exit */" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ToolTip", "Blueprint event for listener exit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioGameplayVolume, nullptr, "OnListenerExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioGameplayVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics
	{
		struct AudioGameplayVolume_eventSetEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AudioGameplayVolume_eventSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioGameplayVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplay" },
		{ "Comment", "/** Sets whether the volume is enabled */" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ToolTip", "Sets whether the volume is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioGameplayVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::AudioGameplayVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioGameplayVolume);
	UClass* Z_Construct_UClass_AAudioGameplayVolume_NoRegister()
	{
		return AAudioGameplayVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAudioGameplayVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AGVComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AGVComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnListenerEnterEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListenerEnterEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnListenerExitEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnListenerExitEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioGameplayVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioGameplayVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioGameplayVolume_OnListenerEnter, "OnListenerEnter" }, // 305860238
		{ &Z_Construct_UFunction_AAudioGameplayVolume_OnListenerExit, "OnListenerExit" }, // 699287712
		{ &Z_Construct_UFunction_AAudioGameplayVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 91556395
		{ &Z_Construct_UFunction_AAudioGameplayVolume_SetEnabled, "SetEnabled" }, // 1123978212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioGameplayVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AudioGameplayVolume - A spatial volume used to notify audio gameplay systems when the nearest audio listener\n   enters or exits the volume. Additionally, these volumes can influence audio sources depending on the relative\n   position of the listener.\n\n   NOTE: Will only impact audio sources that have \"apply ambient volumes\" set on their sound class.\n */" },
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AudioGameplayVolume.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "AudioGameplayVolume - A spatial volume used to notify audio gameplay systems when the nearest audio listener\n   enters or exits the volume. Additionally, these volumes can influence audio sources depending on the relative\n   position of the listener.\n\n   NOTE: Will only impact audio sources that have \"apply ambient volumes\" set on their sound class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_AGVComponent_MetaData[] = {
		{ "Comment", "// A representation of this volume for the audio thread\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ToolTip", "A representation of this volume for the audio thread" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_AGVComponent = { "AGVComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAudioGameplayVolume, AGVComponent), Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_AGVComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_AGVComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioGameplay" },
		{ "Comment", "// Whether this volume is currently enabled.  Disabled volumes will not have a volume proxy, \n// and therefore will not be considered for intersection checks.\n" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
		{ "ToolTip", "Whether this volume is currently enabled.  Disabled volumes will not have a volume proxy,\nand therefore will not be considered for intersection checks." },
	};
#endif
	void Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAudioGameplayVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAudioGameplayVolume), &Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerEnterEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerEnterEvent = { "OnListenerEnterEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAudioGameplayVolume, OnListenerEnterEvent), Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerEnterEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerEnterEvent_MetaData)) }; // 462087911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerExitEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolume.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerExitEvent = { "OnListenerExitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAudioGameplayVolume, OnListenerExitEvent), Z_Construct_UDelegateFunction_AudioGameplayVolume_AudioGameplayVolumeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerExitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerExitEvent_MetaData)) }; // 462087911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioGameplayVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_AGVComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerEnterEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioGameplayVolume_Statics::NewProp_OnListenerExitEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioGameplayVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioGameplayVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioGameplayVolume_Statics::ClassParams = {
		&AAudioGameplayVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAudioGameplayVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAudioGameplayVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioGameplayVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioGameplayVolume()
	{
		if (!Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton, Z_Construct_UClass_AAudioGameplayVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAudioGameplayVolume.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<AAudioGameplayVolume>()
	{
		return AAudioGameplayVolume::StaticClass();
	}

	void AAudioGameplayVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAudioGameplayVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioGameplayVolume);
	AAudioGameplayVolume::~AAudioGameplayVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAudioGameplayVolume, AAudioGameplayVolume::StaticClass, TEXT("AAudioGameplayVolume"), &Z_Registration_Info_UClass_AAudioGameplayVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioGameplayVolume), 1047153324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_296505741(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
