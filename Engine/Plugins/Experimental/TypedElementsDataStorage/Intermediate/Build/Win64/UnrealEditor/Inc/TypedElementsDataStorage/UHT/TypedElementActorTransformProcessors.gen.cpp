// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Compatibility/TypedElementActorTransformProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementActorTransformProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementActorAddTransformColumnProcessor::StaticRegisterNativesUTypedElementActorAddTransformColumnProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementActorAddTransformColumnProcessor);
	UClass* Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_NoRegister()
	{
		return UTypedElementActorAddTransformColumnProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Checks actors that don't have a tranform column and adds one if an actor has been\n * assigned a transform.\n */" },
		{ "IncludePath", "Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ToolTip", "Checks actors that don't have a tranform column and adds one if an actor has been\nassigned a transform." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementActorAddTransformColumnProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::ClassParams = {
		&UTypedElementActorAddTransformColumnProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementActorAddTransformColumnProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementActorAddTransformColumnProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementActorAddTransformColumnProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementActorAddTransformColumnProcessor>()
	{
		return UTypedElementActorAddTransformColumnProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementActorAddTransformColumnProcessor);
	UTypedElementActorAddTransformColumnProcessor::~UTypedElementActorAddTransformColumnProcessor() {}
	void UTypedElementActorLocalTransformToColumnProcessor::StaticRegisterNativesUTypedElementActorLocalTransformToColumnProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementActorLocalTransformToColumnProcessor);
	UClass* Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_NoRegister()
	{
		return UTypedElementActorLocalTransformToColumnProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes the transform set on an actor and copies it to the Data Storage or removes the \n * transform column if there's not transform available anymore.\n */" },
		{ "IncludePath", "Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ToolTip", "Takes the transform set on an actor and copies it to the Data Storage or removes the\ntransform column if there's not transform available anymore." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementActorLocalTransformToColumnProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::ClassParams = {
		&UTypedElementActorLocalTransformToColumnProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementActorLocalTransformToColumnProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementActorLocalTransformToColumnProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementActorLocalTransformToColumnProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementActorLocalTransformToColumnProcessor>()
	{
		return UTypedElementActorLocalTransformToColumnProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementActorLocalTransformToColumnProcessor);
	UTypedElementActorLocalTransformToColumnProcessor::~UTypedElementActorLocalTransformToColumnProcessor() {}
	void UTypedElementTransformColumnToActorProcessor::StaticRegisterNativesUTypedElementTransformColumnToActorProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementTransformColumnToActorProcessor);
	UClass* Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_NoRegister()
	{
		return UTypedElementTransformColumnToActorProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes the transform stored in the Data Storage and copies it to the actor's tranform if \n * the FTypedElementSyncBackToWorldTag has been set.\n */" },
		{ "IncludePath", "Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ModuleRelativePath", "Private/Compatibility/TypedElementActorTransformProcessors.h" },
		{ "ToolTip", "Takes the transform stored in the Data Storage and copies it to the actor's tranform if\nthe FTypedElementSyncBackToWorldTag has been set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementTransformColumnToActorProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::ClassParams = {
		&UTypedElementTransformColumnToActorProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementTransformColumnToActorProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementTransformColumnToActorProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementTransformColumnToActorProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementTransformColumnToActorProcessor>()
	{
		return UTypedElementTransformColumnToActorProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementTransformColumnToActorProcessor);
	UTypedElementTransformColumnToActorProcessor::~UTypedElementTransformColumnToActorProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementActorAddTransformColumnProcessor, UTypedElementActorAddTransformColumnProcessor::StaticClass, TEXT("UTypedElementActorAddTransformColumnProcessor"), &Z_Registration_Info_UClass_UTypedElementActorAddTransformColumnProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementActorAddTransformColumnProcessor), 4133651238U) },
		{ Z_Construct_UClass_UTypedElementActorLocalTransformToColumnProcessor, UTypedElementActorLocalTransformToColumnProcessor::StaticClass, TEXT("UTypedElementActorLocalTransformToColumnProcessor"), &Z_Registration_Info_UClass_UTypedElementActorLocalTransformToColumnProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementActorLocalTransformToColumnProcessor), 2390828927U) },
		{ Z_Construct_UClass_UTypedElementTransformColumnToActorProcessor, UTypedElementTransformColumnToActorProcessor::StaticClass, TEXT("UTypedElementTransformColumnToActorProcessor"), &Z_Registration_Info_UClass_UTypedElementTransformColumnToActorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementTransformColumnToActorProcessor), 1025955731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformProcessors_h_135549049(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Compatibility_TypedElementActorTransformProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
