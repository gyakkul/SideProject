// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedMemoryMediaOutputFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemoryMediaOutputFactory() {}
// Cross Module References
	DISPLAYCLUSTERMEDIAEDITOR_API UClass* Z_Construct_UClass_USharedMemoryMediaOutputFactory();
	DISPLAYCLUSTERMEDIAEDITOR_API UClass* Z_Construct_UClass_USharedMemoryMediaOutputFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMediaEditor();
// End Cross Module References
	void USharedMemoryMediaOutputFactory::StaticRegisterNativesUSharedMemoryMediaOutputFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedMemoryMediaOutputFactory);
	UClass* Z_Construct_UClass_USharedMemoryMediaOutputFactory_NoRegister()
	{
		return USharedMemoryMediaOutputFactory::StaticClass();
	}
	struct Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for USharedMemoryMediaOutput objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SharedMemoryMediaOutputFactory.h" },
		{ "ModuleRelativePath", "Private/SharedMemoryMediaOutputFactory.h" },
		{ "ToolTip", "Implements a factory for USharedMemoryMediaOutput objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedMemoryMediaOutputFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::ClassParams = {
		&USharedMemoryMediaOutputFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedMemoryMediaOutputFactory()
	{
		if (!Z_Registration_Info_UClass_USharedMemoryMediaOutputFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedMemoryMediaOutputFactory.OuterSingleton, Z_Construct_UClass_USharedMemoryMediaOutputFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedMemoryMediaOutputFactory.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIAEDITOR_API UClass* StaticClass<USharedMemoryMediaOutputFactory>()
	{
		return USharedMemoryMediaOutputFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemoryMediaOutputFactory);
	USharedMemoryMediaOutputFactory::~USharedMemoryMediaOutputFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaOutputFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaOutputFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USharedMemoryMediaOutputFactory, USharedMemoryMediaOutputFactory::StaticClass, TEXT("USharedMemoryMediaOutputFactory"), &Z_Registration_Info_UClass_USharedMemoryMediaOutputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedMemoryMediaOutputFactory), 2438322830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaOutputFactory_h_4218642629(TEXT("/Script/DisplayClusterMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaOutputFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaOutputFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
