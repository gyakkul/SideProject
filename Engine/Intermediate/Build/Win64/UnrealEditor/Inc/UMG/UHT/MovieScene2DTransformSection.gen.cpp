// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieScene2DTransformSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask;
class UScriptStruct* FMovieScene2DTransformMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformMask, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("MovieScene2DTransformMask"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieScene2DTransformMask>()
{
	return FMovieScene2DTransformMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene2DTransformMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene2DTransformMask, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"MovieScene2DTransformMask",
		sizeof(FMovieScene2DTransformMask),
		alignof(FMovieScene2DTransformMask),
		Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton;
	}
	void UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene2DTransformSection);
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister()
	{
		return UMovieScene2DTransformSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMask;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transform section\n */" },
		{ "IncludePath", "Animation/MovieScene2DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "A transform section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieScene2DTransformMask, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData)) }; // 2504286192
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation curves*/" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, UMovieScene2DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation curve */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Rotation curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale curves */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, UMovieScene2DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData[] = {
		{ "Comment", "/** Shear curve */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Shear curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Shear, UMovieScene2DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene2DTransformSection, Shear), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene2DTransformSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams = {
		&UMovieScene2DTransformSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection()
	{
		if (!Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton, Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformSection>()
	{
		return UMovieScene2DTransformSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformSection);
	UMovieScene2DTransformSection::~UMovieScene2DTransformSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieScene2DTransformMask::StaticStruct, Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewStructOps, TEXT("MovieScene2DTransformMask"), &Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene2DTransformMask), 2504286192U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene2DTransformSection, UMovieScene2DTransformSection::StaticClass, TEXT("UMovieScene2DTransformSection"), &Z_Registration_Info_UClass_UMovieScene2DTransformSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene2DTransformSection), 901661371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_1215590549(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
