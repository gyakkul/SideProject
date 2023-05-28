// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundControlBusMix.h"
#include "SoundModulationValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundControlBusMix() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundControlBusMixStage();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationMixValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundControlBusMixStage;
class UScriptStruct* FSoundControlBusMixStage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundControlBusMixStage, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundControlBusMixStage"));
	}
	return Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundControlBusMixStage>()
{
	return FSoundControlBusMixStage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundControlBusMixStage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/* Bus controlled by stage. */" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Bus controlled by stage." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlBusMixStage, Bus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Bus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/* Value mix is set to. */" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Value mix is set to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundControlBusMixStage, Value), Z_Construct_UScriptStruct_FSoundModulationMixValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Value_MetaData)) }; // 2821498296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Bus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundControlBusMixStage",
		sizeof(FSoundControlBusMixStage),
		alignof(FSoundControlBusMixStage),
		Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundControlBusMixStage()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.InnerSingleton, Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundControlBusMixStage.InnerSingleton;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execDeactivateAllMixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllMixes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execDeactivateMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateMix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execActivateMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execSoloMix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SoloMix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execSaveMixToProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveMixToProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundControlBusMix::execLoadMixFromProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMixFromProfile();
		P_NATIVE_END;
	}
	void USoundControlBusMix::StaticRegisterNativesUSoundControlBusMix()
	{
		UClass* Class = USoundControlBusMix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMix", &USoundControlBusMix::execActivateMix },
			{ "DeactivateAllMixes", &USoundControlBusMix::execDeactivateAllMixes },
			{ "DeactivateMix", &USoundControlBusMix::execDeactivateMix },
			{ "LoadMixFromProfile", &USoundControlBusMix::execLoadMixFromProfile },
			{ "SaveMixToProfile", &USoundControlBusMix::execSaveMixToProfile },
			{ "SoloMix", &USoundControlBusMix::execSoloMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Activates this mix in all active worlds\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Activates this mix in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "ActivateMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_ActivateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_ActivateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Deactivates all mixes in all active worlds\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Deactivates all mixes in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "DeactivateAllMixes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Deactivates this mix in all active worlds\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Deactivates this mix in all active worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "DeactivateMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_DeactivateMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_DeactivateMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Loads the mix from the provided profile index\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Loads the mix from the provided profile index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "LoadMixFromProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Saves the mix to the provided profile index\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Saves the mix to the provided profile index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "SaveMixToProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Mix" },
		{ "Comment", "// Solos this mix, deactivating all others and activating this\n// (if its not already active), while testing in-editor in all\n// active worlds\n" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Solos this mix, deactivating all others and activating this\n(if its not already active), while testing in-editor in all\nactive worlds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundControlBusMix, nullptr, "SoloMix", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundControlBusMix_SoloMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundControlBusMix_SoloMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundControlBusMix);
	UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister()
	{
		return USoundControlBusMix::StaticClass();
	}
	struct Z_Construct_UClass_USoundControlBusMix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProfileIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixStages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixStages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MixStages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundControlBusMix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundControlBusMix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundControlBusMix_ActivateMix, "ActivateMix" }, // 3533125870
		{ &Z_Construct_UFunction_USoundControlBusMix_DeactivateAllMixes, "DeactivateAllMixes" }, // 122664195
		{ &Z_Construct_UFunction_USoundControlBusMix_DeactivateMix, "DeactivateMix" }, // 339980618
		{ &Z_Construct_UFunction_USoundControlBusMix_LoadMixFromProfile, "LoadMixFromProfile" }, // 4087830763
		{ &Z_Construct_UFunction_USoundControlBusMix_SaveMixToProfile, "SaveMixToProfile" }, // 119724493
		{ &Z_Construct_UFunction_USoundControlBusMix_SoloMix, "SoloMix" }, // 2786721093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBusMix_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Stage Mix" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundControlBusMix.h" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_ProfileIndex_MetaData[] = {
		{ "Category", "Mix" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_ProfileIndex = { "ProfileIndex", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundControlBusMix, ProfileIndex), METADATA_PARAMS(Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_ProfileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_ProfileIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages_Inner = { "MixStages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 358731547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/* Array of stages controlled by mix. */" },
		{ "ModuleRelativePath", "Public/SoundControlBusMix.h" },
		{ "ToolTip", "Array of stages controlled by mix." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages = { "MixStages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundControlBusMix, MixStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages_MetaData)) }; // 358731547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundControlBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_ProfileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBusMix_Statics::NewProp_MixStages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundControlBusMix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundControlBusMix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundControlBusMix_Statics::ClassParams = {
		&USoundControlBusMix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundControlBusMix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusMix_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundControlBusMix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusMix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundControlBusMix()
	{
		if (!Z_Registration_Info_UClass_USoundControlBusMix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundControlBusMix.OuterSingleton, Z_Construct_UClass_USoundControlBusMix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundControlBusMix.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundControlBusMix>()
	{
		return USoundControlBusMix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundControlBusMix);
	USoundControlBusMix::~USoundControlBusMix() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ScriptStructInfo[] = {
		{ FSoundControlBusMixStage::StaticStruct, Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics::NewStructOps, TEXT("SoundControlBusMixStage"), &Z_Registration_Info_UScriptStruct_SoundControlBusMixStage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundControlBusMixStage), 358731547U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundControlBusMix, USoundControlBusMix::StaticClass, TEXT("USoundControlBusMix"), &Z_Registration_Info_UClass_USoundControlBusMix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundControlBusMix), 2353271910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_2238789385(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
