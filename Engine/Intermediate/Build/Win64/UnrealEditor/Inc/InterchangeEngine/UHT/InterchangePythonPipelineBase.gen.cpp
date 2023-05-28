// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePythonPipelineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePythonPipelineBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineBase();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyData();
	UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References
	void UInterchangePythonPipelineBase::StaticRegisterNativesUInterchangePythonPipelineBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePythonPipelineBase);
	UClass* Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister()
	{
		return UInterchangePythonPipelineBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePythonPipelineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This class represent a python pipeline. It is use by the TSoftClassPtr of the PythonPipeline asset.\n *\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePythonPipelineBase.h" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "* This class represent a python pipeline. It is use by the TSoftClassPtr of the PythonPipeline asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePythonPipelineBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::ClassParams = {
		&UInterchangePythonPipelineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePythonPipelineBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton, Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePythonPipelineBase>()
	{
		return UInterchangePythonPipelineBase::StaticClass();
	}
	UInterchangePythonPipelineBase::UInterchangePythonPipelineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePythonPipelineBase);
	UInterchangePythonPipelineBase::~UInterchangePythonPipelineBase() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyData;
class UScriptStruct* FPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyData, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("PropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FPropertyData>()
{
	return FPropertyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		&NewStructOps,
		"PropertyData",
		sizeof(FPropertyData),
		alignof(FPropertyData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyData()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton, Z_Construct_UScriptStruct_FPropertyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton;
	}
	void UInterchangePythonPipelineAsset::StaticRegisterNativesUInterchangePythonPipelineAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePythonPipelineAsset);
	UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister()
	{
		return UInterchangePythonPipelineAsset::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PythonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonDefaultProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonDefaultProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This class is a helper class for python pipeline. It allow picker to filter correctly the content browser instance we want to support\n * in the pipeline stack.\n *\n * Use this class factory to be able to create an instance of a python pipeline in the content browser.\n * A python pipeline do not have any locked properties and all default value must be set in the python script.\n * This restriction exist because python class are transient, so any assets create from a python class cannot be save.\n * \n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePythonPipelineBase.h" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "* This class is a helper class for python pipeline. It allow picker to filter correctly the content browser instance we want to support\n* in the pipeline stack.\n*\n* Use this class factory to be able to create an instance of a python pipeline in the content browser.\n* A python pipeline do not have any locked properties and all default value must be set in the python script.\n* This restriction exist because python class are transient, so any assets create from a python class cannot be save." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "Comment", "/** The python class we want to use has a pipeline */" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "The python class we want to use has a pipeline" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePythonPipelineAsset, PythonClass), Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "Comment", "/** The transient pipeline we generate when we load the python pipeline */" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "The transient pipeline we generate when we load the python pipeline" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline = { "GeneratedPipeline", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePythonPipelineAsset, GeneratedPipeline), Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties = { "JsonDefaultProperties", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePythonPipelineAsset, JsonDefaultProperties), METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePythonPipelineAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::ClassParams = {
		&UInterchangePythonPipelineAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset()
	{
		if (!Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton, Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePythonPipelineAsset>()
	{
		return UInterchangePythonPipelineAsset::StaticClass();
	}
	UInterchangePythonPipelineAsset::UInterchangePythonPipelineAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePythonPipelineAsset);
	UInterchangePythonPipelineAsset::~UInterchangePythonPipelineAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ScriptStructInfo[] = {
		{ FPropertyData::StaticStruct, Z_Construct_UScriptStruct_FPropertyData_Statics::NewStructOps, TEXT("PropertyData"), &Z_Registration_Info_UScriptStruct_PropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyData), 4090921078U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePythonPipelineBase, UInterchangePythonPipelineBase::StaticClass, TEXT("UInterchangePythonPipelineBase"), &Z_Registration_Info_UClass_UInterchangePythonPipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePythonPipelineBase), 3485625864U) },
		{ Z_Construct_UClass_UInterchangePythonPipelineAsset, UInterchangePythonPipelineAsset::StaticClass, TEXT("UInterchangePythonPipelineAsset"), &Z_Registration_Info_UClass_UInterchangePythonPipelineAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePythonPipelineAsset), 2928559448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_68375121(TEXT("/Script/InterchangeEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
