// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeVirtualTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VirtualTexturingEditor();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureFactory();
	VIRTUALTEXTURINGEDITOR_API UClass* Z_Construct_UClass_URuntimeVirtualTextureFactory_NoRegister();
// End Cross Module References
	void URuntimeVirtualTextureFactory::StaticRegisterNativesURuntimeVirtualTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTextureFactory);
	UClass* Z_Construct_UClass_URuntimeVirtualTextureFactory_NoRegister()
	{
		return URuntimeVirtualTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualTexturingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for URuntimeVirtualTexture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RuntimeVirtualTextureFactory.h" },
		{ "ModuleRelativePath", "Classes/RuntimeVirtualTextureFactory.h" },
		{ "ToolTip", "Factory for URuntimeVirtualTexture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::ClassParams = {
		&URuntimeVirtualTextureFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureFactory()
	{
		if (!Z_Registration_Info_UClass_URuntimeVirtualTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTextureFactory.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeVirtualTextureFactory.OuterSingleton;
	}
	template<> VIRTUALTEXTURINGEDITOR_API UClass* StaticClass<URuntimeVirtualTextureFactory>()
	{
		return URuntimeVirtualTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureFactory);
	URuntimeVirtualTextureFactory::~URuntimeVirtualTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVirtualTextureFactory, URuntimeVirtualTextureFactory::StaticClass, TEXT("URuntimeVirtualTextureFactory"), &Z_Registration_Info_UClass_URuntimeVirtualTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTextureFactory), 1577886283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_2929576877(TEXT("/Script/VirtualTexturingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
