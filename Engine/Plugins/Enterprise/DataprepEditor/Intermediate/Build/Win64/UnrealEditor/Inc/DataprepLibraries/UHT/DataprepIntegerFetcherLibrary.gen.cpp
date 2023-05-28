// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetchers/DataprepIntegerFetcherLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepIntegerFetcherLibrary() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFetcher();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepTriangleCountFetcher();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepTriangleCountFetcher_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepVertexCountFetcher();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepVertexCountFetcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References
	void UDataprepTriangleCountFetcher::StaticRegisterNativesUDataprepTriangleCountFetcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepTriangleCountFetcher);
	UClass* Z_Construct_UClass_UDataprepTriangleCountFetcher_NoRegister()
	{
		return UDataprepTriangleCountFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepIntegerFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Triangle Count" },
		{ "IncludePath", "Fetchers/DataprepIntegerFetcherLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Fetchers/DataprepIntegerFetcherLibrary.h" },
		{ "ToolTip", "Filter objects based on their triangle count." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepTriangleCountFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::ClassParams = {
		&UDataprepTriangleCountFetcher::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepTriangleCountFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepTriangleCountFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepTriangleCountFetcher.OuterSingleton, Z_Construct_UClass_UDataprepTriangleCountFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepTriangleCountFetcher.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepTriangleCountFetcher>()
	{
		return UDataprepTriangleCountFetcher::StaticClass();
	}
	UDataprepTriangleCountFetcher::UDataprepTriangleCountFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepTriangleCountFetcher);
	UDataprepTriangleCountFetcher::~UDataprepTriangleCountFetcher() {}
	void UDataprepVertexCountFetcher::StaticRegisterNativesUDataprepVertexCountFetcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepVertexCountFetcher);
	UClass* Z_Construct_UClass_UDataprepVertexCountFetcher_NoRegister()
	{
		return UDataprepVertexCountFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepVertexCountFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepIntegerFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vertex Count" },
		{ "IncludePath", "Fetchers/DataprepIntegerFetcherLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Fetchers/DataprepIntegerFetcherLibrary.h" },
		{ "ToolTip", "Filter objects based on their vertex count." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepVertexCountFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::ClassParams = {
		&UDataprepVertexCountFetcher::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepVertexCountFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepVertexCountFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepVertexCountFetcher.OuterSingleton, Z_Construct_UClass_UDataprepVertexCountFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepVertexCountFetcher.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepVertexCountFetcher>()
	{
		return UDataprepVertexCountFetcher::StaticClass();
	}
	UDataprepVertexCountFetcher::UDataprepVertexCountFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepVertexCountFetcher);
	UDataprepVertexCountFetcher::~UDataprepVertexCountFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepIntegerFetcherLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepIntegerFetcherLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepTriangleCountFetcher, UDataprepTriangleCountFetcher::StaticClass, TEXT("UDataprepTriangleCountFetcher"), &Z_Registration_Info_UClass_UDataprepTriangleCountFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepTriangleCountFetcher), 2214662314U) },
		{ Z_Construct_UClass_UDataprepVertexCountFetcher, UDataprepVertexCountFetcher::StaticClass, TEXT("UDataprepVertexCountFetcher"), &Z_Registration_Info_UClass_UDataprepVertexCountFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepVertexCountFetcher), 3974038955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepIntegerFetcherLibrary_h_1708992248(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepIntegerFetcherLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepIntegerFetcherLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
