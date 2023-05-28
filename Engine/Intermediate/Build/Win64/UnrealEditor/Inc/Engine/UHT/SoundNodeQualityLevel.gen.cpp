// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeQualityLevel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeQualityLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeQualityLevel::StaticRegisterNativesUSoundNodeQualityLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeQualityLevel);
	UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister()
	{
		return USoundNodeQualityLevel::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeQualityLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedQualityLevelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CookedQualityLevelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeQualityLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play\n * and at runtime will only load in to memory sound waves connected to the branch that will be selected\n */" },
		{ "DisplayName", "Quality Level" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeQualityLevel.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeQualityLevel.h" },
		{ "ToolTip", "This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play\nand at runtime will only load in to memory sound waves connected to the branch that will be selected" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData[] = {
		{ "Comment", "// A Property to indicate which quality this node was cooked with. (INDEX_NONE if not cooked, or unset).\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeQualityLevel.h" },
		{ "ToolTip", "A Property to indicate which quality this node was cooked with. (INDEX_NONE if not cooked, or unset)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex = { "CookedQualityLevelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeQualityLevel, CookedQualityLevelIndex), METADATA_PARAMS(Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeQualityLevel_Statics::NewProp_CookedQualityLevelIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeQualityLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeQualityLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeQualityLevel_Statics::ClassParams = {
		&USoundNodeQualityLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeQualityLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeQualityLevel()
	{
		if (!Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton, Z_Construct_UClass_USoundNodeQualityLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeQualityLevel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeQualityLevel>()
	{
		return USoundNodeQualityLevel::StaticClass();
	}
	USoundNodeQualityLevel::USoundNodeQualityLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeQualityLevel);
	USoundNodeQualityLevel::~USoundNodeQualityLevel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeQualityLevel)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeQualityLevel, USoundNodeQualityLevel::StaticClass, TEXT("USoundNodeQualityLevel"), &Z_Registration_Info_UClass_USoundNodeQualityLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeQualityLevel), 2903080643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h_3056388097(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeQualityLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
