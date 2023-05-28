// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneParticleSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleKey;
	static UEnum* EParticleKey_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleKey.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EParticleKey"));
		}
		return Z_Registration_Info_UEnum_EParticleKey.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EParticleKey>()
	{
		return EParticleKey_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enumerators[] = {
		{ "EParticleKey::Activate", (int64)EParticleKey::Activate },
		{ "EParticleKey::Deactivate", (int64)EParticleKey::Deactivate },
		{ "EParticleKey::Trigger", (int64)EParticleKey::Trigger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enum_MetaDataParams[] = {
		{ "Activate.Name", "EParticleKey::Activate" },
		{ "Comment", "/**\n * Defines the types of particle keys.\n */" },
		{ "Deactivate.Name", "EParticleKey::Deactivate" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Defines the types of particle keys." },
		{ "Trigger.Name", "EParticleKey::Trigger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		"EParticleKey",
		"EParticleKey",
		Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey()
	{
		if (!Z_Registration_Info_UEnum_EParticleKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleKey.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneParticleChannel>() == std::is_polymorphic<FMovieSceneByteChannel>(), "USTRUCT FMovieSceneParticleChannel cannot be polymorphic unless super FMovieSceneByteChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel;
class UScriptStruct* FMovieSceneParticleChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParticleChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneParticleChannel>()
{
	return FMovieSceneParticleChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParticleChannel>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneByteChannel,
		&NewStructOps,
		"MovieSceneParticleChannel",
		sizeof(FMovieSceneParticleChannel),
		alignof(FMovieSceneParticleChannel),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton;
	}
	void UMovieSceneParticleSection::StaticRegisterNativesUMovieSceneParticleSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParticleSection);
	UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister()
	{
		return UMovieSceneParticleSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParticleSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleKeys_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParticleSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Particle section, for particle toggling and triggering.\n */" },
		{ "IncludePath", "Sections/MovieSceneParticleSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Particle section, for particle toggling and triggering." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData[] = {
		{ "Comment", "/** Curve containing the particle keys. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Curve containing the particle keys." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys = { "ParticleKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneParticleSection, ParticleKeys), Z_Construct_UScriptStruct_FMovieSceneParticleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData)) }; // 2021007694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParticleSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams = {
		&UMovieSceneParticleSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParticleSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton, Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParticleSection>()
	{
		return UMovieSceneParticleSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleSection);
	UMovieSceneParticleSection::~UMovieSceneParticleSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::EnumInfo[] = {
		{ EParticleKey_StaticEnum, TEXT("EParticleKey"), &Z_Registration_Info_UEnum_EParticleKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1797633036U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneParticleChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::NewStructOps, TEXT("MovieSceneParticleChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneParticleChannel), 2021007694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneParticleSection, UMovieSceneParticleSection::StaticClass, TEXT("UMovieSceneParticleSection"), &Z_Registration_Info_UClass_UMovieSceneParticleSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParticleSection), 3312252520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_2265996703(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
