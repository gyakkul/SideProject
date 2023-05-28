// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepAssetProducers.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepAssetProducers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetProducers();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetProducers_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer_NoRegister();
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepAssetProducer();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataprepAssetProducer;
class UScriptStruct* FDataprepAssetProducer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataprepAssetProducer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataprepAssetProducer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataprepAssetProducer, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("DataprepAssetProducer"));
	}
	return Z_Registration_Info_UScriptStruct_DataprepAssetProducer.OuterSingleton;
}
template<> DATAPREPCORE_API UScriptStruct* StaticStruct<FDataprepAssetProducer>()
{
	return FDataprepAssetProducer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Producer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Producer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupersededBy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SupersededBy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to hold on a producer and its configuration */" },
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
		{ "ToolTip", "Structure to hold on a producer and its configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataprepAssetProducer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_Producer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_Producer = { "Producer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepAssetProducer, Producer), Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_Producer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_Producer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDataprepAssetProducer*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataprepAssetProducer), &Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_SupersededBy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_SupersededBy = { "SupersededBy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepAssetProducer, SupersededBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_SupersededBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_SupersededBy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_Producer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewProp_SupersededBy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		&NewStructOps,
		"DataprepAssetProducer",
		sizeof(FDataprepAssetProducer),
		alignof(FDataprepAssetProducer),
		Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataprepAssetProducer()
	{
		if (!Z_Registration_Info_UScriptStruct_DataprepAssetProducer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataprepAssetProducer.InnerSingleton, Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataprepAssetProducer.InnerSingleton;
	}
	void UDataprepAssetProducers::StaticRegisterNativesUDataprepAssetProducers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetProducers);
	UClass* Z_Construct_UClass_UDataprepAssetProducers_NoRegister()
	{
		return UDataprepAssetProducers::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetProducers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetProducers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetProducers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetProducers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetProducers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetProducers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UDataprepAssetProducers is a utility class to manage the set of producers constituting\n * the inputs of a DataprepAssetInterface. It provides a set of methods to edit the set of\n * producers and their respective configuration.\n */" },
		{ "IncludePath", "DataprepAssetProducers.h" },
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
		{ "ToolTip", "A UDataprepAssetProducers is a utility class to manage the set of producers constituting\nthe inputs of a DataprepAssetInterface. It provides a set of methods to edit the set of\nproducers and their respective configuration." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers_Inner = { "AssetProducers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataprepAssetProducer, METADATA_PARAMS(nullptr, 0) }; // 4136686437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers_MetaData[] = {
		{ "Comment", "/** List of producers referenced by the asset */" },
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
		{ "ToolTip", "List of producers referenced by the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers = { "AssetProducers", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetProducers, AssetProducers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers_MetaData)) }; // 4136686437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_Padding_MetaData[] = {
		{ "Comment", "/** List of producers referenced by the asset */" },
		{ "ModuleRelativePath", "Public/DataprepAssetProducers.h" },
		{ "ToolTip", "List of producers referenced by the asset" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetProducers, Padding), METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_Padding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAssetProducers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_AssetProducers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetProducers_Statics::NewProp_Padding,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetProducers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetProducers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetProducers_Statics::ClassParams = {
		&UDataprepAssetProducers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDataprepAssetProducers_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetProducers_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetProducers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetProducers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetProducers()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetProducers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetProducers.OuterSingleton, Z_Construct_UClass_UDataprepAssetProducers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetProducers.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetProducers>()
	{
		return UDataprepAssetProducers::StaticClass();
	}
	UDataprepAssetProducers::UDataprepAssetProducers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetProducers);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataprepAssetProducers)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ScriptStructInfo[] = {
		{ FDataprepAssetProducer::StaticStruct, Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics::NewStructOps, TEXT("DataprepAssetProducer"), &Z_Registration_Info_UScriptStruct_DataprepAssetProducer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataprepAssetProducer), 4136686437U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepAssetProducers, UDataprepAssetProducers::StaticClass, TEXT("UDataprepAssetProducers"), &Z_Registration_Info_UClass_UDataprepAssetProducers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetProducers), 1746550541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_3078592192(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
