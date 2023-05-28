// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderCameraCutSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderCameraCutSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderCameraCutSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderCameraCutSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderCameraCutSource::StaticRegisterNativesUTakeRecorderCameraCutSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderCameraCutSource);
	UClass* Z_Construct_UClass_UTakeRecorderCameraCutSource_NoRegister()
	{
		return UTakeRecorderCameraCutSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootLevelSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Other" },
		{ "Comment", "/** A recording source that detects camera switching and creates a camera cut track */" },
		{ "IncludePath", "TakeRecorderCameraCutSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderCameraCutSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Camera Cuts" },
		{ "ToolTip", "A recording source that detects camera switching and creates a camera cut track" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Private/TakeRecorderCameraCutSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderCameraCutSource, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_RootLevelSequence_MetaData[] = {
		{ "Comment", "/** The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderCameraCutSource.h" },
		{ "ToolTip", "The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_RootLevelSequence = { "RootLevelSequence", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderCameraCutSource, RootLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_RootLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_RootLevelSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::NewProp_RootLevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderCameraCutSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::ClassParams = {
		&UTakeRecorderCameraCutSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderCameraCutSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderCameraCutSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderCameraCutSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderCameraCutSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderCameraCutSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderCameraCutSource>()
	{
		return UTakeRecorderCameraCutSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderCameraCutSource);
	UTakeRecorderCameraCutSource::~UTakeRecorderCameraCutSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderCameraCutSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderCameraCutSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderCameraCutSource, UTakeRecorderCameraCutSource::StaticClass, TEXT("UTakeRecorderCameraCutSource"), &Z_Registration_Info_UClass_UTakeRecorderCameraCutSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderCameraCutSource), 4067701373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderCameraCutSource_h_1143536228(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderCameraCutSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderCameraCutSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
