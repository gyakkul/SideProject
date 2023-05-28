// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Compatibility/TypedElementActorLabelProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementActorLabelProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementActorLabelToColumnProcessor::StaticRegisterNativesUTypedElementActorLabelToColumnProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementActorLabelToColumnProcessor);
	UClass* Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_NoRegister()
	{
		return UTypedElementActorLabelToColumnProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes the label set on an actor and copies it to the Data Storage if they differ.\n */" },
		{ "IncludePath", "Compatibility/TypedElementActorLabelProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorLabelProcessors.h" },
		{ "ToolTip", "Takes the label set on an actor and copies it to the Data Storage if they differ." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementActorLabelToColumnProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::ClassParams = {
		&UTypedElementActorLabelToColumnProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementActorLabelToColumnProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementActorLabelToColumnProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementActorLabelToColumnProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementActorLabelToColumnProcessor>()
	{
		return UTypedElementActorLabelToColumnProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementActorLabelToColumnProcessor);
	UTypedElementActorLabelToColumnProcessor::~UTypedElementActorLabelToColumnProcessor() {}
	void UTypedElementLabelColumnToActorProcessor::StaticRegisterNativesUTypedElementLabelColumnToActorProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementLabelColumnToActorProcessor);
	UClass* Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_NoRegister()
	{
		return UTypedElementLabelColumnToActorProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes the label stored in the Data Storage and copies it to the actor's label if the FTypedElementSyncBackToWorldTag\n * has been set and the labels differ.\n */" },
		{ "IncludePath", "Compatibility/TypedElementActorLabelProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorLabelProcessors.h" },
		{ "ToolTip", "Takes the label stored in the Data Storage and copies it to the actor's label if the FTypedElementSyncBackToWorldTag\nhas been set and the labels differ." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementLabelColumnToActorProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::ClassParams = {
		&UTypedElementLabelColumnToActorProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementLabelColumnToActorProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementLabelColumnToActorProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementLabelColumnToActorProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementLabelColumnToActorProcessor>()
	{
		return UTypedElementLabelColumnToActorProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementLabelColumnToActorProcessor);
	UTypedElementLabelColumnToActorProcessor::~UTypedElementLabelColumnToActorProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorLabelProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorLabelProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementActorLabelToColumnProcessor, UTypedElementActorLabelToColumnProcessor::StaticClass, TEXT("UTypedElementActorLabelToColumnProcessor"), &Z_Registration_Info_UClass_UTypedElementActorLabelToColumnProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementActorLabelToColumnProcessor), 2280986007U) },
		{ Z_Construct_UClass_UTypedElementLabelColumnToActorProcessor, UTypedElementLabelColumnToActorProcessor::StaticClass, TEXT("UTypedElementLabelColumnToActorProcessor"), &Z_Registration_Info_UClass_UTypedElementLabelColumnToActorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementLabelColumnToActorProcessor), 4232297510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorLabelProcessors_h_3315885678(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorLabelProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorLabelProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
