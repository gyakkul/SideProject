// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinePrestreamingEditorSubsystem.h"
#include "CinePrestreamingRecorderSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinePrestreamingEditorSubsystem() {}
// Cross Module References
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingEditorSubsystem();
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingEditorSubsystem_NoRegister();
	CINEMATICPRESTREAMINGEDITOR_API UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature();
	CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs();
	CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreamingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs;
class UScriptStruct* FCinePrestreamingGenerateAssetArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs, (UObject*)Z_Construct_UPackage__Script_CinematicPrestreamingEditor(), TEXT("CinePrestreamingGenerateAssetArgs"));
	}
	return Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.OuterSingleton;
}
template<> CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* StaticStruct<FCinePrestreamingGenerateAssetArgs>()
{
	return FCinePrestreamingGenerateAssetArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectoryOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectoryOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCinePrestreamingGenerateAssetArgs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_OutputDirectoryOverride_MetaData[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_OutputDirectoryOverride = { "OutputDirectoryOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingGenerateAssetArgs, OutputDirectoryOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_OutputDirectoryOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_OutputDirectoryOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowedClasses", "/Script/LevelSequence.LevelSequence" },
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingGenerateAssetArgs, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Map_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingGenerateAssetArgs, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCinePrestreamingGenerateAssetArgs, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Resolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_OutputDirectoryOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewProp_Resolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor,
		nullptr,
		&NewStructOps,
		"CinePrestreamingGenerateAssetArgs",
		sizeof(FCinePrestreamingGenerateAssetArgs),
		alignof(FCinePrestreamingGenerateAssetArgs),
		Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.InnerSingleton, Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics
	{
		struct _Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateAsset_Parms
		{
			FCinePrestreamingGenerateAssetArgs OriginalGenerationArgs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalGenerationArgs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::NewProp_OriginalGenerationArgs = { "OriginalGenerationArgs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateAsset_Parms, OriginalGenerationArgs), Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs, METADATA_PARAMS(nullptr, 0) }; // 2998548074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::NewProp_OriginalGenerationArgs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor, nullptr, "OnCinePrestreamingGenerateAsset__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateAsset_Parms), Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCinePrestreamingGenerateAsset_DelegateWrapper(const FMulticastScriptDelegate& OnCinePrestreamingGenerateAsset, FCinePrestreamingGenerateAssetArgs OriginalGenerationArgs)
{
	struct _Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateAsset_Parms
	{
		FCinePrestreamingGenerateAssetArgs OriginalGenerationArgs;
	};
	_Script_CinematicPrestreamingEditor_eventOnCinePrestreamingGenerateAsset_Parms Parms;
	Parms.OriginalGenerationArgs=OriginalGenerationArgs;
	OnCinePrestreamingGenerateAsset.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCinePrestreamingEditorSubsystem::execOnBuildPrestreamingComplete)
	{
		P_GET_OBJECT(UMoviePipelineExecutorBase,Z_Param_InPipelineExecutor);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuildPrestreamingComplete(Z_Param_InPipelineExecutor,Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinePrestreamingEditorSubsystem::execCreatePackagesFromGeneratedData)
	{
		P_GET_TARRAY_REF(FMoviePipelineCinePrestreamingGeneratedData,Z_Param_Out_InOutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreatePackagesFromGeneratedData(Z_Param_Out_InOutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinePrestreamingEditorSubsystem::execGeneratePrestreamingAsset)
	{
		P_GET_STRUCT_REF(FCinePrestreamingGenerateAssetArgs,Z_Param_Out_InArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GeneratePrestreamingAsset(Z_Param_Out_InArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinePrestreamingEditorSubsystem::execIsRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRendering();
		P_NATIVE_END;
	}
	void UCinePrestreamingEditorSubsystem::StaticRegisterNativesUCinePrestreamingEditorSubsystem()
	{
		UClass* Class = UCinePrestreamingEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePackagesFromGeneratedData", &UCinePrestreamingEditorSubsystem::execCreatePackagesFromGeneratedData },
			{ "GeneratePrestreamingAsset", &UCinePrestreamingEditorSubsystem::execGeneratePrestreamingAsset },
			{ "IsRendering", &UCinePrestreamingEditorSubsystem::execIsRendering },
			{ "OnBuildPrestreamingComplete", &UCinePrestreamingEditorSubsystem::execOnBuildPrestreamingComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics
	{
		struct CinePrestreamingEditorSubsystem_eventCreatePackagesFromGeneratedData_Parms
		{
			TArray<FMoviePipelineCinePrestreamingGeneratedData> InOutData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::NewProp_InOutData_Inner = { "InOutData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineCinePrestreamingGeneratedData, METADATA_PARAMS(nullptr, 0) }; // 3278484498
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::NewProp_InOutData = { "InOutData", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CinePrestreamingEditorSubsystem_eventCreatePackagesFromGeneratedData_Parms, InOutData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3278484498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::NewProp_InOutData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::NewProp_InOutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinePrestreamingEditorSubsystem, nullptr, "CreatePackagesFromGeneratedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::CinePrestreamingEditorSubsystem_eventCreatePackagesFromGeneratedData_Parms), Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics
	{
		struct CinePrestreamingEditorSubsystem_eventGeneratePrestreamingAsset_Parms
		{
			FCinePrestreamingGenerateAssetArgs InArgs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CinePrestreamingEditorSubsystem_eventGeneratePrestreamingAsset_Parms, InArgs), Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs, METADATA_PARAMS(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::NewProp_InArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::NewProp_InArgs_MetaData)) }; // 2998548074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::NewProp_InArgs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinePrestreamingEditorSubsystem, nullptr, "GeneratePrestreamingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::CinePrestreamingEditorSubsystem_eventGeneratePrestreamingAsset_Parms), Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics
	{
		struct CinePrestreamingEditorSubsystem_eventIsRendering_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CinePrestreamingEditorSubsystem_eventIsRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CinePrestreamingEditorSubsystem_eventIsRendering_Parms), &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinePrestreamingEditorSubsystem, nullptr, "IsRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::CinePrestreamingEditorSubsystem_eventIsRendering_Parms), Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics
	{
		struct CinePrestreamingEditorSubsystem_eventOnBuildPrestreamingComplete_Parms
		{
			UMoviePipelineExecutorBase* InPipelineExecutor;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineExecutor;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_InPipelineExecutor = { "InPipelineExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CinePrestreamingEditorSubsystem_eventOnBuildPrestreamingComplete_Parms, InPipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((CinePrestreamingEditorSubsystem_eventOnBuildPrestreamingComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CinePrestreamingEditorSubsystem_eventOnBuildPrestreamingComplete_Parms), &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_InPipelineExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinePrestreamingEditorSubsystem, nullptr, "OnBuildPrestreamingComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::CinePrestreamingEditorSubsystem_eventOnBuildPrestreamingComplete_Parms), Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCinePrestreamingEditorSubsystem);
	UClass* Z_Construct_UClass_UCinePrestreamingEditorSubsystem_NoRegister()
	{
		return UCinePrestreamingEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetGenerated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetGenerated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveExecutor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_CreatePackagesFromGeneratedData, "CreatePackagesFromGeneratedData" }, // 2199143499
		{ &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_GeneratePrestreamingAsset, "GeneratePrestreamingAsset" }, // 1551729407
		{ &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_IsRendering, "IsRendering" }, // 2223577487
		{ &Z_Construct_UFunction_UCinePrestreamingEditorSubsystem_OnBuildPrestreamingComplete, "OnBuildPrestreamingComplete" }, // 975421711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinePrestreamingEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_OnAssetGenerated_MetaData[] = {
		{ "Category", "Cinematic Prestreaming|Editor" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_OnAssetGenerated = { "OnAssetGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingEditorSubsystem, OnAssetGenerated), Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_OnAssetGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_OnAssetGenerated_MetaData)) }; // 141645170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_ActiveExecutor_MetaData[] = {
		{ "Comment", "// UPROPERTY(Transient)\n// UMoviePipelineQueue* OriginalQueue;\n" },
		{ "ModuleRelativePath", "Public/CinePrestreamingEditorSubsystem.h" },
		{ "ToolTip", "UPROPERTY(Transient)\nUMoviePipelineQueue* OriginalQueue;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_ActiveExecutor = { "ActiveExecutor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCinePrestreamingEditorSubsystem, ActiveExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_ActiveExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_ActiveExecutor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_OnAssetGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::NewProp_ActiveExecutor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinePrestreamingEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::ClassParams = {
		&UCinePrestreamingEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinePrestreamingEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCinePrestreamingEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinePrestreamingEditorSubsystem.OuterSingleton, Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCinePrestreamingEditorSubsystem.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMINGEDITOR_API UClass* StaticClass<UCinePrestreamingEditorSubsystem>()
	{
		return UCinePrestreamingEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinePrestreamingEditorSubsystem);
	UCinePrestreamingEditorSubsystem::~UCinePrestreamingEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FCinePrestreamingGenerateAssetArgs::StaticStruct, Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics::NewStructOps, TEXT("CinePrestreamingGenerateAssetArgs"), &Z_Registration_Info_UScriptStruct_CinePrestreamingGenerateAssetArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCinePrestreamingGenerateAssetArgs), 2998548074U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCinePrestreamingEditorSubsystem, UCinePrestreamingEditorSubsystem::StaticClass, TEXT("UCinePrestreamingEditorSubsystem"), &Z_Registration_Info_UClass_UCinePrestreamingEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinePrestreamingEditorSubsystem), 1283172485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_94299434(TEXT("/Script/CinematicPrestreamingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
