// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueGraph/SoundCueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraph() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraph();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueGraph::StaticRegisterNativesUSoundCueGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueGraph);
	UClass* Z_Construct_UClass_USoundCueGraph_NoRegister()
	{
		return USoundCueGraph::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraph.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraph_Statics::ClassParams = {
		&USoundCueGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraph()
	{
		if (!Z_Registration_Info_UClass_USoundCueGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueGraph.OuterSingleton, Z_Construct_UClass_USoundCueGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueGraph.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraph>()
	{
		return USoundCueGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraph);
	USoundCueGraph::~USoundCueGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueGraph, USoundCueGraph::StaticClass, TEXT("USoundCueGraph"), &Z_Registration_Info_UClass_USoundCueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueGraph), 24982946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_3979586482(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
