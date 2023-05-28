// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneSubSection.h"
#include "Evaluation/MovieSceneSectionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSubSection::execSetSequence)
	{
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSubSection::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection()
	{
		UClass* Class = UMovieSceneSubSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSequence", &UMovieSceneSubSection::execGetSequence },
			{ "SetSequence", &UMovieSceneSubSection::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics
	{
		struct MovieSceneSubSection_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSubSection_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get the sequence that is assigned to this section.\n\x09 *\n\x09 * @return The sequence.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Get the sequence that is assigned to this section.\n\n@return The sequence.\n@see SetSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::MovieSceneSubSection_eventGetSequence_Parms), Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSubSection_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics
	{
		struct MovieSceneSubSection_eventSetSequence_Parms
		{
			UMovieSceneSequence* Sequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSubSection_eventSetSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::NewProp_Sequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Sets the sequence played by this section.\n\x09 *\n\x09 * @param Sequence The sequence to play.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Sets the sequence played by this section.\n\n@param Sequence The sequence to play.\n@see GetSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSubSection, nullptr, "SetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::MovieSceneSubSection_eventSetSequence_Parms), Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSubSection_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSubSection_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSubSection);
	UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMask_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetworkMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSubSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSubSection_GetSequence, "GetSequence" }, // 3374871636
		{ &Z_Construct_UFunction_UMovieSceneSubSection_SetSequence, "SetSequence" }, // 3542901445
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a section in sub-sequence tracks.\n */" },
		{ "IncludePath", "Sections/MovieSceneSubSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a section in sub-sequence tracks." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, Parameters), Z_Construct_UScriptStruct_FMovieSceneSectionParameters, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData)) }; // 1328902719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime = { "PrerollTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MovieScene.EMovieSceneServerClientMask" },
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask = { "NetworkMask", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, NetworkMask), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Movie scene being played by this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Movie scene being played by this section" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence = { "SubSequence", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, SubSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_NetworkMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSubSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSubSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSubSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams = {
		&UMovieSceneSubSection::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSubSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSubSection.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSubSection>()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubSection);
	UMovieSceneSubSection::~UMovieSceneSubSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSubSection, UMovieSceneSubSection::StaticClass, TEXT("UMovieSceneSubSection"), &Z_Registration_Info_UClass_UMovieSceneSubSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSubSection), 1333333453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_986293163(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
