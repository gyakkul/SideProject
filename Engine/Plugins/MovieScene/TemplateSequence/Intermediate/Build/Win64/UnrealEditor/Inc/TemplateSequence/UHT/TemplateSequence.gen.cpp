// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequence() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UTemplateSequence::StaticRegisterNativesUTemplateSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequence);
	UClass* Z_Construct_UClass_UTemplateSequence_NoRegister()
	{
		return UTemplateSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BoundActorClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundActorComponents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundActorComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundActorComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoundActorComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Movie scene animation that can be instanced multiple times inside a level sequence.\n */" },
		{ "IncludePath", "TemplateSequence.h" },
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Movie scene animation that can be instanced multiple times inside a level sequence." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass = { "BoundActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateSequence, BoundActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_ValueProp = { "BoundActorComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_Key_KeyProp = { "BoundActorComponents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/TemplateSequence.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents = { "BoundActorComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateSequence, BoundActorComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequence_Statics::NewProp_BoundActorComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequence_Statics::ClassParams = {
		&UTemplateSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequence()
	{
		if (!Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton, Z_Construct_UClass_UTemplateSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateSequence.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequence>()
	{
		return UTemplateSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequence);
	UTemplateSequence::~UTemplateSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequence, UTemplateSequence::StaticClass, TEXT("UTemplateSequence"), &Z_Registration_Info_UClass_UTemplateSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequence), 2934651235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_2114168431(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
