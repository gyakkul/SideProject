// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Processors/TypedElementMiscProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementMiscProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementRemoveSyncToWorldTagProcessor::StaticRegisterNativesUTypedElementRemoveSyncToWorldTagProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementRemoveSyncToWorldTagProcessor);
	UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_NoRegister()
	{
		return UTypedElementRemoveSyncToWorldTagProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Removes all FTypedElementSyncBackToWorldTags at the end of an update cycle.\n */" },
		{ "IncludePath", "Processors/TypedElementMiscProcessors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementMiscProcessors.h" },
		{ "ToolTip", "Removes all FTypedElementSyncBackToWorldTags at the end of an update cycle." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementRemoveSyncToWorldTagProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::ClassParams = {
		&UTypedElementRemoveSyncToWorldTagProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementRemoveSyncToWorldTagProcessor>()
	{
		return UTypedElementRemoveSyncToWorldTagProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementRemoveSyncToWorldTagProcessor);
	UTypedElementRemoveSyncToWorldTagProcessor::~UTypedElementRemoveSyncToWorldTagProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementMiscProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementMiscProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementRemoveSyncToWorldTagProcessor, UTypedElementRemoveSyncToWorldTagProcessor::StaticClass, TEXT("UTypedElementRemoveSyncToWorldTagProcessor"), &Z_Registration_Info_UClass_UTypedElementRemoveSyncToWorldTagProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementRemoveSyncToWorldTagProcessor), 567180548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementMiscProcessors_h_3944305714(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementMiscProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementMiscProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
