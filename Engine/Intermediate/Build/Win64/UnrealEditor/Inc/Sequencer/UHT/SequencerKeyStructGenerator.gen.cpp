// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerKeyStructGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerKeyStructGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void UMovieSceneKeyStructType::StaticRegisterNativesUMovieSceneKeyStructType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneKeyStructType);
	UClass* Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister()
	{
		return UMovieSceneKeyStructType::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTimesProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_SourceTimesProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceValuesProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_SourceValuesProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestTimeProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_DestTimeProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestValueProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_DestValueProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneKeyStructType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct type that is generated from an FMovieSceneChannel type to create a single edit interface for a key/value pair\n */" },
		{ "IncludePath", "SequencerKeyStructGenerator.h" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Struct type that is generated from an FMovieSceneChannel type to create a single edit interface for a key/value pair" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData[] = {
		{ "Comment", "/** The (external) source TArray<FFrameNumber> property that stores the key times in the channel */" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The (external) source TArray<FFrameNumber> property that stores the key times in the channel" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty = { "SourceTimesProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneKeyStructType, SourceTimesProperty), &FArrayProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData[] = {
		{ "Comment", "/** The (external) source TArray<T> property that stores the key values in the channel */" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The (external) source TArray<T> property that stores the key values in the channel" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty = { "SourceValuesProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneKeyStructType, SourceValuesProperty), &FArrayProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData[] = {
		{ "Comment", "/** The time property for this reflected struct, of type FFrameNumber */" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The time property for this reflected struct, of type FFrameNumber" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty = { "DestTimeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneKeyStructType, DestTimeProperty), &FStructProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData[] = {
		{ "Comment", "/** The value property for this reflected struct, of the same type as SourceValuesProperty->Inner */" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The value property for this reflected struct, of the same type as SourceValuesProperty->Inner" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty = { "DestValueProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneKeyStructType, DestValueProperty), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneKeyStructType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneKeyStructType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::ClassParams = {
		&UMovieSceneKeyStructType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneKeyStructType()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneKeyStructType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneKeyStructType.OuterSingleton, Z_Construct_UClass_UMovieSceneKeyStructType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneKeyStructType.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneKeyStructType>()
	{
		return UMovieSceneKeyStructType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneKeyStructType);
	UMovieSceneKeyStructType::~UMovieSceneKeyStructType() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneKeyStructType, UMovieSceneKeyStructType::StaticClass, TEXT("UMovieSceneKeyStructType"), &Z_Registration_Info_UClass_UMovieSceneKeyStructType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneKeyStructType), 306630279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_1508396525(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
