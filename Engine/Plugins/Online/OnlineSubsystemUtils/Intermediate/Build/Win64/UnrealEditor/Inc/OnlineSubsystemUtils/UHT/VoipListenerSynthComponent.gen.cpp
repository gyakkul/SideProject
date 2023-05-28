// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/VoipListenerSynthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoipListenerSynthComponent() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UVoipListenerSynthComponent::execIsIdling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIdling();
		P_NATIVE_END;
	}
	void UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent()
	{
		UClass* Class = UVoipListenerSynthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsIdling", &UVoipListenerSynthComponent::execIsIdling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics
	{
		struct VoipListenerSynthComponent_eventIsIdling_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoipListenerSynthComponent_eventIsIdling_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoipListenerSynthComponent_eventIsIdling_Parms), &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Sender" },
		{ "Comment", "/*\n\x09 * Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n\x09 * This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n\x09 * to make space for other sounds to be rendered.\n\n\x09 * @returns true if this synth component is out of audio to play. \n\x09 */" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
		{ "ToolTip", "* Thread safe way to get whether this synth component still has buffered packets of audio to play back.\n* This function is used by the Voice Engine to clean up voice sounds when they are not playing back audio\n* to make space for other sounds to be rendered.\n\n* @returns true if this synth component is out of audio to play." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoipListenerSynthComponent, nullptr, "IsIdling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::VoipListenerSynthComponent_eventIsIdling_Parms), Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoipListenerSynthComponent);
	UClass* Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister()
	{
		return UVoipListenerSynthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoipListenerSynthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoipListenerSynthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoipListenerSynthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling, "IsIdling" }, // 4221974915
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "VoipListenerSynthComponent.h" },
		{ "ModuleRelativePath", "Public/VoipListenerSynthComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoipListenerSynthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoipListenerSynthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams = {
		&UVoipListenerSynthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoipListenerSynthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoipListenerSynthComponent()
	{
		if (!Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton, Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UVoipListenerSynthComponent>()
	{
		return UVoipListenerSynthComponent::StaticClass();
	}
	UVoipListenerSynthComponent::UVoipListenerSynthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoipListenerSynthComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoipListenerSynthComponent, UVoipListenerSynthComponent::StaticClass, TEXT("UVoipListenerSynthComponent"), &Z_Registration_Info_UClass_UVoipListenerSynthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoipListenerSynthComponent), 2365858232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_3416457200(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
