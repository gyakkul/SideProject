// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithAdditionalData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAdditionalData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithAdditionalData::StaticRegisterNativesUDatasmithAdditionalData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithAdditionalData);
	UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister()
	{
		return UDatasmithAdditionalData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAdditionalData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAdditionalData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all additional data storable on datasmith assets.\n *\n * @usage:\n * Translator can push custom data on assets in order to exploit that data latter (@see UDatasmithCustomActionBase)\n */" },
		{ "IncludePath", "DatasmithAdditionalData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAdditionalData.h" },
		{ "ToolTip", "Base class for all additional data storable on datasmith assets.\n\n@usage:\nTranslator can push custom data on assets in order to exploit that data latter (@see UDatasmithCustomActionBase)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAdditionalData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAdditionalData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAdditionalData_Statics::ClassParams = {
		&UDatasmithAdditionalData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAdditionalData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAdditionalData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton, Z_Construct_UClass_UDatasmithAdditionalData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithAdditionalData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAdditionalData>()
	{
		return UDatasmithAdditionalData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAdditionalData);
	UDatasmithAdditionalData::~UDatasmithAdditionalData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithAdditionalData, UDatasmithAdditionalData::StaticClass, TEXT("UDatasmithAdditionalData"), &Z_Registration_Info_UClass_UDatasmithAdditionalData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithAdditionalData), 595793103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h_898258715(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAdditionalData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
