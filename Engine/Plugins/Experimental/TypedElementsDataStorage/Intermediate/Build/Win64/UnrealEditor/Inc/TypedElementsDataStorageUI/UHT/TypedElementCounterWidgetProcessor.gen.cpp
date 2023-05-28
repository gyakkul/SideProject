// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TypedElementCounterWidgetProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCounterWidgetProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementCounterWidgetProcessor();
	TYPEDELEMENTSDATASTORAGEUI_API UClass* Z_Construct_UClass_UTypedElementCounterWidgetProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorageUI();
// End Cross Module References
	void UTypedElementCounterWidgetProcessor::StaticRegisterNativesUTypedElementCounterWidgetProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementCounterWidgetProcessor);
	UClass* Z_Construct_UClass_UTypedElementCounterWidgetProcessor_NoRegister()
	{
		return UTypedElementCounterWidgetProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorageUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runs the count queries and updates the Slate widgets. */" },
		{ "IncludePath", "TypedElementCounterWidgetProcessor.h" },
		{ "ModuleRelativePath", "Private/TypedElementCounterWidgetProcessor.h" },
		{ "ToolTip", "Runs the count queries and updates the Slate widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementCounterWidgetProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::ClassParams = {
		&UTypedElementCounterWidgetProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementCounterWidgetProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementCounterWidgetProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementCounterWidgetProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementCounterWidgetProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementCounterWidgetProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGEUI_API UClass* StaticClass<UTypedElementCounterWidgetProcessor>()
	{
		return UTypedElementCounterWidgetProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementCounterWidgetProcessor);
	UTypedElementCounterWidgetProcessor::~UTypedElementCounterWidgetProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Private_TypedElementCounterWidgetProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Private_TypedElementCounterWidgetProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementCounterWidgetProcessor, UTypedElementCounterWidgetProcessor::StaticClass, TEXT("UTypedElementCounterWidgetProcessor"), &Z_Registration_Info_UClass_UTypedElementCounterWidgetProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementCounterWidgetProcessor), 1742344389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Private_TypedElementCounterWidgetProcessor_h_2210904406(TEXT("/Script/TypedElementsDataStorageUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Private_TypedElementCounterWidgetProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorageUI_Private_TypedElementCounterWidgetProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
