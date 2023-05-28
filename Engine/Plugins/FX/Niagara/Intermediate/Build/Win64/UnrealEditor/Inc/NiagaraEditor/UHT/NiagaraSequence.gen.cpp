// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/NiagaraSequence/NiagaraSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSequence() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSequence();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSequence::StaticRegisterNativesUNiagaraSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSequence);
	UClass* Z_Construct_UClass_UNiagaraSequence_NoRegister()
	{
		return UNiagaraSequence::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSequence_Statics
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
	UObject* (*const Z_Construct_UClass_UNiagaraSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene sequence used by Niagara.\n */" },
		{ "IncludePath", "Sequencer/NiagaraSequence/NiagaraSequence.h" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/NiagaraSequence.h" },
		{ "ToolTip", "Movie scene sequence used by Niagara." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this sequence. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/NiagaraSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSequence_Statics::ClassParams = {
		&UNiagaraSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSequence_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSequence()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSequence.OuterSingleton, Z_Construct_UClass_UNiagaraSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSequence.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSequence>()
	{
		return UNiagaraSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSequence);
	UNiagaraSequence::~UNiagaraSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSequence, UNiagaraSequence::StaticClass, TEXT("UNiagaraSequence"), &Z_Registration_Info_UClass_UNiagaraSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSequence), 257984909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_641752556(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
