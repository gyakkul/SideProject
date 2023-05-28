// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FileMediaOutputFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaOutputFactory() {}
// Cross Module References
	MEDIAIOEDITOR_API UClass* Z_Construct_UClass_UFileMediaOutputFactory();
	MEDIAIOEDITOR_API UClass* Z_Construct_UClass_UFileMediaOutputFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaIOEditor();
// End Cross Module References
	void UFileMediaOutputFactory::StaticRegisterNativesUFileMediaOutputFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileMediaOutputFactory);
	UClass* Z_Construct_UClass_UFileMediaOutputFactory_NoRegister()
	{
		return UFileMediaOutputFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaOutputFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaOutputFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutputFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaOutput objects.\n */" },
		{ "IncludePath", "FileMediaOutputFactory.h" },
		{ "ModuleRelativePath", "Private/FileMediaOutputFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaOutput objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaOutputFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaOutputFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaOutputFactory_Statics::ClassParams = {
		&UFileMediaOutputFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutputFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutputFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaOutputFactory()
	{
		if (!Z_Registration_Info_UClass_UFileMediaOutputFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileMediaOutputFactory.OuterSingleton, Z_Construct_UClass_UFileMediaOutputFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileMediaOutputFactory.OuterSingleton;
	}
	template<> MEDIAIOEDITOR_API UClass* StaticClass<UFileMediaOutputFactory>()
	{
		return UFileMediaOutputFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaOutputFactory);
	UFileMediaOutputFactory::~UFileMediaOutputFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileMediaOutputFactory, UFileMediaOutputFactory::StaticClass, TEXT("UFileMediaOutputFactory"), &Z_Registration_Info_UClass_UFileMediaOutputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileMediaOutputFactory), 2312570086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_3875483003(TEXT("/Script/MediaIOEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOEditor_Private_FileMediaOutputFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
