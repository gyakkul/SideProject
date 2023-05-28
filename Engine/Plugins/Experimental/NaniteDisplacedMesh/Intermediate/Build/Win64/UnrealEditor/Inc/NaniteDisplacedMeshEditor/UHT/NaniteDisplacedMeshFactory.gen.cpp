// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteDisplacedMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteDisplacedMeshFactory() {}
// Cross Module References
	NANITEDISPLACEDMESHEDITOR_API UClass* Z_Construct_UClass_UNaniteDisplacedMeshFactory();
	NANITEDISPLACEDMESHEDITOR_API UClass* Z_Construct_UClass_UNaniteDisplacedMeshFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NaniteDisplacedMeshEditor();
// End Cross Module References
	void UNaniteDisplacedMeshFactory::StaticRegisterNativesUNaniteDisplacedMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteDisplacedMeshFactory);
	UClass* Z_Construct_UClass_UNaniteDisplacedMeshFactory_NoRegister()
	{
		return UNaniteDisplacedMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMeshEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NaniteDisplacedMeshFactory.h" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteDisplacedMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::ClassParams = {
		&UNaniteDisplacedMeshFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaniteDisplacedMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UNaniteDisplacedMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteDisplacedMeshFactory.OuterSingleton, Z_Construct_UClass_UNaniteDisplacedMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteDisplacedMeshFactory.OuterSingleton;
	}
	template<> NANITEDISPLACEDMESHEDITOR_API UClass* StaticClass<UNaniteDisplacedMeshFactory>()
	{
		return UNaniteDisplacedMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteDisplacedMeshFactory);
	UNaniteDisplacedMeshFactory::~UNaniteDisplacedMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Public_NaniteDisplacedMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Public_NaniteDisplacedMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteDisplacedMeshFactory, UNaniteDisplacedMeshFactory::StaticClass, TEXT("UNaniteDisplacedMeshFactory"), &Z_Registration_Info_UClass_UNaniteDisplacedMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteDisplacedMeshFactory), 4229424575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Public_NaniteDisplacedMeshFactory_h_3291623582(TEXT("/Script/NaniteDisplacedMeshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Public_NaniteDisplacedMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMeshEditor_Public_NaniteDisplacedMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
