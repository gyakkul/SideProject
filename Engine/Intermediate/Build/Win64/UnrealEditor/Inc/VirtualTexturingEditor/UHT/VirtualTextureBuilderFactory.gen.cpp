// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualTextureBuilderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilderFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VirtualTexturingEditor();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UVirtualTextureBuilderFactory();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_UVirtualTextureBuilderFactory_NoRegister();
// End Cross Module References
	void UVirtualTextureBuilderFactory::StaticRegisterNativesUVirtualTextureBuilderFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilderFactory);
	UClass* Z_Construct_UClass_UVirtualTextureBuilderFactory_NoRegister()
	{
		return UVirtualTextureBuilderFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualTexturingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UVirtualTextureBuilder */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VirtualTextureBuilderFactory.h" },
		{ "ModuleRelativePath", "Classes/VirtualTextureBuilderFactory.h" },
		{ "ToolTip", "Factory for UVirtualTextureBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilderFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::ClassParams = {
		&UVirtualTextureBuilderFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilderFactory()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilderFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilderFactory.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilderFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilderFactory.OuterSingleton;
	}
	template<> VIRTUALTEXTURINGEDITOR_API UClass* StaticClass<UVirtualTextureBuilderFactory>()
	{
		return UVirtualTextureBuilderFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilderFactory);
	UVirtualTextureBuilderFactory::~UVirtualTextureBuilderFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureBuilderFactory, UVirtualTextureBuilderFactory::StaticClass, TEXT("UVirtualTextureBuilderFactory"), &Z_Registration_Info_UClass_UVirtualTextureBuilderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilderFactory), 971520764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_1173003823(TEXT("/Script/VirtualTexturingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_VirtualTextureBuilderFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
