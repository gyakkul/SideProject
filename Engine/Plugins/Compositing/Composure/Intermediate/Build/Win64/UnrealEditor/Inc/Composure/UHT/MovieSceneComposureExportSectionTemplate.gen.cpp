// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieScene/MovieSceneComposureExportSectionTemplate.h"
#include "../Public/MovieScene/MovieSceneComposureExportTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComposureExportSectionTemplate() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportInitializer();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportInitializer_NoRegister();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposureExportPass();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneComposureExportInitializer::execExportSceneCaptureBuffers)
	{
		P_GET_OBJECT(ACompositingElement,Z_Param_CompShotElement);
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_SceneCapture);
		P_GET_TARRAY_REF(FString,Z_Param_Out_BuffersToExport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportSceneCaptureBuffers(Z_Param_CompShotElement,Z_Param_SceneCapture,Z_Param_Out_BuffersToExport);
		P_NATIVE_END;
	}
	void UMovieSceneComposureExportInitializer::StaticRegisterNativesUMovieSceneComposureExportInitializer()
	{
		UClass* Class = UMovieSceneComposureExportInitializer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportSceneCaptureBuffers", &UMovieSceneComposureExportInitializer::execExportSceneCaptureBuffers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics
	{
		struct MovieSceneComposureExportInitializer_eventExportSceneCaptureBuffers_Parms
		{
			ACompositingElement* CompShotElement;
			USceneCaptureComponent2D* SceneCapture;
			TArray<FString> BuffersToExport;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompShotElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuffersToExport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuffersToExport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffersToExport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_CompShotElement = { "CompShotElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneComposureExportInitializer_eventExportSceneCaptureBuffers_Parms, CompShotElement), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneComposureExportInitializer_eventExportSceneCaptureBuffers_Parms, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_SceneCapture_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport_Inner = { "BuffersToExport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport = { "BuffersToExport", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneComposureExportInitializer_eventExportSceneCaptureBuffers_Parms, BuffersToExport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_CompShotElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_SceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::NewProp_BuffersToExport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Export" },
		{ "Comment", "/**\n\x09 * Initialize the export to capture the specified named buffer visualization targets from a scene capture\n\x09 */" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposureExportSectionTemplate.h" },
		{ "ToolTip", "Initialize the export to capture the specified named buffer visualization targets from a scene capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComposureExportInitializer, nullptr, "ExportSceneCaptureBuffers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::MovieSceneComposureExportInitializer_eventExportSceneCaptureBuffers_Parms), Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposureExportInitializer);
	UClass* Z_Construct_UClass_UMovieSceneComposureExportInitializer_NoRegister()
	{
		return UMovieSceneComposureExportInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers, "ExportSceneCaptureBuffers" }, // 4255021696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object passed to comp shot elements to initialize them for export.\n * Currenly only allows scene captures to initialize a new extension that can capture GBuffers and other buffer visualization targets\n */" },
		{ "IncludePath", "MovieScene/MovieSceneComposureExportSectionTemplate.h" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposureExportSectionTemplate.h" },
		{ "ToolTip", "Object passed to comp shot elements to initialize them for export.\nCurrenly only allows scene captures to initialize a new extension that can capture GBuffers and other buffer visualization targets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComposureExportInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::ClassParams = {
		&UMovieSceneComposureExportInitializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposureExportInitializer()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposureExportInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposureExportInitializer.OuterSingleton, Z_Construct_UClass_UMovieSceneComposureExportInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposureExportInitializer.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposureExportInitializer>()
	{
		return UMovieSceneComposureExportInitializer::StaticClass();
	}
	UMovieSceneComposureExportInitializer::UMovieSceneComposureExportInitializer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposureExportInitializer);
	UMovieSceneComposureExportInitializer::~UMovieSceneComposureExportInitializer() {}

static_assert(std::is_polymorphic<FMovieSceneComposureExportSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneComposureExportSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate;
class UScriptStruct* FMovieSceneComposureExportSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("MovieSceneComposureExportSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FMovieSceneComposureExportSectionTemplate>()
{
	return FMovieSceneComposureExportSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposureExportSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComposureExportSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewProp_Pass_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneComposureExportSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewProp_Pass = { "Pass", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneComposureExportSectionTemplate, Pass), Z_Construct_UScriptStruct_FMovieSceneComposureExportPass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewProp_Pass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewProp_Pass_MetaData)) }; // 4251892935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewProp_Pass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneComposureExportSectionTemplate",
		sizeof(FMovieSceneComposureExportSectionTemplate),
		alignof(FMovieSceneComposureExportSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneComposureExportSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneComposureExportSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneComposureExportSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneComposureExportSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneComposureExportSectionTemplate), 705408391U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComposureExportInitializer, UMovieSceneComposureExportInitializer::StaticClass, TEXT("UMovieSceneComposureExportInitializer"), &Z_Registration_Info_UClass_UMovieSceneComposureExportInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposureExportInitializer), 602634266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_1788354344(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_MovieScene_MovieSceneComposureExportSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
