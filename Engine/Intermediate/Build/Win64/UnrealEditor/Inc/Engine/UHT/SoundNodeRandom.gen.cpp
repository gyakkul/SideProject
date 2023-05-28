// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeRandom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeRandom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeRandom::StaticRegisterNativesUSoundNodeRandom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeRandom);
	UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister()
	{
		return USoundNodeRandom::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeRandom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBeenUsed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasBeenUsed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HasBeenUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRandomUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumRandomUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreselectAtLevelLoad_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreselectAtLevelLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldExcludeFromBranchCulling_MetaData[];
#endif
		static void NewProp_bShouldExcludeFromBranchCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldExcludeFromBranchCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoundCueExcludedFromBranchCulling_MetaData[];
#endif
		static void NewProp_bSoundCueExcludedFromBranchCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundCueExcludedFromBranchCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeWithoutReplacement_MetaData[];
#endif
		static void NewProp_bRandomizeWithoutReplacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeWithoutReplacement;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_PIEHiddenNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEHiddenNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PIEHiddenNodes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeRandom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Selects sounds from a random set\n */" },
		{ "DisplayName", "Random" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeRandom.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Selects sounds from a random set" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeRandom, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_Inner = { "HasBeenUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData[] = {
		{ "Comment", "/**\n\x09 * Internal state of which sounds have been played.  This is only used at runtime\n\x09 * to keep track of which sounds have been played\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Internal state of which sounds have been played.  This is only used at runtime\nto keep track of which sounds have been played" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed = { "HasBeenUsed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeRandom, HasBeenUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData[] = {
		{ "Comment", "/** Counter var so we don't have to count all of the used sounds each time we choose a sound **/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Counter var so we don't have to count all of the used sounds each time we choose a sound *" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed = { "NumRandomUsed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeRandom, NumRandomUsed), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** If greater than 0, then upon each level load such a number of inputs will be randomly selected\n\x09 *  and the rest will be removed. This can be used to cut down the memory usage of large randomizing\n\x09 *  cues.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "If greater than 0, then upon each level load such a number of inputs will be randomly selected\nand the rest will be removed. This can be used to cut down the memory usage of large randomizing\ncues." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad = { "PreselectAtLevelLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeRandom, PreselectAtLevelLoad), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** If set to true, this random node will not be culled on load for platforms with a maximum amount of preloaded random branches\n\x09*   set in project settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "If set to true, this random node will not be culled on load for platforms with a maximum amount of preloaded random branches\n set in project settings" },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bShouldExcludeFromBranchCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling = { "bShouldExcludeFromBranchCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData[] = {
		{ "Comment", "/** Exclusion for branch culling set by the sound cue. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Exclusion for branch culling set by the sound cue." },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bSoundCueExcludedFromBranchCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling = { "bSoundCueExcludedFromBranchCulling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** \n\x09 * Determines whether or not this SoundNodeRandom should randomize with or without\n\x09 * replacement.  \n\x09 *\n\x09 * WithoutReplacement means that only nodes left will be valid for \n\x09 * selection.  So with that, you are guarenteed to have only one occurrence of the\n\x09 * sound played until all of the other sounds in the set have all been played.\n\x09 *\n\x09 * WithReplacement means that a node will be chosen and then placed back into the set.\n\x09 * So one could play the same sound over and over if the probabilities don't go your way :-)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Determines whether or not this SoundNodeRandom should randomize with or without\nreplacement.\n\nWithoutReplacement means that only nodes left will be valid for\nselection.  So with that, you are guarenteed to have only one occurrence of the\nsound played until all of the other sounds in the set have all been played.\n\nWithReplacement means that a node will be chosen and then placed back into the set.\nSo one could play the same sound over and over if the probabilities don't go your way :-)" },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bRandomizeWithoutReplacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement = { "bRandomizeWithoutReplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_Inner = { "PIEHiddenNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData[] = {
		{ "Comment", "/** Editor only list of nodes hidden to duplicate behavior of PreselectAtLevelLoad */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Editor only list of nodes hidden to duplicate behavior of PreselectAtLevelLoad" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes = { "PIEHiddenNodes", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeRandom, PIEHiddenNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeRandom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeRandom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeRandom_Statics::ClassParams = {
		&USoundNodeRandom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeRandom()
	{
		if (!Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton, Z_Construct_UClass_USoundNodeRandom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeRandom.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeRandom>()
	{
		return USoundNodeRandom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeRandom);
	USoundNodeRandom::~USoundNodeRandom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeRandom, USoundNodeRandom::StaticClass, TEXT("USoundNodeRandom"), &Z_Registration_Info_UClass_USoundNodeRandom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeRandom), 162267448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_1166259088(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
