// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimMovieSceneSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimMovieSceneSequence() {}
// Cross Module References
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneSequence();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	void UContextualAnimMovieSceneSequence::StaticRegisterNativesUContextualAnimMovieSceneSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimMovieSceneSequence);
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneSequence_NoRegister()
	{
		return UContextualAnimMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BoundActors_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoundActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimMovieSceneSequence.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_ValueProp = { "BoundActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_Key_KeyProp = { "BoundActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_MetaData[] = {
		{ "Comment", "//@TODO: Remove this and use the actors from the PreviewSceneManager\n" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSequence.h" },
		{ "ToolTip", "@TODO: Remove this and use the actors from the PreviewSceneManager" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors = { "BoundActors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneSequence, BoundActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::NewProp_BoundActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimMovieSceneSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::ClassParams = {
		&UContextualAnimMovieSceneSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneSequence()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimMovieSceneSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimMovieSceneSequence.OuterSingleton, Z_Construct_UClass_UContextualAnimMovieSceneSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimMovieSceneSequence.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimMovieSceneSequence>()
	{
		return UContextualAnimMovieSceneSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimMovieSceneSequence);
	UContextualAnimMovieSceneSequence::~UContextualAnimMovieSceneSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimMovieSceneSequence, UContextualAnimMovieSceneSequence::StaticClass, TEXT("UContextualAnimMovieSceneSequence"), &Z_Registration_Info_UClass_UContextualAnimMovieSceneSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimMovieSceneSequence), 3286037676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSequence_h_952067774(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
