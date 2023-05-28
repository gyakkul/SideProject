// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAssetImportData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportData();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptExtractDisplayLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ScriptExtractDisplayLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptExtractFilenames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ScriptExtractFilenames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAssetImportData::execScriptGetFirstFilename)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ScriptGetFirstFilename();
		P_NATIVE_END;
	}
	void UInterchangeAssetImportData::StaticRegisterNativesUInterchangeAssetImportData()
	{
		UClass* Class = UInterchangeAssetImportData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScriptExtractDisplayLabels", &UInterchangeAssetImportData::execScriptExtractDisplayLabels },
			{ "ScriptExtractFilenames", &UInterchangeAssetImportData::execScriptExtractFilenames },
			{ "ScriptGetFirstFilename", &UInterchangeAssetImportData::execScriptGetFirstFilename },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics
	{
		struct InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Extract all the filename labels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Extract all the filename labels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptExtractDisplayLabels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::InterchangeAssetImportData_eventScriptExtractDisplayLabels_Parms), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics
	{
		struct InterchangeAssetImportData_eventScriptExtractFilenames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptExtractFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Extract all the (resolved) filenames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Extract all the (resolved) filenames." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptExtractFilenames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::InterchangeAssetImportData_eventScriptExtractFilenames_Parms), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics
	{
		struct InterchangeAssetImportData_eventScriptGetFirstFilename_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAssetImportData_eventScriptGetFirstFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/**\n\x09 * Return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "Return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAssetImportData, nullptr, "ScriptGetFirstFilename", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::InterchangeAssetImportData_eventScriptGetFirstFilename_Parms), Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAssetImportData);
	UClass* Z_Construct_UClass_UInterchangeAssetImportData_NoRegister()
	{
		return UInterchangeAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pipelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeAssetImportData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractDisplayLabels, "ScriptExtractDisplayLabels" }, // 2036259104
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptExtractFilenames, "ScriptExtractFilenames" }, // 451209397
		{ &Z_Construct_UFunction_UInterchangeAssetImportData_ScriptGetFirstFilename, "ScriptGetFirstFilename" }, // 3272531051
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeAssetImportData.h" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer_MetaData[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/** The graph that was use to create this asset */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "The graph that was use to create this asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeAssetImportData, NodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/** The Node UID pass to the factory that exist in the graph that was use to create this asset */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "The Node UID pass to the factory that exist in the graph that was use to create this asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeAssetImportData, NodeUniqueID), METADATA_PARAMS(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_MetaData[] = {
		{ "Category", "Interchange | AssetImportData" },
		{ "Comment", "/** List of pipelines use to import an asset */" },
		{ "ModuleRelativePath", "Public/InterchangeAssetImportData.h" },
		{ "ToolTip", "List of pipelines use to import an asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeAssetImportData, Pipelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeAssetImportData_Statics::NewProp_Pipelines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAssetImportData_Statics::ClassParams = {
		&UInterchangeAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton, Z_Construct_UClass_UInterchangeAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAssetImportData.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeAssetImportData>()
	{
		return UInterchangeAssetImportData::StaticClass();
	}
	UInterchangeAssetImportData::UInterchangeAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAssetImportData);
	UInterchangeAssetImportData::~UInterchangeAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAssetImportData, UInterchangeAssetImportData::StaticClass, TEXT("UInterchangeAssetImportData"), &Z_Registration_Info_UClass_UInterchangeAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAssetImportData), 2431220193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_2196152886(TEXT("/Script/InterchangeEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
