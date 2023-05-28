// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/SingleAnimationPlayData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleAnimationPlayData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleAnimationPlayData;
class UScriptStruct* FSingleAnimationPlayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleAnimationPlayData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SingleAnimationPlayData"));
	}
	return Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSingleAnimationPlayData>()
{
	return FSingleAnimationPlayData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSavedLooping_MetaData[];
#endif
		static void NewProp_bSavedLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSavedPlaying_MetaData[];
#endif
		static void NewProp_bSavedPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// @todo in the future, we should make this one UObject\n// and have detail customization to display different things\n// The default sequence to play on this skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "@todo in the future, we should make this one UObject\nand have detail customization to display different things\nThe default sequence to play on this skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, AnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for looping for SequenceToPlay. This is not current state of looping. */" },
		{ "DisplayName", "Looping" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for looping for SequenceToPlay. This is not current state of looping." },
	};
#endif
	void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit(void* Obj)
	{
		((FSingleAnimationPlayData*)Obj)->bSavedLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping = { "bSavedLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for playing for SequenceToPlay. This is not current state of playing. */" },
		{ "DisplayName", "Playing" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for playing for SequenceToPlay. This is not current state of playing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit(void* Obj)
	{
		((FSingleAnimationPlayData*)Obj)->bSavedPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying = { "bSavedPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for position of SequenceToPlay to play. */" },
		{ "DisplayName", "Initial Position" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for position of SequenceToPlay to play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition = { "SavedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for play rate of SequenceToPlay to play. */" },
		{ "DisplayName", "PlayRate" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for play rate of SequenceToPlay to play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate = { "SavedPlayRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SingleAnimationPlayData",
		sizeof(FSingleAnimationPlayData),
		alignof(FSingleAnimationPlayData),
		Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData()
	{
		if (!Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton, Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics::ScriptStructInfo[] = {
		{ FSingleAnimationPlayData::StaticStruct, Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewStructOps, TEXT("SingleAnimationPlayData"), &Z_Registration_Info_UScriptStruct_SingleAnimationPlayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleAnimationPlayData), 4210081968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_22019935(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
