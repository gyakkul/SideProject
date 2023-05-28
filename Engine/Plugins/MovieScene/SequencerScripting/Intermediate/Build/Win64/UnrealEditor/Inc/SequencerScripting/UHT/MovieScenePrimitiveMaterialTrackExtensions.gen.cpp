// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrackExtensions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialIndex)
	{
		P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialIndex)
	{
		P_GET_OBJECT(UMovieScenePrimitiveMaterialTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(Z_Param_Track,Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	void UMovieScenePrimitiveMaterialTrackExtensions::StaticRegisterNativesUMovieScenePrimitiveMaterialTrackExtensions()
	{
		UClass* Class = UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIndex", &UMovieScenePrimitiveMaterialTrackExtensions::execGetMaterialIndex },
			{ "SetMaterialIndex", &UMovieScenePrimitiveMaterialTrackExtensions::execSetMaterialIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics
	{
		struct MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms
		{
			UMovieScenePrimitiveMaterialTrack* Track;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get material index of the element that is animated by the primitive material track.\n\x09 * @param Track The track to use\n\x09 * @return The material index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get material index of the element that is animated by the primitive material track.\n@param Track The track to use\n@return The material index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics
	{
		struct MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms
		{
			UMovieScenePrimitiveMaterialTrack* Track;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms, Track), Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms, MaterialIndex), METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::NewProp_MaterialIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set material index of the element that is animated by the primitive material track.\n\x09 * @param Track The track to use\n\x09 * @param MaterialIndex The desired material index to animate. Values of < 0 or >= NumMaterials will be silently ignored and evaluation will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set material index of the element that is animated by the primitive material track.\n@param Track The track to use\n@param MaterialIndex The desired material index to animate. Values of < 0 or >= NumMaterials will be silently ignored and evaluation will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, nullptr, "SetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::MovieScenePrimitiveMaterialTrackExtensions_eventSetMaterialIndex_Parms), Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialTrackExtensions);
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_NoRegister()
	{
		return UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex, "GetMaterialIndex" }, // 50201099
		{ &Z_Construct_UFunction_UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex, "SetMaterialIndex" }, // 1632449202
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieScenePrimitiveMaterialTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePrimitiveMaterialTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieScenePrimitiveMaterialTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::ClassParams = {
		&UMovieScenePrimitiveMaterialTrackExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieScenePrimitiveMaterialTrackExtensions>()
	{
		return UMovieScenePrimitiveMaterialTrackExtensions::StaticClass();
	}
	UMovieScenePrimitiveMaterialTrackExtensions::UMovieScenePrimitiveMaterialTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialTrackExtensions);
	UMovieScenePrimitiveMaterialTrackExtensions::~UMovieScenePrimitiveMaterialTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialTrackExtensions, UMovieScenePrimitiveMaterialTrackExtensions::StaticClass, TEXT("UMovieScenePrimitiveMaterialTrackExtensions"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialTrackExtensions), 2064573994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_3838742894(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePrimitiveMaterialTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
