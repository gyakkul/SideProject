// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneDataLayerSection.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerSection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDataLayers)
	{
		P_GET_TARRAY_REF(FActorDataLayer,Z_Param_Out_InDataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayers(Z_Param_Out_InDataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDataLayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActorDataLayer>*)Z_Param__Result=P_THIS->GetDataLayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDataLayerAssets)
	{
		P_GET_TARRAY_REF(UDataLayerAsset*,Z_Param_Out_InDataLayerAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerAssets(Z_Param_Out_InDataLayerAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDataLayerAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDataLayerAsset*>*)Z_Param__Result=P_THIS->GetDataLayerAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetFlushOnUnload)
	{
		P_GET_UBOOL(Z_Param_bFlushOnUnload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlushOnUnload(Z_Param_bFlushOnUnload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetFlushOnUnload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFlushOnUnload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetPrerollState)
	{
		P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InPrerollState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrerollState(EDataLayerRuntimeState(Z_Param_InPrerollState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetPrerollState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetPrerollState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDesiredState)
	{
		P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InDesiredState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredState(EDataLayerRuntimeState(Z_Param_InDesiredState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDesiredState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDesiredState();
		P_NATIVE_END;
	}
	void UMovieSceneDataLayerSection::StaticRegisterNativesUMovieSceneDataLayerSection()
	{
		UClass* Class = UMovieSceneDataLayerSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataLayerAssets", &UMovieSceneDataLayerSection::execGetDataLayerAssets },
			{ "GetDataLayers", &UMovieSceneDataLayerSection::execGetDataLayers },
			{ "GetDesiredState", &UMovieSceneDataLayerSection::execGetDesiredState },
			{ "GetFlushOnUnload", &UMovieSceneDataLayerSection::execGetFlushOnUnload },
			{ "GetPrerollState", &UMovieSceneDataLayerSection::execGetPrerollState },
			{ "SetDataLayerAssets", &UMovieSceneDataLayerSection::execSetDataLayerAssets },
			{ "SetDataLayers", &UMovieSceneDataLayerSection::execSetDataLayers },
			{ "SetDesiredState", &UMovieSceneDataLayerSection::execSetDesiredState },
			{ "SetFlushOnUnload", &UMovieSceneDataLayerSection::execSetFlushOnUnload },
			{ "SetPrerollState", &UMovieSceneDataLayerSection::execSetPrerollState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics
	{
		struct MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms
		{
			TArray<UDataLayerAsset*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDataLayerAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics
	{
		struct MovieSceneDataLayerSection_eventGetDataLayers_Parms
		{
			TArray<FActorDataLayer> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDataLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_MetaData)) }; // 1259195716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::MovieSceneDataLayerSection_eventGetDataLayers_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics
	{
		struct MovieSceneDataLayerSection_eventGetDesiredState_Parms
		{
			EDataLayerRuntimeState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDesiredState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 1187585863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDesiredState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::MovieSceneDataLayerSection_eventGetDesiredState_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics
	{
		struct MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms
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
	void Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetFlushOnUnload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics
	{
		struct MovieSceneDataLayerSection_eventGetPrerollState_Parms
		{
			EDataLayerRuntimeState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetPrerollState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 1187585863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetPrerollState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::MovieSceneDataLayerSection_eventGetPrerollState_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics
	{
		struct MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms
		{
			TArray<UDataLayerAsset*> InDataLayerAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataLayerAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_Inner = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms, InDataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDataLayerAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics
	{
		struct MovieSceneDataLayerSection_eventSetDataLayers_Parms
		{
			TArray<FActorDataLayer> InDataLayers;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_Inner = { "InDataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers = { "InDataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDataLayers_Parms, InDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_MetaData)) }; // 1259195716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::MovieSceneDataLayerSection_eventSetDataLayers_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics
	{
		struct MovieSceneDataLayerSection_eventSetDesiredState_Parms
		{
			EDataLayerRuntimeState InDesiredState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDesiredState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDesiredState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState = { "InDesiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDesiredState_Parms, InDesiredState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 1187585863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDesiredState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::MovieSceneDataLayerSection_eventSetDesiredState_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics
	{
		struct MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms
		{
			bool bFlushOnUnload;
		};
		static void NewProp_bFlushOnUnload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnUnload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload_SetBit(void* Obj)
	{
		((MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms*)Obj)->bFlushOnUnload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload = { "bFlushOnUnload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetFlushOnUnload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics
	{
		struct MovieSceneDataLayerSection_eventSetPrerollState_Parms
		{
			EDataLayerRuntimeState InPrerollState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPrerollState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPrerollState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState = { "InPrerollState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetPrerollState_Parms, InPrerollState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 1187585863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetPrerollState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::MovieSceneDataLayerSection_eventSetPrerollState_Parms), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDataLayerSection);
	UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister()
	{
		return UMovieSceneDataLayerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDataLayerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerAssets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrerollState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrerollState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrerollState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlushOnUnload_MetaData[];
#endif
		static void NewProp_bFlushOnUnload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnUnload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets, "GetDataLayerAssets" }, // 2392207919
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers, "GetDataLayers" }, // 1678168205
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState, "GetDesiredState" }, // 3787230030
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload, "GetFlushOnUnload" }, // 3469490132
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState, "GetPrerollState" }, // 4092236601
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets, "SetDataLayerAssets" }, // 1682320340
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers, "SetDataLayers" }, // 1101570446
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState, "SetDesiredState" }, // 1048982152
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload, "SetFlushOnUnload" }, // 1635904235
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState, "SetPrerollState" }, // 227848927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneDataLayerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DataLayer Assets Instead" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDataLayerSection, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_MetaData)) }; // 1259195716
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_Inner = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** A list of data layers that should be loaded or unloaded by this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "A list of data layers that should be loaded or unloaded by this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDataLayerSection, DataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** The desired state for the data layers on this section when the section is actively evaluating. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "The desired state for the data layers on this section when the section is actively evaluating." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState = { "DesiredState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDataLayerSection, DesiredState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_MetaData)) }; // 1187585863
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** The desired state for the data layers on this section when the section is pre or post-rolling. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "The desired state for the data layers on this section when the section is pre or post-rolling." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState = { "PrerollState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDataLayerSection, PrerollState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_MetaData)) }; // 1187585863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** Determine if we need to flush level streaming when the data layers unloads. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "Determine if we need to flush level streaming when the data layers unloads." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_SetBit(void* Obj)
	{
		((UMovieSceneDataLayerSection*)Obj)->bFlushOnUnload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload = { "bFlushOnUnload", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneDataLayerSection), &Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDataLayerSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDataLayerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::ClassParams = {
		&UMovieSceneDataLayerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDataLayerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDataLayerSection>()
	{
		return UMovieSceneDataLayerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDataLayerSection);
	UMovieSceneDataLayerSection::~UMovieSceneDataLayerSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDataLayerSection, UMovieSceneDataLayerSection::StaticClass, TEXT("UMovieSceneDataLayerSection"), &Z_Registration_Info_UClass_UMovieSceneDataLayerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDataLayerSection), 3717762448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_1879575955(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
