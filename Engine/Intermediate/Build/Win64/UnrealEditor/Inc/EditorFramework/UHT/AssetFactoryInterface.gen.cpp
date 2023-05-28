// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/AssetFactoryInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetFactoryInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	void UAssetFactoryInterface::StaticRegisterNativesUAssetFactoryInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetFactoryInterface);
	UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister()
	{
		return UAssetFactoryInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAssetFactoryInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetFactoryInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetFactoryInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Factories/AssetFactoryInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetFactoryInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetFactoryInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetFactoryInterface_Statics::ClassParams = {
		&UAssetFactoryInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetFactoryInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetFactoryInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetFactoryInterface()
	{
		if (!Z_Registration_Info_UClass_UAssetFactoryInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetFactoryInterface.OuterSingleton, Z_Construct_UClass_UAssetFactoryInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetFactoryInterface.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UAssetFactoryInterface>()
	{
		return UAssetFactoryInterface::StaticClass();
	}
	UAssetFactoryInterface::UAssetFactoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetFactoryInterface);
	UAssetFactoryInterface::~UAssetFactoryInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetFactoryInterface, UAssetFactoryInterface::StaticClass, TEXT("UAssetFactoryInterface"), &Z_Registration_Info_UClass_UAssetFactoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetFactoryInterface), 3921816976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_1043043363(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
