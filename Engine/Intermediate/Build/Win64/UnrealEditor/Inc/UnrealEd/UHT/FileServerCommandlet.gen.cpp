// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/FileServerCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileServerCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UFileServerCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UFileServerCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFileServerCommandlet::StaticRegisterNativesUFileServerCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileServerCommandlet);
	UClass* Z_Construct_UClass_UFileServerCommandlet_NoRegister()
	{
		return UFileServerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UFileServerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileServerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileServerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a file server commandlet.\n */" },
		{ "IncludePath", "Commandlets/FileServerCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/FileServerCommandlet.h" },
		{ "ToolTip", "Implements a file server commandlet." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileServerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileServerCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileServerCommandlet_Statics::ClassParams = {
		&UFileServerCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFileServerCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileServerCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileServerCommandlet()
	{
		if (!Z_Registration_Info_UClass_UFileServerCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileServerCommandlet.OuterSingleton, Z_Construct_UClass_UFileServerCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileServerCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFileServerCommandlet>()
	{
		return UFileServerCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileServerCommandlet);
	UFileServerCommandlet::~UFileServerCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileServerCommandlet, UFileServerCommandlet::StaticClass, TEXT("UFileServerCommandlet"), &Z_Registration_Info_UClass_UFileServerCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileServerCommandlet), 1000172626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_1252710978(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
