// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithDataprepOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDataprepOperation() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDataprepSetupStaticLightingOperation();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDataprepSetupStaticLightingOperation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	void UDataprepSetupStaticLightingOperation::StaticRegisterNativesUDataprepSetupStaticLightingOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepSetupStaticLightingOperation);
	UClass* Z_Construct_UClass_UDataprepSetupStaticLightingOperation_NoRegister()
	{
		return UDataprepSetupStaticLightingOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLightmapUVGeneration_MetaData[];
#endif
		static void NewProp_bEnableLightmapUVGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLightmapUVGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapResolutionIdealRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightmapResolutionIdealRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "LightmapOptions" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Setup Static Lighting" },
		{ "IncludePath", "DatasmithDataprepOperation.h" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepOperation.h" },
		{ "ToolTip", "For each static mesh to process, setup the settings to enable lightmap UVs generation and compute the lightmap resolution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration_MetaData[] = {
		{ "Category", "LightmapOptions" },
		{ "DisplayName", "Enable Lightmap UV Generation" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepOperation.h" },
		{ "ToolTip", "Enable the lightmap UV generation." },
	};
#endif
	void Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration_SetBit(void* Obj)
	{
		((UDataprepSetupStaticLightingOperation*)Obj)->bEnableLightmapUVGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration = { "bEnableLightmapUVGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepSetupStaticLightingOperation), &Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_LightmapResolutionIdealRatio_MetaData[] = {
		{ "Category", "LightmapOptions" },
		{ "DisplayName", "Resolution Ideal Ratio" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepOperation.h" },
		{ "ToolTip", "The ratio used to compute the resolution of the lightmap." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_LightmapResolutionIdealRatio = { "LightmapResolutionIdealRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSetupStaticLightingOperation, LightmapResolutionIdealRatio), METADATA_PARAMS(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_LightmapResolutionIdealRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_LightmapResolutionIdealRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_bEnableLightmapUVGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::NewProp_LightmapResolutionIdealRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepSetupStaticLightingOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::ClassParams = {
		&UDataprepSetupStaticLightingOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepSetupStaticLightingOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepSetupStaticLightingOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepSetupStaticLightingOperation.OuterSingleton, Z_Construct_UClass_UDataprepSetupStaticLightingOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepSetupStaticLightingOperation.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDataprepSetupStaticLightingOperation>()
	{
		return UDataprepSetupStaticLightingOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepSetupStaticLightingOperation);
	UDataprepSetupStaticLightingOperation::~UDataprepSetupStaticLightingOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepSetupStaticLightingOperation, UDataprepSetupStaticLightingOperation::StaticClass, TEXT("UDataprepSetupStaticLightingOperation"), &Z_Registration_Info_UClass_UDataprepSetupStaticLightingOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepSetupStaticLightingOperation), 1754956206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepOperation_h_259275738(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
