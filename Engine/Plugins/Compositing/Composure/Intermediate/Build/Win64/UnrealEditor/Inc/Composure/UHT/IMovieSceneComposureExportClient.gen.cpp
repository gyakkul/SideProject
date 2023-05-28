// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/IMovieSceneComposureExportClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneComposureExportClient() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportClient();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportClient_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposureExportInitializer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	struct MovieSceneComposureExportClient_eventInitializeForExport_Parms
	{
		UMovieSceneComposureExportInitializer* ExportInitializer;
	};
	void IMovieSceneComposureExportClient::InitializeForExport(UMovieSceneComposureExportInitializer* ExportInitializer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeForExport instead.");
	}
	void UMovieSceneComposureExportClient::StaticRegisterNativesUMovieSceneComposureExportClient()
	{
	}
	struct Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportInitializer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::NewProp_ExportInitializer = { "ExportInitializer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneComposureExportClient_eventInitializeForExport_Parms, ExportInitializer), Z_Construct_UClass_UMovieSceneComposureExportInitializer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::NewProp_ExportInitializer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Export" },
		{ "Comment", "/**\n\x09 * Initialize this object for export by setting up any of the necessary scene view extensions with the specified initializer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieScene/IMovieSceneComposureExportClient.h" },
		{ "ToolTip", "Initialize this object for export by setting up any of the necessary scene view extensions with the specified initializer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComposureExportClient, nullptr, "InitializeForExport", nullptr, nullptr, sizeof(MovieSceneComposureExportClient_eventInitializeForExport_Parms), Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposureExportClient);
	UClass* Z_Construct_UClass_UMovieSceneComposureExportClient_NoRegister()
	{
		return UMovieSceneComposureExportClient::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposureExportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneComposureExportClient_InitializeForExport, "InitializeForExport" }, // 3525728966
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Composure Export Client" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieScene/IMovieSceneComposureExportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneComposureExportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::ClassParams = {
		&UMovieSceneComposureExportClient::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposureExportClient()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposureExportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposureExportClient.OuterSingleton, Z_Construct_UClass_UMovieSceneComposureExportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposureExportClient.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposureExportClient>()
	{
		return UMovieSceneComposureExportClient::StaticClass();
	}
	UMovieSceneComposureExportClient::UMovieSceneComposureExportClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposureExportClient);
	UMovieSceneComposureExportClient::~UMovieSceneComposureExportClient() {}
	static FName NAME_UMovieSceneComposureExportClient_InitializeForExport = FName(TEXT("InitializeForExport"));
	void IMovieSceneComposureExportClient::Execute_InitializeForExport(UObject* O, UMovieSceneComposureExportInitializer* ExportInitializer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneComposureExportClient::StaticClass()));
		MovieSceneComposureExportClient_eventInitializeForExport_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneComposureExportClient_InitializeForExport);
		if (Func)
		{
			Parms.ExportInitializer=ExportInitializer;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComposureExportClient, UMovieSceneComposureExportClient::StaticClass, TEXT("UMovieSceneComposureExportClient"), &Z_Registration_Info_UClass_UMovieSceneComposureExportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposureExportClient), 3995463009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_4177097780(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
