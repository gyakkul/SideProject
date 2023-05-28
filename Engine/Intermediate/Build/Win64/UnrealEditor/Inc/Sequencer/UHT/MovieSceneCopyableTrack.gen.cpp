// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieSceneCopyableTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCopyableTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableTrack();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void UMovieSceneCopyableTrack::StaticRegisterNativesUMovieSceneCopyableTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCopyableTrack);
	UClass* Z_Construct_UClass_UMovieSceneCopyableTrack_NoRegister()
	{
		return UMovieSceneCopyableTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCopyableTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootTrack_MetaData[];
#endif
		static void NewProp_bIsRootTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCameraCutTrack_MetaData[];
#endif
		static void NewProp_bIsCameraCutTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraCutTrack;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCopyableTrack.h" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableTrack, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack_SetBit(void* Obj)
	{
		((UMovieSceneCopyableTrack*)Obj)->bIsRootTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack = { "bIsRootTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCopyableTrack), &Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack_SetBit(void* Obj)
	{
		((UMovieSceneCopyableTrack*)Obj)->bIsCameraCutTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack = { "bIsCameraCutTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCopyableTrack), &Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath_Inner = { "FolderPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableTrack, FolderPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsRootTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_bIsCameraCutTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::NewProp_FolderPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCopyableTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::ClassParams = {
		&UMovieSceneCopyableTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCopyableTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCopyableTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCopyableTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCopyableTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCopyableTrack.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneCopyableTrack>()
	{
		return UMovieSceneCopyableTrack::StaticClass();
	}
	UMovieSceneCopyableTrack::UMovieSceneCopyableTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCopyableTrack);
	UMovieSceneCopyableTrack::~UMovieSceneCopyableTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCopyableTrack, UMovieSceneCopyableTrack::StaticClass, TEXT("UMovieSceneCopyableTrack"), &Z_Registration_Info_UClass_UMovieSceneCopyableTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCopyableTrack), 1893759539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_3448367271(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
