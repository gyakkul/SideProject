// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraEmitterTrack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UMovieSceneNiagaraEmitterSectionBase::StaticRegisterNativesUMovieSceneNiagaraEmitterSectionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraEmitterSectionBase);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_NoRegister()
	{
		return UMovieSceneNiagaraEmitterSectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraEmitterSectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::ClassParams = {
		&UMovieSceneNiagaraEmitterSectionBase::StaticClass,
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
		0x002800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSectionBase.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSectionBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UMovieSceneNiagaraEmitterSectionBase>()
	{
		return UMovieSceneNiagaraEmitterSectionBase::StaticClass();
	}
	UMovieSceneNiagaraEmitterSectionBase::UMovieSceneNiagaraEmitterSectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraEmitterSectionBase);
	UMovieSceneNiagaraEmitterSectionBase::~UMovieSceneNiagaraEmitterSectionBase() {}
	void UMovieSceneNiagaraEmitterTrack::StaticRegisterNativesUMovieSceneNiagaraEmitterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraEmitterTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_NoRegister()
	{
		return UMovieSceneNiagaraEmitterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSectionsWereModified_MetaData[];
#endif
		static void NewProp_bSectionsWereModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionsWereModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterHandleId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterHandleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SystemPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""A track representing an emitter in the niagara effect editor timeline.\n*/" },
		{ "IncludePath", "Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
		{ "ToolTip", "A track representing an emitter in the niagara effect editor timeline." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraEmitterTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified_SetBit(void* Obj)
	{
		((UMovieSceneNiagaraEmitterTrack*)Obj)->bSectionsWereModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified = { "bSectionsWereModified", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneNiagaraEmitterTrack), &Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_EmitterHandleId_MetaData[] = {
		{ "Comment", "// Used for detecting copy/paste \n" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
		{ "ToolTip", "Used for detecting copy/paste" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_EmitterHandleId = { "EmitterHandleId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraEmitterTrack, EmitterHandleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_EmitterHandleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_EmitterHandleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_SystemPath_MetaData[] = {
		{ "Comment", "// Used for detecting copy/paste\n" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/MovieSceneNiagaraEmitterTrack.h" },
		{ "ToolTip", "Used for detecting copy/paste" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_SystemPath = { "SystemPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraEmitterTrack, SystemPath), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_SystemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_SystemPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_bSectionsWereModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_EmitterHandleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::NewProp_SystemPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraEmitterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraEmitterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterTrack.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UMovieSceneNiagaraEmitterTrack>()
	{
		return UMovieSceneNiagaraEmitterTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraEmitterTrack);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase, UMovieSceneNiagaraEmitterSectionBase::StaticClass, TEXT("UMovieSceneNiagaraEmitterSectionBase"), &Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraEmitterSectionBase), 355302637U) },
		{ Z_Construct_UClass_UMovieSceneNiagaraEmitterTrack, UMovieSceneNiagaraEmitterTrack::StaticClass, TEXT("UMovieSceneNiagaraEmitterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraEmitterTrack), 3661424338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_3916653478(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_MovieSceneNiagaraEmitterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
