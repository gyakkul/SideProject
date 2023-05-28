// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueGraph/SoundCueGraphNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphNode_Base() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueGraphNode_Base::StaticRegisterNativesUSoundCueGraphNode_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueGraphNode_Base);
	UClass* Z_Construct_UClass_USoundCueGraphNode_Base_NoRegister()
	{
		return USoundCueGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphNode_Base.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphNode_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphNode_Base_Statics::ClassParams = {
		&USoundCueGraphNode_Base::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphNode_Base()
	{
		if (!Z_Registration_Info_UClass_USoundCueGraphNode_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueGraphNode_Base.OuterSingleton, Z_Construct_UClass_USoundCueGraphNode_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueGraphNode_Base.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphNode_Base>()
	{
		return USoundCueGraphNode_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphNode_Base);
	USoundCueGraphNode_Base::~USoundCueGraphNode_Base() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueGraphNode_Base, USoundCueGraphNode_Base::StaticClass, TEXT("USoundCueGraphNode_Base"), &Z_Registration_Info_UClass_USoundCueGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueGraphNode_Base), 3871112823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_293833105(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
