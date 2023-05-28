// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneMaterialTrackExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrackExtensions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execGetMaterialIndex)
	{
		P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneMaterialTrackExtensions::GetMaterialIndex(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneMaterialTrackExtensions::execSetMaterialIndex)
	{
		P_GET_OBJECT(UMovieSceneComponentMaterialTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneMaterialTrackExtensions::SetMaterialIndex(Z_Param_Track,Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	void UMovieSceneMaterialTrackExtensions::StaticRegisterNativesUMovieSceneMaterialTrackExtensions()
	{
		UClass* Class = UMovieSceneMaterialTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIndex", &UMovieSceneMaterialTrackExtensions::execGetMaterialIndex },
			{ "SetMaterialIndex", &UMovieSceneMaterialTrackExtensions::execSetMaterialIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics
	{
		struct MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms
		{
			UMovieSceneComponentMaterialTrack* Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get material index of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @return The material index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get material index of the component that is animated by the material track.\n@param Track The track to use\n@return The material index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics
	{
		struct MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms
		{
			UMovieSceneComponentMaterialTrack* Track;
			int32 MaterialIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms, MaterialIndex), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set material index of the component that is animated by the material track.\n\x09 * @param Track The track to use\n\x09 * @param MaterialIndex The desired material index to animate. Values of < 0 or >= NumMaterials will be silently ignored and evaluation will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set material index of the component that is animated by the material track.\n@param Track The track to use\n@param MaterialIndex The desired material index to animate. Values of < 0 or >= NumMaterials will be silently ignored and evaluation will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, nullptr, "SetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::MovieSceneMaterialTrackExtensions_eventSetMaterialIndex_Parms), Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialTrackExtensions);
	UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_NoRegister()
	{
		return UMovieSceneMaterialTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_GetMaterialIndex, "GetMaterialIndex" }, // 3128597418
		{ &Z_Construct_UFunction_UMovieSceneMaterialTrackExtensions_SetMaterialIndex, "SetMaterialIndex" }, // 2091450988
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneMaterialTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneMaterialTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneMaterialTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::ClassParams = {
		&UMovieSceneMaterialTrackExtensions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMaterialTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneMaterialTrackExtensions>()
	{
		return UMovieSceneMaterialTrackExtensions::StaticClass();
	}
	UMovieSceneMaterialTrackExtensions::UMovieSceneMaterialTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialTrackExtensions);
	UMovieSceneMaterialTrackExtensions::~UMovieSceneMaterialTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialTrackExtensions, UMovieSceneMaterialTrackExtensions::StaticClass, TEXT("UMovieSceneMaterialTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneMaterialTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialTrackExtensions), 4254411608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_621301281(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneMaterialTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
