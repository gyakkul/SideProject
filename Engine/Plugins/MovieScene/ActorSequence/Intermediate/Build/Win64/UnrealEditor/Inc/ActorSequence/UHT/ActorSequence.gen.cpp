// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence.h"
#include "ActorSequenceObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequence() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
// End Cross Module References
	void UActorSequence::StaticRegisterNativesUActorSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSequence);
	UClass* Z_Construct_UClass_UActorSequence_NoRegister()
	{
		return UActorSequence::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequence_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInitialized_MetaData[];
#endif
		static void NewProp_bHasBeenInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInitialized;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene animation embedded within an actor.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ActorSequence.h" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene animation embedded within an actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "/** Collection of object references. */" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Collection of object references." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorSequence, ObjectReferences), Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData)) }; // 3127329772
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
	};
#endif
	void Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit(void* Obj)
	{
		((UActorSequence*)Obj)->bHasBeenInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized = { "bHasBeenInitialized", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorSequence), &Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSequence_Statics::ClassParams = {
		&UActorSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequence()
	{
		if (!Z_Registration_Info_UClass_UActorSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSequence.OuterSingleton, Z_Construct_UClass_UActorSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSequence.OuterSingleton;
	}
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequence>()
	{
		return UActorSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequence);
	UActorSequence::~UActorSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSequence, UActorSequence::StaticClass, TEXT("UActorSequence"), &Z_Registration_Info_UClass_UActorSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSequence), 484691396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_2381154121(TEXT("/Script/ActorSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
