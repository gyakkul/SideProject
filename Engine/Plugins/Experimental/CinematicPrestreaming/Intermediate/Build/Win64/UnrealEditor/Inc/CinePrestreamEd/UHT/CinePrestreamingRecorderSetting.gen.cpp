// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinePrestreamingRecorderSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinePrestreamingRecorderSetting() {}
// Cross Module References
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UCinePrestreamingData_NoRegister();
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingRecorderSetting();
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingRecorderSetting_NoRegister();
	CINEMATICPRESTREAMINGEDITOR_API UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature();
	CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreamingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData;
class UScriptStruct* FMoviePipelineCinePrestreamingGeneratedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData, (UObject*)Z_Construct_UPackage__Script_CinematicPrestreamingEditor(), TEXT("MoviePipelineCinePrestreamingGeneratedData"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.OuterSingleton;
}
template<> CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* StaticStruct<FMoviePipelineCinePrestreamingGeneratedData>()
{
	return FMoviePipelineCinePrestreamingGeneratedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineCinePrestreamingGeneratedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_StreamingData_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_StreamingData = { "StreamingData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineCinePrestreamingGeneratedData, StreamingData), Z_Construct_UClass_UCinePrestreamingData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_StreamingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_StreamingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineCinePrestreamingGeneratedData, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_PackagePath_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineCinePrestreamingGeneratedData, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineCinePrestreamingGeneratedData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_StreamingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewProp_AssetName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor,
		nullptr,
		&NewStructOps,
		"MoviePipelineCinePrestreamingGeneratedData",
		sizeof(FMoviePipelineCinePrestreamingGeneratedData),
		alignof(FMoviePipelineCinePrestreamingGeneratedData),
		Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics
	{
		struct _Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateData_Parms
		{
			TArray<FMoviePipelineCinePrestreamingGeneratedData> GeneratedData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::NewProp_GeneratedData_Inner = { "GeneratedData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData, METADATA_PARAMS(nullptr, 0) }; // 3278484498
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::NewProp_GeneratedData = { "GeneratedData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateData_Parms, GeneratedData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3278484498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::NewProp_GeneratedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::NewProp_GeneratedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor, nullptr, "OnCinePrestreamingGenerateData__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateData_Parms), Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCinePrestreamingGenerateData_DelegateWrapper(const FMulticastScriptDelegate& OnCinePrestreamingGenerateData, const TArray<FMoviePipelineCinePrestreamingGeneratedData>& GeneratedData)
{
	struct _Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateData_Parms
	{
		TArray<FMoviePipelineCinePrestreamingGeneratedData> GeneratedData;
	};
	_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateData_Parms Parms;
	Parms.GeneratedData=GeneratedData;
	OnCinePrestreamingGenerateData.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCinePrestreamingRecorderSetting::StaticRegisterNativesUCinePrestreamingRecorderSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCinePrestreamingRecorderSetting);
	UClass* Z_Construct_UClass_UCinePrestreamingRecorderSetting_NoRegister()
	{
		return UCinePrestreamingRecorderSetting::StaticClass();
	}
	struct Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextures_MetaData[];
#endif
		static void NewProp_bVirtualTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNanite_MetaData[];
#endif
		static void NewProp_bNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModifyTargetSequence_MetaData[];
#endif
		static void NewProp_bModifyTargetSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyTargetSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAdvanceRenderFeatures_MetaData[];
#endif
		static void NewProp_bDisableAdvanceRenderFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAdvanceRenderFeatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinePrestreamingRecorderSetting.h" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_PackageDirectory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* \n\x09* Specifies which directory the generated assets be placed in. Assumed to be relative to the root folder,\n\x09* ie it should start with /Game/ etc. Can contain MRQ format strings such as {shot_name} which will\n\x09* be resolved.\n\x09*/" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "* Specifies which directory the generated assets be placed in. Assumed to be relative to the root folder,\n* ie it should start with /Game/ etc. Can contain MRQ format strings such as {shot_name} which will\n* be resolved." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_PackageDirectory = { "PackageDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingRecorderSetting, PackageDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_PackageDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_PackageDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures_MetaData[] = {
		{ "Category", "Record" },
		{ "Comment", "/** Enable capture of virtual texture page requests. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "Enable capture of virtual texture page requests." },
	};
#endif
	void Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures_SetBit(void* Obj)
	{
		((UCinePrestreamingRecorderSetting*)Obj)->bVirtualTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures = { "bVirtualTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCinePrestreamingRecorderSetting), &Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite_MetaData[] = {
		{ "Category", "Record" },
		{ "Comment", "/** Enable capture of nanite requests. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "Enable capture of nanite requests." },
	};
#endif
	void Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite_SetBit(void* Obj)
	{
		((UCinePrestreamingRecorderSetting*)Obj)->bNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite = { "bNanite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCinePrestreamingRecorderSetting), &Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence_MetaData[] = {
		{ "Category", "Post Process" },
		{ "Comment", "/** Automatically add the generated tracks to the target sequence */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "Automatically add the generated tracks to the target sequence" },
	};
#endif
	void Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence_SetBit(void* Obj)
	{
		((UCinePrestreamingRecorderSetting*)Obj)->bModifyTargetSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence = { "bModifyTargetSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCinePrestreamingRecorderSetting), &Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "Comment", "/** By default we disable any render features that aren't needed to generate the prestreaming data. This makes renders significantly faster, but also means that the final image generated by the renderer is unusable. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "By default we disable any render features that aren't needed to generate the prestreaming data. This makes renders significantly faster, but also means that the final image generated by the renderer is unusable." },
	};
#endif
	void Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures_SetBit(void* Obj)
	{
		((UCinePrestreamingRecorderSetting*)Obj)->bDisableAdvanceRenderFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures = { "bDisableAdvanceRenderFeatures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCinePrestreamingRecorderSetting), &Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** First frame to output in each recorded asset. Frames before this are dropped. */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "First frame to output in each recorded asset. Frames before this are dropped." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingRecorderSetting, StartFrame), METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Last frame to capture in each recorded asset. Frames after this are dropped. (Set to 0 to ignore). */" },
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
		{ "ToolTip", "Last frame to capture in each recorded asset. Frames after this are dropped. (Set to 0 to ignore)." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingRecorderSetting, EndFrame), METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_OnGenerateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingRecorderSetting.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_OnGenerateData = { "OnGenerateData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingRecorderSetting, OnGenerateData), Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_OnGenerateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_OnGenerateData_MetaData)) }; // 3338779663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_PackageDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bModifyTargetSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_bDisableAdvanceRenderFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::NewProp_OnGenerateData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinePrestreamingRecorderSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::ClassParams = {
		&UCinePrestreamingRecorderSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinePrestreamingRecorderSetting()
	{
		if (!Z_Registration_Info_UClass_UCinePrestreamingRecorderSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinePrestreamingRecorderSetting.OuterSingleton, Z_Construct_UClass_UCinePrestreamingRecorderSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCinePrestreamingRecorderSetting.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMINGEDITOR_API UClass* StaticClass<UCinePrestreamingRecorderSetting>()
	{
		return UCinePrestreamingRecorderSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinePrestreamingRecorderSetting);
	UCinePrestreamingRecorderSetting::~UCinePrestreamingRecorderSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ScriptStructInfo[] = {
		{ FMoviePipelineCinePrestreamingGeneratedData::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData_Statics::NewStructOps, TEXT("MoviePipelineCinePrestreamingGeneratedData"), &Z_Registration_Info_UScriptStruct_MoviePipelineCinePrestreamingGeneratedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineCinePrestreamingGeneratedData), 3278484498U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCinePrestreamingRecorderSetting, UCinePrestreamingRecorderSetting::StaticClass, TEXT("UCinePrestreamingRecorderSetting"), &Z_Registration_Info_UClass_UCinePrestreamingRecorderSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinePrestreamingRecorderSetting), 1255573885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_3132766720(TEXT("/Script/CinematicPrestreamingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingRecorderSetting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
