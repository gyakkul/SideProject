// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeDistanceCrossFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDistanceCrossFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistanceDatum;
class UScriptStruct* FDistanceDatum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistanceDatum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistanceDatum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDatum, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DistanceDatum"));
	}
	return Z_Registration_Info_UScriptStruct_DistanceDatum.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDistanceDatum>()
{
	return FDistanceDatum::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistanceDatum_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceDatum>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The FadeInDistance at which to start hearing this sound.\n\x09 * If you want to hear the sound up close then setting this to 0 might be a good option. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The FadeInDistance at which to start hearing this sound.\n       * If you want to hear the sound up close then setting this to 0 might be a good option." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart = { "FadeInDistanceStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound has faded in completely. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound has faded in completely." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd = { "FadeInDistanceEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound starts fading out. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound starts fading out." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart = { "FadeOutDistanceStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound is no longer audible. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound is no longer audible." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd = { "FadeOutDistanceEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The volume for which this Input should be played. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The volume for which this Input should be played." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistanceDatum, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DistanceDatum",
		sizeof(FDistanceDatum),
		alignof(FDistanceDatum),
		Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum()
	{
		if (!Z_Registration_Info_UScriptStruct_DistanceDatum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistanceDatum.InnerSingleton, Z_Construct_UScriptStruct_FDistanceDatum_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistanceDatum.InnerSingleton;
	}
	void USoundNodeDistanceCrossFade::StaticRegisterNativesUSoundNodeDistanceCrossFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeDistanceCrossFade);
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister()
	{
		return USoundNodeDistanceCrossFade::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrossFadeInput_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossFadeInput_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CrossFadeInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SoundNodeDistanceCrossFade\n * \n * This node's purpose is to play different sounds based on the distance to the listener.  \n * The node mixes between the N different sounds which are valid for the distance.  One should\n * think of a SoundNodeDistanceCrossFade as Mixer node which determines the set of nodes to\n * \"mix in\" based on their distance to the sound.\n * \n * Example:\n * You have a gun that plays a fire sound.  At long distances you want a different sound than\n * if you were up close.   So you use a SoundNodeDistanceCrossFade which will calculate the distance\n * a listener is from the sound and play either:  short distance, long distance, mix of short and long sounds.\n *\n * A SoundNodeDistanceCrossFade differs from an SoundNodeAttenuation in that any sound is only going\n * be played if it is within the MinRadius and MaxRadius.  So if you want the short distance sound to be \n * heard by people close to it, the MinRadius should probably be 0\n *\n * The volume curve for a SoundNodeDistanceCrossFade will look like this:\n *\n *                          Volume (of the input) \n *    FadeInDistance.Max --> _________________ <-- FadeOutDistance.Min\n *                          /                 \\\n *                         /                   \\\n *                        /                     \\\n * FadeInDistance.Min -->/                       \\ <-- FadeOutDistance.Max\n */" },
		{ "DisplayName", "Crossfade by Distance" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDistanceCrossFade.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "SoundNodeDistanceCrossFade\n\nThis node's purpose is to play different sounds based on the distance to the listener.\nThe node mixes between the N different sounds which are valid for the distance.  One should\nthink of a SoundNodeDistanceCrossFade as Mixer node which determines the set of nodes to\n\"mix in\" based on their distance to the sound.\n\nExample:\nYou have a gun that plays a fire sound.  At long distances you want a different sound than\nif you were up close.   So you use a SoundNodeDistanceCrossFade which will calculate the distance\na listener is from the sound and play either:  short distance, long distance, mix of short and long sounds.\n\nA SoundNodeDistanceCrossFade differs from an SoundNodeAttenuation in that any sound is only going\nbe played if it is within the MinRadius and MaxRadius.  So if you want the short distance sound to be\nheard by people close to it, the MinRadius should probably be 0\n\nThe volume curve for a SoundNodeDistanceCrossFade will look like this:\n\n                         Volume (of the input)\n   FadeInDistance.Max --> _________________ <-- FadeOutDistance.Min\n                         /                 \\\n                        /                   \\\n                       /                     \\\nFadeInDistance.Min -->/                       \\ <-- FadeOutDistance.Max" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_Inner = { "CrossFadeInput", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDistanceDatum, METADATA_PARAMS(nullptr, 0) }; // 2145468178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData[] = {
		{ "Category", "CrossFade" },
		{ "Comment", "/**\n\x09 * Each input needs to have the correct data filled in so the SoundNodeDistanceCrossFade is able\n\x09 * to determine which sounds to play\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "Each input needs to have the correct data filled in so the SoundNodeDistanceCrossFade is able\nto determine which sounds to play" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput = { "CrossFadeInput", nullptr, (EPropertyFlags)0x0010000000000049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeDistanceCrossFade, CrossFadeInput), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData)) }; // 2145468178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDistanceCrossFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::ClassParams = {
		&USoundNodeDistanceCrossFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade()
	{
		if (!Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton, Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeDistanceCrossFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeDistanceCrossFade>()
	{
		return USoundNodeDistanceCrossFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDistanceCrossFade);
	USoundNodeDistanceCrossFade::~USoundNodeDistanceCrossFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ScriptStructInfo[] = {
		{ FDistanceDatum::StaticStruct, Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewStructOps, TEXT("DistanceDatum"), &Z_Registration_Info_UScriptStruct_DistanceDatum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistanceDatum), 2145468178U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeDistanceCrossFade, USoundNodeDistanceCrossFade::StaticClass, TEXT("USoundNodeDistanceCrossFade"), &Z_Registration_Info_UClass_USoundNodeDistanceCrossFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeDistanceCrossFade), 1080210618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_603564245(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
