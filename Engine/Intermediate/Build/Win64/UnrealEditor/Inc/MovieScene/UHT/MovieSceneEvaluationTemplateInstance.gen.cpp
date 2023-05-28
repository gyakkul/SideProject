// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplateInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance;
class UScriptStruct* FMovieSceneRootEvaluationTemplateInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneRootEvaluationTemplateInstance"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneRootEvaluationTemplateInstance>()
{
	return FMovieSceneRootEvaluationTemplateInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakRootSequence_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakRootSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDataManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompiledDataManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntitySystemLinker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntitySystemLinker;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectorInstances_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectorInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectorInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DirectorInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Root evaluation template instance used to play back any sequence\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
		{ "ToolTip", "Root evaluation template instance used to play back any sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneRootEvaluationTemplateInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence = { "WeakRootSequence", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, WeakRootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager = { "CompiledDataManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, CompiledDataManager), Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker = { "EntitySystemLinker", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_ValueProp = { "DirectorInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_Key_KeyProp = { "DirectorInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData[] = {
		{ "Comment", "/** Map of director instances by sequence ID. Kept alive by this map assuming this struct is reference collected */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
		{ "ToolTip", "Map of director instances by sequence ID. Kept alive by this map assuming this struct is reference collected" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances = { "DirectorInstances", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, DirectorInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData)) }; // 3213602762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneRootEvaluationTemplateInstance",
		sizeof(FMovieSceneRootEvaluationTemplateInstance),
		alignof(FMovieSceneRootEvaluationTemplateInstance),
		Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneRootEvaluationTemplateInstance::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps, TEXT("MovieSceneRootEvaluationTemplateInstance"), &Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneRootEvaluationTemplateInstance), 4282407389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_746200196(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
