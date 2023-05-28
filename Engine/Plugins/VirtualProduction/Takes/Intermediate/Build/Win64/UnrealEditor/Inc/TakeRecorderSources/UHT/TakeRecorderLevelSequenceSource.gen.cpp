// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderLevelSequenceSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderLevelSequenceSource() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelSequenceSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelSequenceSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderLevelSequenceSource::StaticRegisterNativesUTakeRecorderLevelSequenceSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderLevelSequenceSource);
	UClass* Z_Construct_UClass_UTakeRecorderLevelSequenceSource_NoRegister()
	{
		return UTakeRecorderLevelSequenceSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequencesToTrigger_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequencesToTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSequencesToTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Other" },
		{ "Comment", "/** Plays level sequence actors when recording starts */" },
		{ "IncludePath", "TakeRecorderLevelSequenceSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderLevelSequenceSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Level Sequence" },
		{ "ToolTip", "Plays level sequence actors when recording starts" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger_Inner = { "LevelSequencesToTrigger", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/TakeRecorderLevelSequenceSource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger = { "LevelSequencesToTrigger", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderLevelSequenceSource, LevelSequencesToTrigger), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::NewProp_LevelSequencesToTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderLevelSequenceSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::ClassParams = {
		&UTakeRecorderLevelSequenceSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderLevelSequenceSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderLevelSequenceSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderLevelSequenceSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderLevelSequenceSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderLevelSequenceSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderLevelSequenceSource>()
	{
		return UTakeRecorderLevelSequenceSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderLevelSequenceSource);
	UTakeRecorderLevelSequenceSource::~UTakeRecorderLevelSequenceSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelSequenceSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelSequenceSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderLevelSequenceSource, UTakeRecorderLevelSequenceSource::StaticClass, TEXT("UTakeRecorderLevelSequenceSource"), &Z_Registration_Info_UClass_UTakeRecorderLevelSequenceSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderLevelSequenceSource), 3148050192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelSequenceSource_h_3578556652(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelSequenceSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelSequenceSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
