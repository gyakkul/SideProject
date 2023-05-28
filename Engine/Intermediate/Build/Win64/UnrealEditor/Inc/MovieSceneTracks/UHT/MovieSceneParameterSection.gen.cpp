// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneParameterSection.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterSection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneParameterSectionExtender::StaticRegisterNativesUMovieSceneParameterSectionExtender()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParameterSectionExtender);
	UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister()
	{
		return UMovieSceneParameterSectionExtender::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneParameterSectionExtender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::ClassParams = {
		&UMovieSceneParameterSectionExtender::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.OuterSingleton, Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParameterSectionExtender>()
	{
		return UMovieSceneParameterSectionExtender::StaticClass();
	}
	UMovieSceneParameterSectionExtender::UMovieSceneParameterSectionExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParameterSectionExtender);
	UMovieSceneParameterSectionExtender::~UMovieSceneParameterSectionExtender() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve;
class UScriptStruct* FBoolParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("BoolParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FBoolParameterNameAndCurve>()
{
	return FBoolParameterNameAndCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an bool  parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an bool  parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the scalar parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the scalar parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoolParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the scalar parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoolParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) }; // 2252890828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"BoolParameterNameAndCurve",
		sizeof(FBoolParameterNameAndCurve),
		alignof(FBoolParameterNameAndCurve),
		Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve;
class UScriptStruct* FScalarParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ScalarParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FScalarParameterNameAndCurve>()
{
	return FScalarParameterNameAndCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated scalar parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated scalar parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the scalar parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the scalar parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the scalar parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalarParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ScalarParameterNameAndCurve",
		sizeof(FScalarParameterNameAndCurve),
		alignof(FScalarParameterNameAndCurve),
		Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves;
class UScriptStruct* FVector2DParameterNameAndCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("Vector2DParameterNameAndCurves"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FVector2DParameterNameAndCurves>()
{
	return FVector2DParameterNameAndCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated vector2D parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector2D parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2DParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the vector parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVector2DParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the x component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVector2DParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the y component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVector2DParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_XCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewProp_YCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"Vector2DParameterNameAndCurves",
		sizeof(FVector2DParameterNameAndCurves),
		alignof(FVector2DParameterNameAndCurves),
		Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.InnerSingleton, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves;
class UScriptStruct* FVectorParameterNameAndCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("VectorParameterNameAndCurves"));
	}
	return Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FVectorParameterNameAndCurves>()
{
	return FVectorParameterNameAndCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated vector parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated vector parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the vector parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the vector parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the x component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the x component of the vector parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, XCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the y component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the y component of the vector parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, YCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the z component of the vector parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the z component of the vector parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve = { "ZCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorParameterNameAndCurves, ZCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_XCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_YCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewProp_ZCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"VectorParameterNameAndCurves",
		sizeof(FVectorParameterNameAndCurves),
		alignof(FVectorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.InnerSingleton, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves;
class UScriptStruct* FColorParameterNameAndCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameterNameAndCurves, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ColorParameterNameAndCurves"));
	}
	return Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FColorParameterNameAndCurves>()
{
	return FColorParameterNameAndCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Structure representing an animated color parameter and it's associated animation curve.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated color parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the color parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the color parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the red component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the red component of the color parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the green component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the green component of the color parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the blue component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the blue component of the color parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the alpha component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the alpha component of the color parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorParameterNameAndCurves, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_RedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_GreenCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_BlueCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewProp_AlphaCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ColorParameterNameAndCurves",
		sizeof(FColorParameterNameAndCurves),
		alignof(FColorParameterNameAndCurves),
		Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.InnerSingleton, Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves;
class UScriptStruct* FTransformParameterNameAndCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("TransformParameterNameAndCurves"));
	}
	return Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FTransformParameterNameAndCurves>()
{
	return FTransformParameterNameAndCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Structure representing an animated transform parameter and it's associated animation curve.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Structure representing an animated transform parameter and it's associated animation curve." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformParameterNameAndCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Comment", "/** The name of the transform  parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The name of the transform  parameter which is being animated." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformParameterNameAndCurves, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, FTransformParameterNameAndCurves), nullptr, nullptr, STRUCT_OFFSET(FTransformParameterNameAndCurves, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Rotation curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Rotation, FTransformParameterNameAndCurves), nullptr, nullptr, STRUCT_OFFSET(FTransformParameterNameAndCurves, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, FTransformParameterNameAndCurves), nullptr, nullptr, STRUCT_OFFSET(FTransformParameterNameAndCurves, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"TransformParameterNameAndCurves",
		sizeof(FTransformParameterNameAndCurves),
		alignof(FTransformParameterNameAndCurves),
		Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.InnerSingleton, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves.InnerSingleton;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execGetParameterNames)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParameterNames(Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveTransformParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTransformParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveColorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveColorParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveVectorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveVectorParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveVector2DParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveVector2DParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveBoolParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execRemoveScalarParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveScalarParameter(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddTransformParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTransformParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddColorParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddColorParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddVectorParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVectorParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddVector2DParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddVector2DParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddBoolParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoolParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneParameterSection::execAddScalarParameterKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InParameterName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScalarParameterKey(Z_Param_InParameterName,Z_Param_InTime,Z_Param_InValue);
		P_NATIVE_END;
	}
	void UMovieSceneParameterSection::StaticRegisterNativesUMovieSceneParameterSection()
	{
		UClass* Class = UMovieSceneParameterSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoolParameterKey", &UMovieSceneParameterSection::execAddBoolParameterKey },
			{ "AddColorParameterKey", &UMovieSceneParameterSection::execAddColorParameterKey },
			{ "AddScalarParameterKey", &UMovieSceneParameterSection::execAddScalarParameterKey },
			{ "AddTransformParameterKey", &UMovieSceneParameterSection::execAddTransformParameterKey },
			{ "AddVector2DParameterKey", &UMovieSceneParameterSection::execAddVector2DParameterKey },
			{ "AddVectorParameterKey", &UMovieSceneParameterSection::execAddVectorParameterKey },
			{ "GetParameterNames", &UMovieSceneParameterSection::execGetParameterNames },
			{ "RemoveBoolParameter", &UMovieSceneParameterSection::execRemoveBoolParameter },
			{ "RemoveColorParameter", &UMovieSceneParameterSection::execRemoveColorParameter },
			{ "RemoveScalarParameter", &UMovieSceneParameterSection::execRemoveScalarParameter },
			{ "RemoveTransformParameter", &UMovieSceneParameterSection::execRemoveTransformParameter },
			{ "RemoveVector2DParameter", &UMovieSceneParameterSection::execRemoveVector2DParameter },
			{ "RemoveVectorParameter", &UMovieSceneParameterSection::execRemoveVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddBoolParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			bool InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddBoolParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddBoolParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventAddBoolParameterKey_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventAddBoolParameterKey_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific bool parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific bool parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddBoolParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::MovieSceneParameterSection_eventAddBoolParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddColorParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddColorParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific color parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific color parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddColorParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::MovieSceneParameterSection_eventAddColorParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddScalarParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			float InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddScalarParameterKey_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific scalar parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific scalar parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddScalarParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::MovieSceneParameterSection_eventAddScalarParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddTransformParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FTransform InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddTransformParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific color parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific color parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddTransformParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::MovieSceneParameterSection_eventAddTransformParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddVector2DParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FVector2D InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVector2DParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific vector2D parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific vector2D parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddVector2DParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::MovieSceneParameterSection_eventAddVector2DParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics
	{
		struct MovieSceneParameterSection_eventAddVectorParameterKey_Parms
		{
			FName InParameterName;
			FFrameNumber InTime;
			FVector InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventAddVectorParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific vector parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific vector parameter at the specified time with the specified value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "AddVectorParameterKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::MovieSceneParameterSection_eventAddVectorParameterKey_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics
	{
		struct MovieSceneParameterSection_eventGetParameterNames_Parms
		{
			TSet<FName> ParameterNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames_ElementProp = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventGetParameterNames_Parms, ParameterNames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the set of all parameter names used by this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Gets the set of all parameter names used by this section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "GetParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::MovieSceneParameterSection_eventGetParameterNames_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveBoolParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveBoolParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveBoolParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveBoolParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Removes a bool parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the bool parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a bool parameter from this section.\n\n@param InParameterName The name of the bool parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveBoolParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::MovieSceneParameterSection_eventRemoveBoolParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveColorParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveColorParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveColorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveColorParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Removes a color parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the color parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a color parameter from this section.\n\n@param InParameterName The name of the color parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveColorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::MovieSceneParameterSection_eventRemoveColorParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveScalarParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveScalarParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveScalarParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveScalarParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** \n\x09 * Removes a scalar parameter from this section. \n\x09 * \n\x09 * @param InParameterName The name of the scalar parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a scalar parameter from this section.\n\n@param InParameterName The name of the scalar parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveScalarParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::MovieSceneParameterSection_eventRemoveScalarParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveTransformParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveTransformParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveTransformParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveTransformParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Removes a transform parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the transform parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a transform parameter from this section.\n\n@param InParameterName The name of the transform parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveTransformParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::MovieSceneParameterSection_eventRemoveTransformParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveVector2DParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveVector2DParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveVector2DParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveVector2DParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Removes a vector2D parameter from this section.\n\x09 *\n\x09 * @param InParameterName The name of the vector2D parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a vector2D parameter from this section.\n\n@param InParameterName The name of the vector2D parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveVector2DParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::MovieSceneParameterSection_eventRemoveVector2DParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics
	{
		struct MovieSceneParameterSection_eventRemoveVectorParameter_Parms
		{
			FName InParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParameterSection_eventRemoveVectorParameter_Parms, InParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneParameterSection_eventRemoveVectorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParameterSection_eventRemoveVectorParameter_Parms), &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n     * Removes a vector parameter from this section.\n    *\n    * @param InParameterName The name of the vector parameter to remove.\n    * @returns True if a parameter with that name was found and removed, otherwise false.\n    */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "Removes a vector parameter from this section.\n\n@param InParameterName The name of the vector parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParameterSection, nullptr, "RemoveVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::MovieSceneParameterSection_eventRemoveVectorParameter_Parms), Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParameterSection);
	UClass* Z_Construct_UClass_UMovieSceneParameterSection_NoRegister()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParameterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2DParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2DParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2DParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformParameterNamesAndCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParameterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneParameterSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddBoolParameterKey, "AddBoolParameterKey" }, // 4177758083
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddColorParameterKey, "AddColorParameterKey" }, // 2104288890
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddScalarParameterKey, "AddScalarParameterKey" }, // 1176948919
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddTransformParameterKey, "AddTransformParameterKey" }, // 2963271548
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddVector2DParameterKey, "AddVector2DParameterKey" }, // 837502111
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_AddVectorParameterKey, "AddVectorParameterKey" }, // 163784433
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_GetParameterNames, "GetParameterNames" }, // 1874287840
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveBoolParameter, "RemoveBoolParameter" }, // 196984249
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveColorParameter, "RemoveColorParameter" }, // 1164733427
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveScalarParameter, "RemoveScalarParameter" }, // 2704614432
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveTransformParameter, "RemoveTransformParameter" }, // 712936126
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVector2DParameter, "RemoveVector2DParameter" }, // 2073170940
		{ &Z_Construct_UFunction_UMovieSceneParameterSection_RemoveVectorParameter, "RemoveVectorParameter" }, // 2149751803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single movie scene section which can contain data for multiple named parameters.\n */" },
		{ "IncludePath", "Sections/MovieSceneParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "A single movie scene section which can contain data for multiple named parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_Inner = { "BoolParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3256949391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The bool parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The bool parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves = { "BoolParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, BoolParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_MetaData)) }; // 3256949391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The scalar parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) }; // 3082588753
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_Inner = { "Vector2DParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 2184921026
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The vector3D parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector3D parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves = { "Vector2DParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, Vector2DParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_MetaData)) }; // 2184921026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 3977757910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves = { "VectorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, VectorParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_MetaData)) }; // 3977757910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 2994182939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The color parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The color parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves = { "ColorParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, ColorParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_MetaData)) }; // 2994182939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_Inner = { "TransformParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 1433004261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** The transform  parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParameterSection.h" },
		{ "ToolTip", "The transform  parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves = { "TransformParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParameterSection, TransformParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_MetaData)) }; // 1433004261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_BoolParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_Vector2DParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_VectorParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_ColorParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParameterSection_Statics::NewProp_TransformParameterNamesAndCurves,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneParameterSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParameterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParameterSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams = {
		&UMovieSceneParameterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParameterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParameterSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneParameterSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParameterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneParameterSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneParameterSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParameterSection>()
	{
		return UMovieSceneParameterSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParameterSection);
	UMovieSceneParameterSection::~UMovieSceneParameterSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ScriptStructInfo[] = {
		{ FBoolParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics::NewStructOps, TEXT("BoolParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_BoolParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolParameterNameAndCurve), 3256949391U) },
		{ FScalarParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics::NewStructOps, TEXT("ScalarParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_ScalarParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterNameAndCurve), 3082588753U) },
		{ FVector2DParameterNameAndCurves::StaticStruct, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics::NewStructOps, TEXT("Vector2DParameterNameAndCurves"), &Z_Registration_Info_UScriptStruct_Vector2DParameterNameAndCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2DParameterNameAndCurves), 2184921026U) },
		{ FVectorParameterNameAndCurves::StaticStruct, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics::NewStructOps, TEXT("VectorParameterNameAndCurves"), &Z_Registration_Info_UScriptStruct_VectorParameterNameAndCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorParameterNameAndCurves), 3977757910U) },
		{ FColorParameterNameAndCurves::StaticStruct, Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics::NewStructOps, TEXT("ColorParameterNameAndCurves"), &Z_Registration_Info_UScriptStruct_ColorParameterNameAndCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorParameterNameAndCurves), 2994182939U) },
		{ FTransformParameterNameAndCurves::StaticStruct, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics::NewStructOps, TEXT("TransformParameterNameAndCurves"), &Z_Registration_Info_UScriptStruct_TransformParameterNameAndCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformParameterNameAndCurves), 1433004261U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneParameterSectionExtender, UMovieSceneParameterSectionExtender::StaticClass, TEXT("UMovieSceneParameterSectionExtender"), &Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParameterSectionExtender), 4082455961U) },
		{ Z_Construct_UClass_UMovieSceneParameterSection, UMovieSceneParameterSection::StaticClass, TEXT("UMovieSceneParameterSection"), &Z_Registration_Info_UClass_UMovieSceneParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParameterSection), 1367730214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_3302691499(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
