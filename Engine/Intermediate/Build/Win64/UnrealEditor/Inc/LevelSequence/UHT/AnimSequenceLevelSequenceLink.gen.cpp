// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequenceLevelSequenceLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceLevelSequenceLink() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	void UAnimSequenceLevelSequenceLink::StaticRegisterNativesUAnimSequenceLevelSequenceLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceLevelSequenceLink);
	UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink_NoRegister()
	{
		return UAnimSequenceLevelSequenceLink::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathToLevelSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Link To Level Sequence That may be driving the anim sequence*/" },
		{ "IncludePath", "AnimSequenceLevelSequenceLink.h" },
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
		{ "ToolTip", "Link To Level Sequence That may be driving the anim sequence" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceLevelSequenceLink, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/AnimSequenceLevelSequenceLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence = { "PathToLevelSequence", nullptr, (EPropertyFlags)0x0010010000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceLevelSequenceLink, PathToLevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_SkelTrackGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::NewProp_PathToLevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceLevelSequenceLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::ClassParams = {
		&UAnimSequenceLevelSequenceLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceLevelSequenceLink()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton, Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<UAnimSequenceLevelSequenceLink>()
	{
		return UAnimSequenceLevelSequenceLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceLevelSequenceLink);
	UAnimSequenceLevelSequenceLink::~UAnimSequenceLevelSequenceLink() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceLevelSequenceLink, UAnimSequenceLevelSequenceLink::StaticClass, TEXT("UAnimSequenceLevelSequenceLink"), &Z_Registration_Info_UClass_UAnimSequenceLevelSequenceLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceLevelSequenceLink), 1051605322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_260034118(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
