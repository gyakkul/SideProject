// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Compilation/MovieSceneCompiledDataManager.h"
#include "Evaluation/MovieSceneEvaluationField.h"
#include "Evaluation/MovieSceneEvaluationTemplate.h"
#include "Evaluation/MovieSceneSequenceHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCompiledDataManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntityComponentField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct;
class UScriptStruct* FMovieSceneSequenceCompilerMaskStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceCompilerMaskStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceCompilerMaskStruct>()
{
	return FMovieSceneSequenceCompilerMaskStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHierarchy_MetaData[];
#endif
		static void NewProp_bHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplate_MetaData[];
#endif
		static void NewProp_bEvaluationTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluationTemplateField_MetaData[];
#endif
		static void NewProp_bEvaluationTemplateField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluationTemplateField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEntityComponentField_MetaData[];
#endif
		static void NewProp_bEntityComponentField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntityComponentField;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Flag struct necessary while flag enums are not supported on UPROPERTY */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Flag struct necessary while flag enums are not supported on UPROPERTY" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceCompilerMaskStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy = { "bHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate = { "bEvaluationTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEvaluationTemplateField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField = { "bEvaluationTemplateField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit(void* Obj)
	{
		((FMovieSceneSequenceCompilerMaskStruct*)Obj)->bEntityComponentField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField = { "bEntityComponentField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneSequenceCompilerMaskStruct), &Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEvaluationTemplateField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewProp_bEntityComponentField,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceCompilerMaskStruct",
		sizeof(FMovieSceneSequenceCompilerMaskStruct),
		alignof(FMovieSceneSequenceCompilerMaskStruct),
		Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct;
class UScriptStruct* FMovieSceneCompiledSequenceFlagStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneCompiledSequenceFlagStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneCompiledSequenceFlagStruct>()
{
	return FMovieSceneCompiledSequenceFlagStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresLowerFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresLowerFence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresUpperFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresUpperFence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Flags generated at compile time for a given sequence */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Flags generated at compile time for a given sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCompiledSequenceFlagStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the lower bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "True if this sequence should include a fence on the lower bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj)
	{
		((FMovieSceneCompiledSequenceFlagStruct*)Obj)->bParentSequenceRequiresLowerFence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence = { "bParentSequenceRequiresLowerFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneCompiledSequenceFlagStruct), &Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the upper bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "True if this sequence should include a fence on the upper bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj)
	{
		((FMovieSceneCompiledSequenceFlagStruct*)Obj)->bParentSequenceRequiresUpperFence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence = { "bParentSequenceRequiresUpperFence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneCompiledSequenceFlagStruct), &Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresLowerFence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewProp_bParentSequenceRequiresUpperFence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneCompiledSequenceFlagStruct",
		sizeof(FMovieSceneCompiledSequenceFlagStruct),
		alignof(FMovieSceneCompiledSequenceFlagStruct),
		Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct.InnerSingleton;
	}
	void UMovieSceneCompiledData::StaticRegisterNativesUMovieSceneCompiledData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCompiledData);
	UClass* Z_Construct_UClass_UMovieSceneCompiledData_NoRegister()
	{
		return UMovieSceneCompiledData::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCompiledData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponentField_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponentField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateField_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplateField;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeterminismFences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeterminismFences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeterminismFences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledSignature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilerVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompilerVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllocatedMask;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulatedFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulatedFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCompiledData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Used for serialization only */" },
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "Used for serialization only" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate = { "EvaluationTemplate", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, EvaluationTemplate), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate_MetaData)) }; // 4076333851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Comment", "/** 352 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "352 Bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy_MetaData)) }; // 1680595002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData[] = {
		{ "Comment", "/** 272 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "272 Bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField = { "EntityComponentField", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, EntityComponentField), Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField_MetaData)) }; // 315603756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData[] = {
		{ "Comment", "/** 64 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "64 Bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField = { "TrackTemplateField", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, TrackTemplateField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField_MetaData)) }; // 34083427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner = { "DeterminismFences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences = { "DeterminismFences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, DeterminismFences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData[] = {
		{ "Comment", "/** 16 bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature = { "CompiledSignature", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, CompiledSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData[] = {
		{ "Comment", "/** 16 Bytes */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "16 Bytes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion = { "CompilerVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, CompilerVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask = { "AccumulatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask_MetaData)) }; // 863916576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask = { "AllocatedMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, AllocatedMask), Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask_MetaData)) }; // 863916576
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData[] = {
		{ "Comment", "/** 1 Byte */" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
		{ "ToolTip", "1 Byte" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags = { "AccumulatedFlags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledData, AccumulatedFlags), Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_MetaData)) }; // 3684814241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EvaluationTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_Hierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_EntityComponentField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_TrackTemplateField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_DeterminismFences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompiledSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_CompilerVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AllocatedMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledData_Statics::NewProp_AccumulatedFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCompiledData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams = {
		&UMovieSceneCompiledData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCompiledData()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton, Z_Construct_UClass_UMovieSceneCompiledData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCompiledData.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledData>()
	{
		return UMovieSceneCompiledData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledData);
	UMovieSceneCompiledData::~UMovieSceneCompiledData() {}
	void UMovieSceneCompiledDataManager::StaticRegisterNativesUMovieSceneCompiledDataManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCompiledDataManager);
	UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister()
	{
		return UMovieSceneCompiledDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchies_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hierarchies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Hierarchies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplates_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackTemplates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TrackTemplates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackTemplateFields_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackTemplateFields_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackTemplateFields_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TrackTemplateFields;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityComponentFields_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntityComponentFields_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityComponentFields_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntityComponentFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Compilation/MovieSceneCompiledDataManager.h" },
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp = { "Hierarchies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(nullptr, 0) }; // 1680595002
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp = { "Hierarchies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies = { "Hierarchies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledDataManager, Hierarchies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_MetaData)) }; // 1680595002
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp = { "TrackTemplates", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(nullptr, 0) }; // 4076333851
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp = { "TrackTemplates_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates = { "TrackTemplates", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_MetaData)) }; // 4076333851
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(nullptr, 0) }; // 34083427
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp = { "TrackTemplateFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields = { "TrackTemplateFields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledDataManager, TrackTemplateFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_MetaData)) }; // 34083427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEntityComponentField, METADATA_PARAMS(nullptr, 0) }; // 315603756
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp = { "EntityComponentFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/Compilation/MovieSceneCompiledDataManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields = { "EntityComponentFields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCompiledDataManager, EntityComponentFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_MetaData)) }; // 315603756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_Hierarchies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_TrackTemplateFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::NewProp_EntityComponentFields,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCompiledDataManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams = {
		&UMovieSceneCompiledDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton, Z_Construct_UClass_UMovieSceneCompiledDataManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCompiledDataManager>()
	{
		return UMovieSceneCompiledDataManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCompiledDataManager);
	UMovieSceneCompiledDataManager::~UMovieSceneCompiledDataManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceCompilerMaskStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceCompilerMaskStruct_Statics::NewStructOps, TEXT("MovieSceneSequenceCompilerMaskStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceCompilerMaskStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceCompilerMaskStruct), 863916576U) },
		{ FMovieSceneCompiledSequenceFlagStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCompiledSequenceFlagStruct_Statics::NewStructOps, TEXT("MovieSceneCompiledSequenceFlagStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneCompiledSequenceFlagStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCompiledSequenceFlagStruct), 1012214185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCompiledData, UMovieSceneCompiledData::StaticClass, TEXT("UMovieSceneCompiledData"), &Z_Registration_Info_UClass_UMovieSceneCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCompiledData), 1693679546U) },
		{ Z_Construct_UClass_UMovieSceneCompiledDataManager, UMovieSceneCompiledDataManager::StaticClass, TEXT("UMovieSceneCompiledDataManager"), &Z_Registration_Info_UClass_UMovieSceneCompiledDataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCompiledDataManager), 47139195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_834418091(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_MovieSceneCompiledDataManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
