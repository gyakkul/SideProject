// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/StaticMeshMinLodCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshMinLodCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshMinLodCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshMinLodCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UStaticMeshMinLodCommandlet::StaticRegisterNativesUStaticMeshMinLodCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshMinLodCommandlet);
	UClass* Z_Construct_UClass_UStaticMeshMinLodCommandlet_NoRegister()
	{
		return UStaticMeshMinLodCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Commandlet  */" },
		{ "IncludePath", "Commandlets/StaticMeshMinLodCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/StaticMeshMinLodCommandlet.h" },
		{ "ToolTip", "Commandlet" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshMinLodCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::ClassParams = {
		&UStaticMeshMinLodCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshMinLodCommandlet()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshMinLodCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshMinLodCommandlet.OuterSingleton, Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshMinLodCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UStaticMeshMinLodCommandlet>()
	{
		return UStaticMeshMinLodCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshMinLodCommandlet);
	UStaticMeshMinLodCommandlet::~UStaticMeshMinLodCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshMinLodCommandlet, UStaticMeshMinLodCommandlet::StaticClass, TEXT("UStaticMeshMinLodCommandlet"), &Z_Registration_Info_UClass_UStaticMeshMinLodCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshMinLodCommandlet), 2045503772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_3486806765(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
