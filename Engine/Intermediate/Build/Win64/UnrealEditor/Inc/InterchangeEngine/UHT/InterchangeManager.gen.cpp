// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeManager();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeManager_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineStackOverride();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister();
	INTERCHANGEENGINE_API UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature();
	INTERCHANGEENGINE_API UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportAssetParameters();
	UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics
	{
		struct _Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Some utilities delegates for the automation of interchange */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Some utilities delegates for the automation of interchange" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InterchangeEngine, nullptr, "OnObjectImportDoneDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnObjectImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnObjectImportDoneDynamic, UObject* Object)
{
	struct _Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms
	{
		UObject* Object;
	};
	_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms Parms;
	Parms.Object=Object;
	OnObjectImportDoneDynamic.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics
	{
		struct _Script_InterchangeEngine_eventOnImportDoneDynamic_Parms
		{
			TArray<UObject*> Objects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InterchangeEngine, nullptr, "OnImportDoneDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnImportDoneDynamic, TArray<UObject*> const& Objects)
{
	struct _Script_InterchangeEngine_eventOnImportDoneDynamic_Parms
	{
		TArray<UObject*> Objects;
	};
	_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms Parms;
	Parms.Objects=Objects;
	OnImportDoneDynamic.ProcessDelegate<UObject>(&Parms);
}
	void UInterchangePipelineStackOverride::StaticRegisterNativesUInterchangePipelineStackOverride()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineStackOverride);
	UClass* Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister()
	{
		return UInterchangePipelineStackOverride::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineStackOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverridePipelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePipelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridePipelines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is use to pass override pipelines in the ImportAssetTask Options member\n */" },
		{ "IncludePath", "InterchangeManager.h" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "This class is use to pass override pipelines in the ImportAssetTask Options member" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_Inner = { "OverridePipelines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines = { "OverridePipelines", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePipelineStackOverride, OverridePipelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineStackOverride>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::ClassParams = {
		&UInterchangePipelineStackOverride::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineStackOverride()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton, Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePipelineStackOverride>()
	{
		return UInterchangePipelineStackOverride::StaticClass();
	}
	UInterchangePipelineStackOverride::UInterchangePipelineStackOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineStackOverride);
	UInterchangePipelineStackOverride::~UInterchangePipelineStackOverride() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportAssetParameters;
class UScriptStruct* FImportAssetParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportAssetParameters, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("ImportAssetParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FImportAssetParameters>()
{
	return FImportAssetParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportAssetParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReimportAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportSourceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReimportSourceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutomated_MetaData[];
#endif
		static void NewProp_bIsAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverridePipelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePipelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridePipelines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAssetDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetsImportDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAssetsImportDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneObjectDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSceneObjectDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneImportDone_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSceneImportDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportAssetParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// If the import is a reimport for a specific asset set the asset to reimport here\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "If the import is a reimport for a specific asset set the asset to reimport here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset = { "ReimportAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, ReimportAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// If we are doing a reimport, set the source index here. Some asset have more then one source file when they import partial part of there content.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "If we are doing a reimport, set the source index here. Some asset have more then one source file when they import partial part of there content." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex = { "ReimportSourceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, ReimportSourceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// Tell interchange that import is automated and it shouldn't present a model window\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Tell interchange that import is automated and it shouldn't present a model window" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
	{
		((FImportAssetParameters*)Obj)->bIsAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportAssetParameters), &Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_Inner = { "OverridePipelines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// Adding some override will tell interchange to use the specific custom set pipelines instead of letting the user or the system chose\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Adding some override will tell interchange to use the specific custom set pipelines instead of letting the user or the system chose" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines = { "OverridePipelines", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, OverridePipelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "/* Delegates used track the imported objects */// This is called each time an asset is imported or reimported from the import call\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Delegates used track the imported objects // This is called each time an asset is imported or reimported from the import call" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone = { "OnAssetDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, OnAssetDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone_MetaData)) }; // 1136777893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called when all the assets where imported from the source data\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called when all the assets where imported from the source data" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone = { "OnAssetsImportDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, OnAssetsImportDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone_MetaData)) }; // 863312562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called each time an object in the scene is imported or reimported from the import call\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called each time an object in the scene is imported or reimported from the import call" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone = { "OnSceneObjectDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, OnSceneObjectDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone_MetaData)) }; // 1136777893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called when all the scene object where imported from the source data\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called when all the scene object where imported from the source data" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone = { "OnSceneImportDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportAssetParameters, OnSceneImportDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone_MetaData)) }; // 863312562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		&NewStructOps,
		"ImportAssetParameters",
		sizeof(FImportAssetParameters),
		alignof(FImportAssetParameters),
		Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportAssetParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton, Z_Construct_UScriptStruct_FImportAssetParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeManager::execGetRegisteredFactoryClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassToMake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UClass**)Z_Param__Result=P_THIS->GetRegisteredFactoryClass(Z_Param_ClassToMake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execCreateSourceData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangeSourceData**)Z_Param__Result=UInterchangeManager::CreateSourceData(Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execExportScene)
	{
		P_GET_OBJECT(UObject,Z_Param_World);
		P_GET_UBOOL(Z_Param_bIsAutomated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportScene(Z_Param_World,Z_Param_bIsAutomated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execExportAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_GET_UBOOL(Z_Param_bIsAutomated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportAsset(Z_Param_Asset,Z_Param_bIsAutomated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execImportScene)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
		P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
		P_GET_STRUCT_REF(FImportAssetParameters,Z_Param_Out_ImportAssetParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ImportScene(Z_Param_ContentPath,Z_Param_SourceData,Z_Param_Out_ImportAssetParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execImportAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
		P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
		P_GET_STRUCT_REF(FImportAssetParameters,Z_Param_Out_ImportAssetParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ImportAsset(Z_Param_ContentPath,Z_Param_SourceData,Z_Param_Out_ImportAssetParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeManager::execGetInterchangeManagerScripted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangeManager**)Z_Param__Result=UInterchangeManager::GetInterchangeManagerScripted();
		P_NATIVE_END;
	}
	void UInterchangeManager::StaticRegisterNativesUInterchangeManager()
	{
		UClass* Class = UInterchangeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSourceData", &UInterchangeManager::execCreateSourceData },
			{ "ExportAsset", &UInterchangeManager::execExportAsset },
			{ "ExportScene", &UInterchangeManager::execExportScene },
			{ "GetInterchangeManagerScripted", &UInterchangeManager::execGetInterchangeManagerScripted },
			{ "GetRegisteredFactoryClass", &UInterchangeManager::execGetRegisteredFactoryClass },
			{ "ImportAsset", &UInterchangeManager::execImportAsset },
			{ "ImportScene", &UInterchangeManager::execImportScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics
	{
		struct InterchangeManager_eventCreateSourceData_Parms
		{
			FString InFileName;
			UInterchangeSourceData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventCreateSourceData_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventCreateSourceData_Parms, ReturnValue), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/*\n\x09* Script helper to create a source data object pointing on a file on disk\n\x09* @Param InFilename: Specify a file on disk\n\x09* @return: A new UInterchangeSourceData.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "* Script helper to create a source data object pointing on a file on disk\n* @Param InFilename: Specify a file on disk\n* @return: A new UInterchangeSourceData." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "CreateSourceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::InterchangeManager_eventCreateSourceData_Parms), Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_CreateSourceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics
	{
		struct InterchangeManager_eventExportAsset_Parms
		{
			const UObject* Asset;
			bool bIsAutomated;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static void NewProp_bIsAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventExportAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset_MetaData)) };
	void Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
	{
		((InterchangeManager_eventExportAsset_Parms*)Obj)->bIsAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventExportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeManager_eventExportAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventExportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Export Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an export asset process, the caller must specify a source data.\n\x09 * \n\x09 * @Param SourceData - The source data output \n\x09 * @Param bIsAutomated - If true the exporter will not show any UI or dialog\n\x09 * @return true if the import succeed, false otherwise.\n\x09 */" },
		{ "CPP_Default_bIsAutomated", "false" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an export asset process, the caller must specify a source data.\n\n@Param SourceData - The source data output\n@Param bIsAutomated - If true the exporter will not show any UI or dialog\n@return true if the import succeed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ExportAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::InterchangeManager_eventExportAsset_Parms), Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_ExportAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics
	{
		struct InterchangeManager_eventExportScene_Parms
		{
			const UObject* World;
			bool bIsAutomated;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bIsAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventExportScene_Parms, World), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World_MetaData)) };
	void Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
	{
		((InterchangeManager_eventExportScene_Parms*)Obj)->bIsAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventExportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeManager_eventExportScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventExportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Export Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an export scene process, the caller must specify a source data\n\x09 * This import process can import many different asset and there transform (USceneComponent) and store the result in a blueprint and add the blueprint to the level.\n\x09 * @Param SourceData - The source data input we want to translate\n\x09 * @Param bIsAutomated - If true the import asset will not show any UI or dialog\n\x09 * @return true if the import succeed, false otherwise.\n\x09 */" },
		{ "CPP_Default_bIsAutomated", "false" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an export scene process, the caller must specify a source data\nThis import process can import many different asset and there transform (USceneComponent) and store the result in a blueprint and add the blueprint to the level.\n@Param SourceData - The source data input we want to translate\n@Param bIsAutomated - If true the import asset will not show any UI or dialog\n@return true if the import succeed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ExportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::InterchangeManager_eventExportScene_Parms), Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_ExportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics
	{
		struct InterchangeManager_eventGetInterchangeManagerScripted_Parms
		{
			UInterchangeManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventGetInterchangeManagerScripted_Parms, ReturnValue), Z_Construct_UClass_UInterchangeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Return the interchange manager singleton pointer.\n\x09 *\n\x09 * @note - We need to return a pointer to have a valid Blueprint callable function\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Return the interchange manager singleton pointer.\n\n@note - We need to return a pointer to have a valid Blueprint callable function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "GetInterchangeManagerScripted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::InterchangeManager_eventGetInterchangeManagerScripted_Parms), Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics
	{
		struct InterchangeManager_eventGetRegisteredFactoryClass_Parms
		{
			const UClass* ClassToMake;
			const UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToMake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToMake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake = { "ClassToMake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventGetRegisteredFactoryClass_Parms, ClassToMake), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventGetRegisteredFactoryClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09* Script helper to get a registered factory for a specified class\n\x09* @Param FactoryClass: The class we search a registerd factory\n\x09* @return: if found, we return the factory class that is registered. Return NULL if nothing found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Script helper to get a registered factory for a specified class\n@Param FactoryClass: The class we search a registerd factory\n@return: if found, we return the factory class that is registered. Return NULL if nothing found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "GetRegisteredFactoryClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::InterchangeManager_eventGetRegisteredFactoryClass_Parms), Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics
	{
		struct InterchangeManager_eventImportAsset_Parms
		{
			FString ContentPath;
			const UInterchangeSourceData* SourceData;
			FImportAssetParameters ImportAssetParameters;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportAssetParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportAssetParameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters = { "ImportAssetParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, ImportAssetParameters), Z_Construct_UScriptStruct_FImportAssetParameters, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters_MetaData)) }; // 218251431
	void Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeManager_eventImportAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventImportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an import asset process, the caller must specify a source data.\n\x09 * This import process can import many different asset, but all in the game content.\n\x09 *\n\x09 * @Param ContentPath - The content path where to import the assets\n\x09 * @Param SourceData - The source data input we want to translate\n\x09 * @param ImportAssetParameters - All import asset parameter we need to pass to the import asset function\n\x09 * @return true if the import succeed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an import asset process, the caller must specify a source data.\nThis import process can import many different asset, but all in the game content.\n\n@Param ContentPath - The content path where to import the assets\n@Param SourceData - The source data input we want to translate\n@param ImportAssetParameters - All import asset parameter we need to pass to the import asset function\n@return true if the import succeed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ImportAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::InterchangeManager_eventImportAsset_Parms), Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_ImportAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics
	{
		struct InterchangeManager_eventImportScene_Parms
		{
			FString ContentPath;
			const UInterchangeSourceData* SourceData;
			FImportAssetParameters ImportAssetParameters;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportAssetParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportAssetParameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters = { "ImportAssetParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, ImportAssetParameters), Z_Construct_UScriptStruct_FImportAssetParameters, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters_MetaData)) }; // 218251431
	void Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeManager_eventImportScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeManager_eventImportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an import scene process, the caller must specify a source data.\n\x09 * This import process can import many different asset and there transform (USceneComponent) and store the result in a blueprint and add the blueprint to the level.\n\x09 *\n\x09 * @Param ContentPath - The content path where to import the assets\n\x09 * @Param SourceData - The source data input we want to translate, this object will be duplicate to allow multithread safe operations\n\x09 * @param ImportAssetParameters - All import asset parameter we need to pass to the import asset function\n\x09 * @return true if the import succeed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an import scene process, the caller must specify a source data.\nThis import process can import many different asset and there transform (USceneComponent) and store the result in a blueprint and add the blueprint to the level.\n\n@Param ContentPath - The content path where to import the assets\n@Param SourceData - The source data input we want to translate, this object will be duplicate to allow multithread safe operations\n@param ImportAssetParameters - All import asset parameter we need to pass to the import asset function\n@return true if the import succeed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ImportScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::InterchangeManager_eventImportScene_Parms), Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeManager_ImportScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeManager);
	UClass* Z_Construct_UClass_UInterchangeManager_NoRegister()
	{
		return UInterchangeManager::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RegisteredTranslatorsClass_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTranslatorsClass_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredTranslatorsClass;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RegisteredFactoryClasses_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RegisteredFactoryClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredFactoryClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredFactoryClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredWriters_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RegisteredWriters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWriters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWriters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeManager_CreateSourceData, "CreateSourceData" }, // 631550383
		{ &Z_Construct_UFunction_UInterchangeManager_ExportAsset, "ExportAsset" }, // 862443388
		{ &Z_Construct_UFunction_UInterchangeManager_ExportScene, "ExportScene" }, // 1302450399
		{ &Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted, "GetInterchangeManagerScripted" }, // 3111011762
		{ &Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass, "GetRegisteredFactoryClass" }, // 2381922971
		{ &Z_Construct_UFunction_UInterchangeManager_ImportAsset, "ImportAsset" }, // 1016377696
		{ &Z_Construct_UFunction_UInterchangeManager_ImportScene, "ImportScene" }, // 103209872
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeManager.h" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_ElementProp = { "RegisteredTranslatorsClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_MetaData[] = {
		{ "Comment", "// Caching the registered translator classes to avoid double registration fast\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Caching the registered translator classes to avoid double registration fast" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass = { "RegisteredTranslatorsClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeManager, RegisteredTranslatorsClass), METADATA_PARAMS(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_ValueProp = { "RegisteredFactoryClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_Key_KeyProp = { "RegisteredFactoryClasses_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_MetaData[] = {
		{ "Comment", "//The manager will create only one factory per type\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "The manager will create only one factory per type" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses = { "RegisteredFactoryClasses", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeManager, RegisteredFactoryClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_ValueProp = { "RegisteredWriters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInterchangeWriterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_Key_KeyProp = { "RegisteredWriters_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_MetaData[] = {
		{ "Comment", "//The manager will create only one writer per type\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "The manager will create only one writer per type" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters = { "RegisteredWriters", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeManager, RegisteredWriters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeManager_Statics::ClassParams = {
		&UInterchangeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeManager()
	{
		if (!Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton, Z_Construct_UClass_UInterchangeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeManager>()
	{
		return UInterchangeManager::StaticClass();
	}
	UInterchangeManager::UInterchangeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeManager);
	UInterchangeManager::~UInterchangeManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ScriptStructInfo[] = {
		{ FImportAssetParameters::StaticStruct, Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewStructOps, TEXT("ImportAssetParameters"), &Z_Registration_Info_UScriptStruct_ImportAssetParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportAssetParameters), 218251431U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineStackOverride, UInterchangePipelineStackOverride::StaticClass, TEXT("UInterchangePipelineStackOverride"), &Z_Registration_Info_UClass_UInterchangePipelineStackOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineStackOverride), 845293755U) },
		{ Z_Construct_UClass_UInterchangeManager, UInterchangeManager::StaticClass, TEXT("UInterchangeManager"), &Z_Registration_Info_UClass_UInterchangeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeManager), 2401416231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_2079312228(TEXT("/Script/InterchangeEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
