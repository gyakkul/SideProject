// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueGraph/SoundCueGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphNode_Root() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Root();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueGraphNode_Root::StaticRegisterNativesUSoundCueGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueGraphNode_Root);
	UClass* Z_Construct_UClass_USoundCueGraphNode_Root_NoRegister()
	{
		return USoundCueGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphNode_Root.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode_Root.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphNode_Root_Statics::ClassParams = {
		&USoundCueGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_USoundCueGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueGraphNode_Root.OuterSingleton, Z_Construct_UClass_USoundCueGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueGraphNode_Root.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphNode_Root>()
	{
		return USoundCueGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphNode_Root);
	USoundCueGraphNode_Root::~USoundCueGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueGraphNode_Root, USoundCueGraphNode_Root::StaticClass, TEXT("USoundCueGraphNode_Root"), &Z_Registration_Info_UClass_USoundCueGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueGraphNode_Root), 1910903377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_3088427854(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
