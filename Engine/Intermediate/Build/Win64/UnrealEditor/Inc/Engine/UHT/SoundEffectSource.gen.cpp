// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundEffectSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundEffectSourcePreset::StaticRegisterNativesUSoundEffectSourcePreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectSourcePreset);
	UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister()
	{
		return USoundEffectSourcePreset::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSourcePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSourcePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Preset of a source effect that can be shared between chains. */" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Preset of a source effect that can be shared between chains." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSourcePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams = {
		&USoundEffectSourcePreset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSourcePreset()
	{
		if (!Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton, Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundEffectSourcePreset>()
	{
		return USoundEffectSourcePreset::StaticClass();
	}
	USoundEffectSourcePreset::USoundEffectSourcePreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePreset);
	USoundEffectSourcePreset::~USoundEffectSourcePreset() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChainEntry;
class UScriptStruct* FSourceEffectChainEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChainEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SourceEffectChainEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSourceEffectChainEntry>()
{
	return FSourceEffectChainEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChainEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChainEntry, Preset), Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSourceEffectChainEntry*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSourceEffectChainEntry), &Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SourceEffectChainEntry",
		sizeof(FSourceEffectChainEntry),
		alignof(FSourceEffectChainEntry),
		Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton;
	}
	void USoundEffectSourcePresetChain::StaticRegisterNativesUSoundEffectSourcePresetChain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectSourcePresetChain);
	UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister()
	{
		return USoundEffectSourcePresetChain::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayEffectChainTails_MetaData[];
#endif
		static void NewProp_bPlayEffectChainTails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayEffectChainTails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Chain of source effect presets that can be shared between referencing sounds. */" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Chain of source effect presets that can be shared between referencing sounds." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) }; // 454931370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "/** Chain of source effects to use for this sound source. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Chain of source effects to use for this sound source." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundEffectSourcePresetChain, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData)) }; // 454931370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether to keep the source alive for the duration of the effect chain tails. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Whether to keep the source alive for the duration of the effect chain tails." },
	};
#endif
	void Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit(void* Obj)
	{
		((USoundEffectSourcePresetChain*)Obj)->bPlayEffectChainTails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails = { "bPlayEffectChainTails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundEffectSourcePresetChain), &Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePresetChain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams = {
		&USoundEffectSourcePresetChain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSourcePresetChain()
	{
		if (!Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton, Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundEffectSourcePresetChain>()
	{
		return USoundEffectSourcePresetChain::StaticClass();
	}
	USoundEffectSourcePresetChain::USoundEffectSourcePresetChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePresetChain);
	USoundEffectSourcePresetChain::~USoundEffectSourcePresetChain() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectChainEntry::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewStructOps, TEXT("SourceEffectChainEntry"), &Z_Registration_Info_UScriptStruct_SourceEffectChainEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChainEntry), 454931370U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectSourcePreset, USoundEffectSourcePreset::StaticClass, TEXT("USoundEffectSourcePreset"), &Z_Registration_Info_UClass_USoundEffectSourcePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectSourcePreset), 2718475711U) },
		{ Z_Construct_UClass_USoundEffectSourcePresetChain, USoundEffectSourcePresetChain::StaticClass, TEXT("USoundEffectSourcePresetChain"), &Z_Registration_Info_UClass_USoundEffectSourcePresetChain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectSourcePresetChain), 2041069389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_918407065(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
