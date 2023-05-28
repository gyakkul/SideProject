// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetReferenceColumnUpdateProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementSlateWidgetReferenceColumnUpdateProcessor::StaticRegisterNativesUTypedElementSlateWidgetReferenceColumnUpdateProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSlateWidgetReferenceColumnUpdateProcessor);
	UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_NoRegister()
	{
		return UTypedElementSlateWidgetReferenceColumnUpdateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Processor that checks whether or not a widget still exists. If it has been deleted\n * then it will remove the column from the Data Storage or deletes the entire row if\n * the FTypedElementSlateWidgetReferenceDeletesRowTag was found.\n */" },
		{ "IncludePath", "UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h" },
		{ "ModuleRelativePath", "Private/UI/TypedElementSlateWidgetReferenceColumnUpdateProcessor.h" },
		{ "ToolTip", "Processor that checks whether or not a widget still exists. If it has been deleted\nthen it will remove the column from the Data Storage or deletes the entire row if\nthe FTypedElementSlateWidgetReferenceDeletesRowTag was found." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementSlateWidgetReferenceColumnUpdateProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::ClassParams = {
		&UTypedElementSlateWidgetReferenceColumnUpdateProcessor::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementSlateWidgetReferenceColumnUpdateProcessor>()
	{
		return UTypedElementSlateWidgetReferenceColumnUpdateProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSlateWidgetReferenceColumnUpdateProcessor);
	UTypedElementSlateWidgetReferenceColumnUpdateProcessor::~UTypedElementSlateWidgetReferenceColumnUpdateProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor, UTypedElementSlateWidgetReferenceColumnUpdateProcessor::StaticClass, TEXT("UTypedElementSlateWidgetReferenceColumnUpdateProcessor"), &Z_Registration_Info_UClass_UTypedElementSlateWidgetReferenceColumnUpdateProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSlateWidgetReferenceColumnUpdateProcessor), 1656056552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_782825144(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_UI_TypedElementSlateWidgetReferenceColumnUpdateProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
