// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UThumbnailInfo::StaticRegisterNativesUThumbnailInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailInfo);
	UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister()
	{
		return UThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_UThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorFramework/ThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/EditorFramework/ThumbnailInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams = {
		&UThumbnailInfo::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThumbnailInfo()
	{
		if (!Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton, Z_Construct_UClass_UThumbnailInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThumbnailInfo.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UThumbnailInfo>()
	{
		return UThumbnailInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailInfo);
	UThumbnailInfo::~UThumbnailInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailInfo, UThumbnailInfo::StaticClass, TEXT("UThumbnailInfo"), &Z_Registration_Info_UClass_UThumbnailInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailInfo), 2014190426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_1714653547(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
