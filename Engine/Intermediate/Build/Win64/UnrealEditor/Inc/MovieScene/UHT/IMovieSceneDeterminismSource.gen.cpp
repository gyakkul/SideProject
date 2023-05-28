// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Compilation/IMovieSceneDeterminismSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneDeterminismSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData;
class UScriptStruct* FMovieSceneDeterminismData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDeterminismData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDeterminismData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDeterminismData>()
{
	return FMovieSceneDeterminismData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresLowerFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresLowerFence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresUpperFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresUpperFence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Determinism data that is generated on compile of a UMovieSceneSequence */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "Determinism data that is generated on compile of a UMovieSceneSequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDeterminismData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_Inner = { "Fences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of times that should be treated as fences. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts.\n\x09 * Duplicates are allowed during compilation, but will be removed in the final compiled data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "Array of times that should be treated as fences. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts.\nDuplicates are allowed during compilation, but will be removed in the final compiled data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences = { "Fences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneDeterminismData, Fences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the lower bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "True if this sequence should include a fence on the lower bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj)
	{
		((FMovieSceneDeterminismData*)Obj)->bParentSequenceRequiresLowerFence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence = { "bParentSequenceRequiresLowerFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneDeterminismData), &Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the upper bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "True if this sequence should include a fence on the upper bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj)
	{
		((FMovieSceneDeterminismData*)Obj)->bParentSequenceRequiresUpperFence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence = { "bParentSequenceRequiresUpperFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneDeterminismData), &Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneDeterminismData",
		sizeof(FMovieSceneDeterminismData),
		alignof(FMovieSceneDeterminismData),
		Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData.InnerSingleton;
	}
	void UMovieSceneDeterminismSource::StaticRegisterNativesUMovieSceneDeterminismSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDeterminismSource);
	UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister()
	{
		return UMovieSceneDeterminismSource::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDeterminismSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneDeterminismSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::ClassParams = {
		&UMovieSceneDeterminismSource::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDeterminismSource()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDeterminismSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDeterminismSource.OuterSingleton, Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDeterminismSource.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneDeterminismSource>()
	{
		return UMovieSceneDeterminismSource::StaticClass();
	}
	UMovieSceneDeterminismSource::UMovieSceneDeterminismSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDeterminismSource);
	UMovieSceneDeterminismSource::~UMovieSceneDeterminismSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneDeterminismData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewStructOps, TEXT("MovieSceneDeterminismData"), &Z_Registration_Info_UScriptStruct_MovieSceneDeterminismData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDeterminismData), 634363497U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDeterminismSource, UMovieSceneDeterminismSource::StaticClass, TEXT("UMovieSceneDeterminismSource"), &Z_Registration_Info_UClass_UMovieSceneDeterminismSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDeterminismSource), 2580973216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_2138729350(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
