// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraEmitterSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey;
class UScriptStruct* FNiagaraEmitterSectionKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraEmitterSectionKey"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraEmitterSectionKey>()
{
	return FNiagaraEmitterSectionKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines data for keys in this emitter section. */" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
		{ "ToolTip", "Defines data for keys in this emitter section." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterSectionKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_ModuleId_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_ModuleId = { "ModuleId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterSectionKey, ModuleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_ModuleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_ModuleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEmitterSectionKey, Value), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_Value_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_ModuleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterSectionKey",
		sizeof(FNiagaraEmitterSectionKey),
		alignof(FNiagaraEmitterSectionKey),
		Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneNiagaraEmitterChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneNiagaraEmitterChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel;
class UScriptStruct* FMovieSceneNiagaraEmitterChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("MovieSceneNiagaraEmitterChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FMovieSceneNiagaraEmitterChannel>()
{
	return FMovieSceneNiagaraEmitterChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraEmitterChannel>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneNiagaraEmitterChannel",
		sizeof(FMovieSceneNiagaraEmitterChannel),
		alignof(FMovieSceneNiagaraEmitterChannel),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel.InnerSingleton;
	}
	void UMovieSceneNiagaraEmitterSection::StaticRegisterNativesUMovieSceneNiagaraEmitterSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraEmitterSection);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_NoRegister()
	{
		return UMovieSceneNiagaraEmitterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartTimeIncludedInFirstLoopOnly_MetaData[];
#endif
		static void NewProp_bStartTimeIncludedInFirstLoopOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartTimeIncludedInFirstLoopOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraEmitterSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Niagara editor movie scene section; represents one emitter in the timeline\n */" },
		{ "IncludePath", "Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
		{ "ToolTip", "Niagara editor movie scene section; represents one emitter in the timeline" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_NumLoops_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraEmitterSection, NumLoops), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_NumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_NumLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/Sections/MovieSceneNiagaraEmitterSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly_SetBit(void* Obj)
	{
		((UMovieSceneNiagaraEmitterSection*)Obj)->bStartTimeIncludedInFirstLoopOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly = { "bStartTimeIncludedInFirstLoopOnly", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneNiagaraEmitterSection), &Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_NumLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::NewProp_bStartTimeIncludedInFirstLoopOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraEmitterSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::ClassParams = {
		&UMovieSceneNiagaraEmitterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraEmitterSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraEmitterSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSection.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UMovieSceneNiagaraEmitterSection>()
	{
		return UMovieSceneNiagaraEmitterSection::StaticClass();
	}
	UMovieSceneNiagaraEmitterSection::UMovieSceneNiagaraEmitterSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraEmitterSection);
	UMovieSceneNiagaraEmitterSection::~UMovieSceneNiagaraEmitterSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEmitterSectionKey::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterSectionKey_Statics::NewStructOps, TEXT("NiagaraEmitterSectionKey"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterSectionKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterSectionKey), 128338065U) },
		{ FMovieSceneNiagaraEmitterChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraEmitterChannel_Statics::NewStructOps, TEXT("MovieSceneNiagaraEmitterChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraEmitterChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraEmitterChannel), 1391173637U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraEmitterSection, UMovieSceneNiagaraEmitterSection::StaticClass, TEXT("UMovieSceneNiagaraEmitterSection"), &Z_Registration_Info_UClass_UMovieSceneNiagaraEmitterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraEmitterSection), 3683527152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_1785333836(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_Sections_MovieSceneNiagaraEmitterSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
