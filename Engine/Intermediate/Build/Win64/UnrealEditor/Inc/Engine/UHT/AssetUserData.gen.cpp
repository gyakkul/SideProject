// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetUserData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAssetUserData::StaticRegisterNativesUAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetUserData);
	UClass* Z_Construct_UClass_UAssetUserData_NoRegister()
	{
		return UAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that can be subclassed to store custom data on Unreal asset objects.\n */" },
		{ "IncludePath", "Engine/AssetUserData.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetUserData.h" },
		{ "ToolTip", "Object that can be subclassed to store custom data on Unreal asset objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetUserData_Statics::ClassParams = {
		&UAssetUserData::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetUserData.OuterSingleton, Z_Construct_UClass_UAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetUserData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAssetUserData>()
	{
		return UAssetUserData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetUserData);
	UAssetUserData::~UAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetUserData, UAssetUserData::StaticClass, TEXT("UAssetUserData"), &Z_Registration_Info_UClass_UAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetUserData), 2485598213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_489824993(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
