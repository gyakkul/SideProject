// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigParameterTemplate.h"
#include "ConstraintChannel.h"
#include "Sequencer/MovieSceneControlRigParameterSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterTemplate() {}
// Cross Module References
	CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneControlRigParameterTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FMovieSceneControlRigParameterTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate;
class UScriptStruct* FMovieSceneControlRigParameterTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigParameterTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigParameterTemplate>()
{
	return FMovieSceneControlRigParameterTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Enums_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enums_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enums;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Integers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Integers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigParameterTemplate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums_Inner = { "Enums", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3644975941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums_MetaData[] = {
		{ "Comment", "/** The bool parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTemplate.h" },
		{ "ToolTip", "The bool parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums = { "Enums", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigParameterTemplate, Enums), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums_MetaData)) }; // 3644975941
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers_Inner = { "Integers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 1243810027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers_MetaData[] = {
		{ "Comment", "/** The enum parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTemplate.h" },
		{ "ToolTip", "The enum parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers = { "Integers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigParameterTemplate, Integers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers_MetaData)) }; // 1243810027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces_Inner = { "Spaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel, METADATA_PARAMS(nullptr, 0) }; // 3218983784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces_MetaData[] = {
		{ "Comment", "/** Controls and their space keys*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTemplate.h" },
		{ "ToolTip", "Controls and their space keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces = { "Spaces", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigParameterTemplate, Spaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces_MetaData)) }; // 3218983784
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintAndActiveChannel, METADATA_PARAMS(nullptr, 0) }; // 1158857121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigParameterTemplate, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints_MetaData)) }; // 1158857121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Enums,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Integers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Spaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewProp_Constraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneControlRigParameterTemplate",
		sizeof(FMovieSceneControlRigParameterTemplate),
		alignof(FMovieSceneControlRigParameterTemplate),
		Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneControlRigParameterTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigParameterTemplate_Statics::NewStructOps, TEXT("MovieSceneControlRigParameterTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigParameterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigParameterTemplate), 2337380658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTemplate_h_2953823965(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
