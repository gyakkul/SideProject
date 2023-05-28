// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepAssetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepAssetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetProducers_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepRecipeInterface();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepRecipeInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepRecipeInterface::StaticRegisterNativesUDataprepRecipeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepRecipeInterface);
	UClass* Z_Construct_UClass_UDataprepRecipeInterface_NoRegister()
	{
		return UDataprepRecipeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepRecipeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepRecipeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRecipeInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A DataprepAssetInterface is composed of a set of producers, inputs, a consumer, output,\n * and a recipe, set of actions. The producers generate assets and populate a given world.\n * The pipeline modifies the assets and the actors of the given world. Finally, the consumer\n * converts the assets and the given world. An FBX exporter is a possible consumer.\n * This class is an abstract modeling the data preparation pipeline.\n */" },
		{ "IncludePath", "DataprepAssetInterface.h" },
		{ "ModuleRelativePath", "Public/DataprepAssetInterface.h" },
		{ "ToolTip", "A DataprepAssetInterface is composed of a set of producers, inputs, a consumer, output,\nand a recipe, set of actions. The producers generate assets and populate a given world.\nThe pipeline modifies the assets and the actors of the given world. Finally, the consumer\nconverts the assets and the given world. An FBX exporter is a possible consumer.\nThis class is an abstract modeling the data preparation pipeline." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepRecipeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepRecipeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepRecipeInterface_Statics::ClassParams = {
		&UDataprepRecipeInterface::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepRecipeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRecipeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepRecipeInterface()
	{
		if (!Z_Registration_Info_UClass_UDataprepRecipeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepRecipeInterface.OuterSingleton, Z_Construct_UClass_UDataprepRecipeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepRecipeInterface.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepRecipeInterface>()
	{
		return UDataprepRecipeInterface::StaticClass();
	}
	UDataprepRecipeInterface::UDataprepRecipeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepRecipeInterface);
	UDataprepRecipeInterface::~UDataprepRecipeInterface() {}
	void UDataprepAssetInterface::StaticRegisterNativesUDataprepAssetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetInterface);
	UClass* Z_Construct_UClass_UDataprepAssetInterface_NoRegister()
	{
		return UDataprepAssetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recipe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Recipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataprepAssetInterface.h" },
		{ "ModuleRelativePath", "Public/DataprepAssetInterface.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Recipe_MetaData[] = {
		{ "Comment", "/** Recipe associated to the Dataprep asset */" },
		{ "ModuleRelativePath", "Public/DataprepAssetInterface.h" },
		{ "ToolTip", "Recipe associated to the Dataprep asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Recipe = { "Recipe", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInterface, Recipe), Z_Construct_UClass_UDataprepRecipeInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Recipe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Recipe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Inputs_MetaData[] = {
		{ "Comment", "/** Producers associated to the Dataprep asset */" },
		{ "ModuleRelativePath", "Public/DataprepAssetInterface.h" },
		{ "ToolTip", "Producers associated to the Dataprep asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInterface, Inputs), Z_Construct_UClass_UDataprepAssetProducers_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Output_MetaData[] = {
		{ "Comment", "/** Consumer associated to the Dataprep asset */" },
		{ "ModuleRelativePath", "Public/DataprepAssetInterface.h" },
		{ "ToolTip", "Consumer associated to the Dataprep asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInterface, Output), Z_Construct_UClass_UDataprepContentConsumer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAssetInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Recipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInterface_Statics::NewProp_Output,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetInterface_Statics::ClassParams = {
		&UDataprepAssetInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDataprepAssetInterface_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInterface_Statics::PropPointers), 0),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetInterface()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetInterface.OuterSingleton, Z_Construct_UClass_UDataprepAssetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetInterface.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetInterface>()
	{
		return UDataprepAssetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepRecipeInterface, UDataprepRecipeInterface::StaticClass, TEXT("UDataprepRecipeInterface"), &Z_Registration_Info_UClass_UDataprepRecipeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepRecipeInterface), 3160564567U) },
		{ Z_Construct_UClass_UDataprepAssetInterface, UDataprepAssetInterface::StaticClass, TEXT("UDataprepAssetInterface"), &Z_Registration_Info_UClass_UDataprepAssetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetInterface), 1717788331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInterface_h_2603784483(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
