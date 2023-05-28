// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/MovieSceneDMXLibraryTrackRecorder.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDMXLibraryTrackRecorder() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder();
	DMXEDITOR_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UMovieSceneDMXLibraryTrackRecorder::StaticRegisterNativesUMovieSceneDMXLibraryTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDMXLibraryTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_NoRegister()
	{
		return UMovieSceneDMXLibraryTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixturePatchRefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Track recorder implementation for DMX libraries\n* Reuses logic of Animation/LiveLink Plugin in many areas.\n*/" },
		{ "IncludePath", "Sequencer/MovieSceneDMXLibraryTrackRecorder.h" },
		{ "ModuleRelativePath", "Private/Sequencer/MovieSceneDMXLibraryTrackRecorder.h" },
		{ "ToolTip", "Track recorder implementation for DMX libraries\nReuses logic of Animation/LiveLink Plugin in many areas." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs_Inner = { "FixturePatchRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/MovieSceneDMXLibraryTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs = { "FixturePatchRefs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDMXLibraryTrackRecorder, FixturePatchRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs_MetaData)) }; // 1707509301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::NewProp_FixturePatchRefs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDMXLibraryTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::ClassParams = {
		&UMovieSceneDMXLibraryTrackRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrackRecorder.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UMovieSceneDMXLibraryTrackRecorder>()
	{
		return UMovieSceneDMXLibraryTrackRecorder::StaticClass();
	}
	UMovieSceneDMXLibraryTrackRecorder::UMovieSceneDMXLibraryTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDMXLibraryTrackRecorder);
	UMovieSceneDMXLibraryTrackRecorder::~UMovieSceneDMXLibraryTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_MovieSceneDMXLibraryTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_MovieSceneDMXLibraryTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDMXLibraryTrackRecorder, UMovieSceneDMXLibraryTrackRecorder::StaticClass, TEXT("UMovieSceneDMXLibraryTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDMXLibraryTrackRecorder), 2514452142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_MovieSceneDMXLibraryTrackRecorder_h_907460020(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_MovieSceneDMXLibraryTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Sequencer_MovieSceneDMXLibraryTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
