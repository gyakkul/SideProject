// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/MovieSceneTestObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestObjects() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

static_assert(std::is_polymorphic<FTestMovieSceneEvalTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FTestMovieSceneEvalTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate;
class UScriptStruct* FTestMovieSceneEvalTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("TestMovieSceneEvalTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FTestMovieSceneEvalTemplate>()
{
	return FTestMovieSceneEvalTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"TestMovieSceneEvalTemplate",
		sizeof(FTestMovieSceneEvalTemplate),
		alignof(FTestMovieSceneEvalTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate.InnerSingleton;
	}
	void UTestMovieSceneTrack::StaticRegisterNativesUTestMovieSceneTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneTrack);
	UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister()
	{
		return UTestMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[];
#endif
		static void NewProp_bHighPassFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SectionArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit(void* Obj)
	{
		((UTestMovieSceneTrack*)Obj)->bHighPassFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter = { "bHighPassFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestMovieSceneTrack), &Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestMovieSceneTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UTestMovieSceneTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams = {
		&UTestMovieSceneTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneTrack()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneTrack>()
	{
		return UTestMovieSceneTrack::StaticClass();
	}
	UTestMovieSceneTrack::UTestMovieSceneTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneTrack);
	UTestMovieSceneTrack::~UTestMovieSceneTrack() {}
	void UTestMovieSceneSection::StaticRegisterNativesUTestMovieSceneSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSection);
	UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister()
	{
		return UTestMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams = {
		&UTestMovieSceneSection::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSection()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSection>()
	{
		return UTestMovieSceneSection::StaticClass();
	}
	UTestMovieSceneSection::UTestMovieSceneSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSection);
	UTestMovieSceneSection::~UTestMovieSceneSection() {}
	void UTestMovieSceneSequence::StaticRegisterNativesUTestMovieSceneSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSequence);
	UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister()
	{
		return UTestMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestMovieSceneSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams = {
		&UTestMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSequence()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneSequence.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSequence>()
	{
		return UTestMovieSceneSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSequence);
	UTestMovieSceneSequence::~UTestMovieSceneSequence() {}
	void UTestMovieSceneSubTrack::StaticRegisterNativesUTestMovieSceneSubTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSubTrack);
	UClass* Z_Construct_UClass_UTestMovieSceneSubTrack_NoRegister()
	{
		return UTestMovieSceneSubTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSubTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SectionArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestMovieSceneSubTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::NewProp_SectionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams = {
		&UTestMovieSceneSubTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSubTrack()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSubTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneSubTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubTrack>()
	{
		return UTestMovieSceneSubTrack::StaticClass();
	}
	UTestMovieSceneSubTrack::UTestMovieSceneSubTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubTrack);
	UTestMovieSceneSubTrack::~UTestMovieSceneSubTrack() {}
	void UTestMovieSceneSubSection::StaticRegisterNativesUTestMovieSceneSubSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneSubSection);
	UClass* Z_Construct_UClass_UTestMovieSceneSubSection_NoRegister()
	{
		return UTestMovieSceneSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSubSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams = {
		&UTestMovieSceneSubSection::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSubSection()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneSubSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneSubSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneSubSection>()
	{
		return UTestMovieSceneSubSection::StaticClass();
	}
	UTestMovieSceneSubSection::UTestMovieSceneSubSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSubSection);
	UTestMovieSceneSubSection::~UTestMovieSceneSubSection() {}
	void UTestMovieSceneEvalHookTrack::StaticRegisterNativesUTestMovieSceneEvalHookTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneEvalHookTrack);
	UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack_NoRegister()
	{
		return UTestMovieSceneEvalHookTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SectionArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_Inner = { "SectionArray", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray = { "SectionArray", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestMovieSceneEvalHookTrack, SectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::NewProp_SectionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneEvalHookTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::ClassParams = {
		&UTestMovieSceneEvalHookTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneEvalHookTrack()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton, Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneEvalHookTrack>()
	{
		return UTestMovieSceneEvalHookTrack::StaticClass();
	}
	UTestMovieSceneEvalHookTrack::UTestMovieSceneEvalHookTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneEvalHookTrack);
	UTestMovieSceneEvalHookTrack::~UTestMovieSceneEvalHookTrack() {}
	void UTestMovieSceneEvalHookSection::StaticRegisterNativesUTestMovieSceneEvalHookSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMovieSceneEvalHookSection);
	UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection_NoRegister()
	{
		return UTestMovieSceneEvalHookSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneEvalHookSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::ClassParams = {
		&UTestMovieSceneEvalHookSection::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneEvalHookSection()
	{
		if (!Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton, Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UTestMovieSceneEvalHookSection>()
	{
		return UTestMovieSceneEvalHookSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneEvalHookSection);
	UTestMovieSceneEvalHookSection::~UTestMovieSceneEvalHookSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ScriptStructInfo[] = {
		{ FTestMovieSceneEvalTemplate::StaticStruct, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::NewStructOps, TEXT("TestMovieSceneEvalTemplate"), &Z_Registration_Info_UScriptStruct_TestMovieSceneEvalTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestMovieSceneEvalTemplate), 3153350419U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestMovieSceneTrack, UTestMovieSceneTrack::StaticClass, TEXT("UTestMovieSceneTrack"), &Z_Registration_Info_UClass_UTestMovieSceneTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneTrack), 1688103315U) },
		{ Z_Construct_UClass_UTestMovieSceneSection, UTestMovieSceneSection::StaticClass, TEXT("UTestMovieSceneSection"), &Z_Registration_Info_UClass_UTestMovieSceneSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSection), 3721212640U) },
		{ Z_Construct_UClass_UTestMovieSceneSequence, UTestMovieSceneSequence::StaticClass, TEXT("UTestMovieSceneSequence"), &Z_Registration_Info_UClass_UTestMovieSceneSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSequence), 641991285U) },
		{ Z_Construct_UClass_UTestMovieSceneSubTrack, UTestMovieSceneSubTrack::StaticClass, TEXT("UTestMovieSceneSubTrack"), &Z_Registration_Info_UClass_UTestMovieSceneSubTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSubTrack), 1237407906U) },
		{ Z_Construct_UClass_UTestMovieSceneSubSection, UTestMovieSceneSubSection::StaticClass, TEXT("UTestMovieSceneSubSection"), &Z_Registration_Info_UClass_UTestMovieSceneSubSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneSubSection), 754343820U) },
		{ Z_Construct_UClass_UTestMovieSceneEvalHookTrack, UTestMovieSceneEvalHookTrack::StaticClass, TEXT("UTestMovieSceneEvalHookTrack"), &Z_Registration_Info_UClass_UTestMovieSceneEvalHookTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneEvalHookTrack), 2845862647U) },
		{ Z_Construct_UClass_UTestMovieSceneEvalHookSection, UTestMovieSceneEvalHookSection::StaticClass, TEXT("UTestMovieSceneEvalHookSection"), &Z_Registration_Info_UClass_UTestMovieSceneEvalHookSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMovieSceneEvalHookSection), 3306601739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_864984954(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
