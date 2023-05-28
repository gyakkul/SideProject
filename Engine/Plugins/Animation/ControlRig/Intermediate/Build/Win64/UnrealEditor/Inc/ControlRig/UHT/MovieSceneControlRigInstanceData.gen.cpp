// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigInstanceData.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Evaluation/MovieSceneEvaluationOperand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigInstanceData() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneControlRigInstanceData>() == std::is_polymorphic<FMovieSceneSequenceInstanceData>(), "USTRUCT FMovieSceneControlRigInstanceData cannot be polymorphic unless super FMovieSceneSequenceInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData;
class UScriptStruct* FMovieSceneControlRigInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigInstanceData>()
{
	return FMovieSceneControlRigInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdditive_MetaData[];
#endif
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBoneFilter_MetaData[];
#endif
		static void NewProp_bApplyBoneFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBoneFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Operand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_MetaData[] = {
		{ "Comment", "/** Blend this track in additively (using the reference pose as a base) */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Blend this track in additively (using the reference pose as a base)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((FMovieSceneControlRigInstanceData*)Obj)->bAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneControlRigInstanceData), &Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_MetaData[] = {
		{ "Comment", "/** Only apply bones that are in the filter */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Only apply bones that are in the filter" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_SetBit(void* Obj)
	{
		((FMovieSceneControlRigInstanceData*)Obj)->bApplyBoneFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter = { "bApplyBoneFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneControlRigInstanceData), &Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter_MetaData[] = {
		{ "Comment", "/** Per-bone filter to apply to our animation */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Per-bone filter to apply to our animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter = { "BoneFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, BoneFilter), Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter_MetaData)) }; // 2398008488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation controller section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "The weight curve for this animation controller section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand_MetaData[] = {
		{ "Comment", "/** The operand the control rig instance should operate on */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "The operand the control rig instance should operate on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, Operand), Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand_MetaData)) }; // 2495798449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData,
		&NewStructOps,
		"MovieSceneControlRigInstanceData",
		sizeof(FMovieSceneControlRigInstanceData),
		alignof(FMovieSceneControlRigInstanceData),
		Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneControlRigInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewStructOps, TEXT("MovieSceneControlRigInstanceData"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigInstanceData), 1858882437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_1053864842(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
