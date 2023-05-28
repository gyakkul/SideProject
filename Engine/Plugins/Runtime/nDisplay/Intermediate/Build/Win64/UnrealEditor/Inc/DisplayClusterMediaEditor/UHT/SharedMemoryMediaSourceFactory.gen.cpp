// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedMemoryMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemoryMediaSourceFactory() {}
// Cross Module References
	DISPLAYCLUSTERMEDIAEDITOR_API UClass* Z_Construct_UClass_USharedMemoryMediaSourceFactory();
	DISPLAYCLUSTERMEDIAEDITOR_API UClass* Z_Construct_UClass_USharedMemoryMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMediaEditor();
// End Cross Module References
	void USharedMemoryMediaSourceFactory::StaticRegisterNativesUSharedMemoryMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedMemoryMediaSourceFactory);
	UClass* Z_Construct_UClass_USharedMemoryMediaSourceFactory_NoRegister()
	{
		return USharedMemoryMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for USharedMemoryMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SharedMemoryMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/SharedMemoryMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for USharedMemoryMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedMemoryMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::ClassParams = {
		&USharedMemoryMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedMemoryMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_USharedMemoryMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedMemoryMediaSourceFactory.OuterSingleton, Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedMemoryMediaSourceFactory.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIAEDITOR_API UClass* StaticClass<USharedMemoryMediaSourceFactory>()
	{
		return USharedMemoryMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemoryMediaSourceFactory);
	USharedMemoryMediaSourceFactory::~USharedMemoryMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USharedMemoryMediaSourceFactory, USharedMemoryMediaSourceFactory::StaticClass, TEXT("USharedMemoryMediaSourceFactory"), &Z_Registration_Info_UClass_USharedMemoryMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedMemoryMediaSourceFactory), 2687437427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_2776641401(TEXT("/Script/DisplayClusterMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
