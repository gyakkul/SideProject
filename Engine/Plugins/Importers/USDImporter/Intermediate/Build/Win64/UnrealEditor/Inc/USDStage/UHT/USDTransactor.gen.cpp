// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDTransactor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDTransactor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_USDStage();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdTransactor();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdTransactor_NoRegister();
// End Cross Module References
	void UUsdTransactor::StaticRegisterNativesUUsdTransactor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdTransactor);
	UClass* Z_Construct_UClass_UUsdTransactor_NoRegister()
	{
		return UUsdTransactor::StaticClass();
	}
	struct Z_Construct_UClass_UUsdTransactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdTransactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdTransactor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class that allows us to log prim attribute changes into the unreal transaction buffer.\n * The AUsdStageActor owns one of these, and whenever a USD notice is fired this class transacts and serializes\n * the notice data with itself. When undo/redoing it applies its values to the AUsdStageActors' current stage.\n *\n * Additionally this class naturally allows multi-user (ConcertSync) support for USD stage interactions, by letting\n * these notice data to be mirrored on other clients.\n */" },
		{ "IncludePath", "USDTransactor.h" },
		{ "ModuleRelativePath", "Public/USDTransactor.h" },
		{ "ToolTip", "Class that allows us to log prim attribute changes into the unreal transaction buffer.\nThe AUsdStageActor owns one of these, and whenever a USD notice is fired this class transacts and serializes\nthe notice data with itself. When undo/redoing it applies its values to the AUsdStageActors' current stage.\n\nAdditionally this class naturally allows multi-user (ConcertSync) support for USD stage interactions, by letting\nthese notice data to be mirrored on other clients." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdTransactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdTransactor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdTransactor_Statics::ClassParams = {
		&UUsdTransactor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUsdTransactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdTransactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdTransactor()
	{
		if (!Z_Registration_Info_UClass_UUsdTransactor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdTransactor.OuterSingleton, Z_Construct_UClass_UUsdTransactor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdTransactor.OuterSingleton;
	}
	template<> USDSTAGE_API UClass* StaticClass<UUsdTransactor>()
	{
		return UUsdTransactor::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUsdTransactor)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdTransactor, UUsdTransactor::StaticClass, TEXT("UUsdTransactor"), &Z_Registration_Info_UClass_UUsdTransactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdTransactor), 4192671978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_1726671815(TEXT("/Script/USDStage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDTransactor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
