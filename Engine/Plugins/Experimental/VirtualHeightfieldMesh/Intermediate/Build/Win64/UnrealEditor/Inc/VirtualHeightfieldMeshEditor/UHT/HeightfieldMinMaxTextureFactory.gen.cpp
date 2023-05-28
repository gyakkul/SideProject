// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/HeightfieldMinMaxTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightfieldMinMaxTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VirtualHeightfieldMeshEditor();
	VIRTUALHEIGHTFIELDMESHEDITOR_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTextureFactory();
	VIRTUALHEIGHTFIELDMESHEDITOR_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_NoRegister();
// End Cross Module References
	void UHeightfieldMinMaxTextureFactory::StaticRegisterNativesUHeightfieldMinMaxTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightfieldMinMaxTextureFactory);
	UClass* Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_NoRegister()
	{
		return UHeightfieldMinMaxTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualHeightfieldMeshEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UHeightfieldMinMaxTexture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "HeightfieldMinMaxTextureFactory.h" },
		{ "ModuleRelativePath", "Private/HeightfieldMinMaxTextureFactory.h" },
		{ "ToolTip", "Factory for UHeightfieldMinMaxTexture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightfieldMinMaxTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::ClassParams = {
		&UHeightfieldMinMaxTextureFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightfieldMinMaxTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UHeightfieldMinMaxTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightfieldMinMaxTextureFactory.OuterSingleton, Z_Construct_UClass_UHeightfieldMinMaxTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightfieldMinMaxTextureFactory.OuterSingleton;
	}
	template<> VIRTUALHEIGHTFIELDMESHEDITOR_API UClass* StaticClass<UHeightfieldMinMaxTextureFactory>()
	{
		return UHeightfieldMinMaxTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightfieldMinMaxTextureFactory);
	UHeightfieldMinMaxTextureFactory::~UHeightfieldMinMaxTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMeshEditor_Private_HeightfieldMinMaxTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMeshEditor_Private_HeightfieldMinMaxTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightfieldMinMaxTextureFactory, UHeightfieldMinMaxTextureFactory::StaticClass, TEXT("UHeightfieldMinMaxTextureFactory"), &Z_Registration_Info_UClass_UHeightfieldMinMaxTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightfieldMinMaxTextureFactory), 2581301879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMeshEditor_Private_HeightfieldMinMaxTextureFactory_h_613270042(TEXT("/Script/VirtualHeightfieldMeshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMeshEditor_Private_HeightfieldMinMaxTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMeshEditor_Private_HeightfieldMinMaxTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
