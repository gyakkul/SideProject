// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fetchers/DataprepBoolFetcherLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepBoolFetcherLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepBoolFetcher();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepIsClassOfFetcher();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepIsClassOfFetcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References
	void UDataprepIsClassOfFetcher::StaticRegisterNativesUDataprepIsClassOfFetcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepIsClassOfFetcher);
	UClass* Z_Construct_UClass_UDataprepIsClassOfFetcher_NoRegister()
	{
		return UDataprepIsClassOfFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldIncludeChildClass_MetaData[];
#endif
		static void NewProp_bShouldIncludeChildClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldIncludeChildClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepBoolFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Is Class Of" },
		{ "IncludePath", "Fetchers/DataprepBoolFetcherLibrary.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Fetchers/DataprepBoolFetcherLibrary.h" },
		{ "ToolTip", "Filter objects based of their selected class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The key for the for the string\n" },
		{ "ModuleRelativePath", "Public/Fetchers/DataprepBoolFetcherLibrary.h" },
		{ "ToolTip", "The key for the for the string" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000805, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIsClassOfFetcher, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Fetchers/DataprepBoolFetcherLibrary.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass_SetBit(void* Obj)
	{
		((UDataprepIsClassOfFetcher*)Obj)->bShouldIncludeChildClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass = { "bShouldIncludeChildClass", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepIsClassOfFetcher), &Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::NewProp_bShouldIncludeChildClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepIsClassOfFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::ClassParams = {
		&UDataprepIsClassOfFetcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepIsClassOfFetcher()
	{
		if (!Z_Registration_Info_UClass_UDataprepIsClassOfFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepIsClassOfFetcher.OuterSingleton, Z_Construct_UClass_UDataprepIsClassOfFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepIsClassOfFetcher.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepIsClassOfFetcher>()
	{
		return UDataprepIsClassOfFetcher::StaticClass();
	}
	UDataprepIsClassOfFetcher::UDataprepIsClassOfFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepIsClassOfFetcher);
	UDataprepIsClassOfFetcher::~UDataprepIsClassOfFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepBoolFetcherLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepBoolFetcherLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepIsClassOfFetcher, UDataprepIsClassOfFetcher::StaticClass, TEXT("UDataprepIsClassOfFetcher"), &Z_Registration_Info_UClass_UDataprepIsClassOfFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepIsClassOfFetcher), 1169964097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepBoolFetcherLibrary_h_3549571733(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepBoolFetcherLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Public_Fetchers_DataprepBoolFetcherLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
