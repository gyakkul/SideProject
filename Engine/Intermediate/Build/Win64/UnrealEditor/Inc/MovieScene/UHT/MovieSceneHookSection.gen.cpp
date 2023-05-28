// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneHookSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneHookSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneHookSection::StaticRegisterNativesUMovieSceneHookSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneHookSection);
	UClass* Z_Construct_UClass_UMovieSceneHookSection_NoRegister()
	{
		return UMovieSceneHookSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHookSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresRangedHook_MetaData[];
#endif
		static void NewProp_bRequiresRangedHook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresRangedHook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresTriggerHooks_MetaData[];
#endif
		static void NewProp_bRequiresTriggerHooks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresTriggerHooks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHookSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Sections/MovieSceneHookSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_SetBit(void* Obj)
	{
		((UMovieSceneHookSection*)Obj)->bRequiresRangedHook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook = { "bRequiresRangedHook", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneHookSection), &Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_SetBit(void* Obj)
	{
		((UMovieSceneHookSection*)Obj)->bRequiresTriggerHooks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks = { "bRequiresTriggerHooks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneHookSection), &Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneHookSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneHookSection, IMovieSceneEntityProvider), false },  // 1947645787
			{ Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneHookSection, IMovieSceneEvaluationHook), false },  // 2166578473
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHookSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHookSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHookSection_Statics::ClassParams = {
		&UMovieSceneHookSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHookSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton, Z_Construct_UClass_UMovieSceneHookSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneHookSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneHookSection>()
	{
		return UMovieSceneHookSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHookSection);
	UMovieSceneHookSection::~UMovieSceneHookSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneHookSection, UMovieSceneHookSection::StaticClass, TEXT("UMovieSceneHookSection"), &Z_Registration_Info_UClass_UMovieSceneHookSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneHookSection), 2221698912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_1342570455(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
