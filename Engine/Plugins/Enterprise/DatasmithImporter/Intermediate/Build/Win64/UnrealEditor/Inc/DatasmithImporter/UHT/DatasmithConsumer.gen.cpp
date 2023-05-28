// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithConsumer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithConsumer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithConsumer();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithConsumer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	DEFINE_FUNCTION(UDatasmithConsumer::execGetDatasmithScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithScene**)Z_Param__Result=P_THIS->GetDatasmithScene();
		P_NATIVE_END;
	}
	void UDatasmithConsumer::StaticRegisterNativesUDatasmithConsumer()
	{
		UClass* Class = UDatasmithConsumer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDatasmithScene", &UDatasmithConsumer::execGetDatasmithScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics
	{
		struct DatasmithConsumer_eventGetDatasmithScene_Parms
		{
			UDatasmithScene* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithConsumer_eventGetDatasmithScene_Parms, ReturnValue), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithConsumerInternal" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithConsumer, nullptr, "GetDatasmithScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::DatasmithConsumer_eventGetDatasmithScene_Parms), Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithConsumer);
	UClass* Z_Construct_UClass_UDatasmithConsumer_NoRegister()
	{
		return UDatasmithConsumer::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithConsumer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithScene_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DatasmithScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithSceneObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DatasmithSceneObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputLevelObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputLevelObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputLevelSoftObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputLevelSoftObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithSceneWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DatasmithSceneWeakPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithConsumer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepContentConsumer,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithConsumer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithConsumer_GetDatasmithScene, "GetDatasmithScene" }, // 2082084827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "DatasmithConsumerInternal" },
		{ "IncludePath", "DatasmithConsumer.h" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithScene_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Removing use of TSoftObjectPtr */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use GetDatasmithScene method to obtain the associated UDatasmithScene." },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
		{ "ToolTip", "DEPRECATED: Removing use of TSoftObjectPtr" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithScene = { "DatasmithScene", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, DatasmithScene_DEPRECATED), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "DatasmithConsumerInternal" },
		{ "Comment", "/** Stores the level used on the last call to UDatasmithConsumer::Run */" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
		{ "ToolTip", "Stores the level used on the last call to UDatasmithConsumer::Run" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, UniqueID), METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneObjectPath_MetaData[] = {
		{ "Category", "DatasmithConsumerInternal" },
		{ "Comment", "/** Path to UDatasmithScene potentially linked to */" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
		{ "ToolTip", "Path to UDatasmithScene potentially linked to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneObjectPath = { "DatasmithSceneObjectPath", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, DatasmithSceneObjectPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelObjectPath_MetaData[] = {
		{ "Category", "DatasmithConsumerInternal" },
		{ "Comment", "/** Path to ULevel potentially linked to */" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
		{ "ToolTip", "Path to ULevel potentially linked to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelObjectPath = { "OutputLevelObjectPath", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, OutputLevelObjectPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelSoftObject_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "" },
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelSoftObject = { "OutputLevelSoftObject", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, OutputLevelSoftObject_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelSoftObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelSoftObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneWeakPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithConsumer.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneWeakPtr = { "DatasmithSceneWeakPtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithConsumer, DatasmithSceneWeakPtr), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneWeakPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithConsumer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_OutputLevelSoftObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithConsumer_Statics::NewProp_DatasmithSceneWeakPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithConsumer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithConsumer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithConsumer_Statics::ClassParams = {
		&UDatasmithConsumer::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDatasmithConsumer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithConsumer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithConsumer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithConsumer()
	{
		if (!Z_Registration_Info_UClass_UDatasmithConsumer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithConsumer.OuterSingleton, Z_Construct_UClass_UDatasmithConsumer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithConsumer.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithConsumer>()
	{
		return UDatasmithConsumer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithConsumer);
	UDatasmithConsumer::~UDatasmithConsumer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithConsumer, UDatasmithConsumer::StaticClass, TEXT("UDatasmithConsumer"), &Z_Registration_Info_UClass_UDatasmithConsumer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithConsumer), 797668050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_2094092769(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
