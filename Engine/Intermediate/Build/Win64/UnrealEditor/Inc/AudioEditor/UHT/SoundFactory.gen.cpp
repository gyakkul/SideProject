// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundFactory::StaticRegisterNativesUSoundFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundFactory);
	UClass* Z_Construct_UClass_USoundFactory_NoRegister()
	{
		return USoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateCue_MetaData[];
#endif
		static void NewProp_bAutoCreateCue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeAttenuationNode_MetaData[];
#endif
		static void NewProp_bIncludeAttenuationNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAttenuationNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeLoopingNode_MetaData[];
#endif
		static void NewProp_bIncludeLoopingNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLoopingNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeModulatorNode_MetaData[];
#endif
		static void NewProp_bIncludeModulatorNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeModulatorNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CueVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuePackageSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CuePackageSuffix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, a sound cue will automatically be created for the sound" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bAutoCreateCue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue = { "bAutoCreateCue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a attenuation node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeAttenuationNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode = { "bIncludeAttenuationNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a looping node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeLoopingNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode = { "bIncludeLoopingNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If enabled, the created sound cue will include a modulator node" },
	};
#endif
	void Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_SetBit(void* Obj)
	{
		((USoundFactory*)Obj)->bIncludeModulatorNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode = { "bIncludeModulatorNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundFactory), &Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "The volume of the created sound cue" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume = { "CueVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundFactory, CueVolume), METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData[] = {
		{ "Category", "SoundFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundFactory.h" },
		{ "ToolTip", "If not empty, generated SoundCues will be placed in PackageCuePackageSuffix, but only if bAutoCreateCue is true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix = { "CuePackageSuffix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundFactory, CuePackageSuffix), METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bAutoCreateCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeAttenuationNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeLoopingNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_bIncludeModulatorNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_CueVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundFactory_Statics::NewProp_CuePackageSuffix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundFactory_Statics::ClassParams = {
		&USoundFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundFactory()
	{
		if (!Z_Registration_Info_UClass_USoundFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundFactory.OuterSingleton, Z_Construct_UClass_USoundFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundFactory>()
	{
		return USoundFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundFactory);
	USoundFactory::~USoundFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundFactory, USoundFactory::StaticClass, TEXT("USoundFactory"), &Z_Registration_Info_UClass_USoundFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundFactory), 544569089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_2979496192(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
