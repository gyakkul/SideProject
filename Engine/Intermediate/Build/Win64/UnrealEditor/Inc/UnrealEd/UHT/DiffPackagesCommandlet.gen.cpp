// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/DiffPackagesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiffPackagesCommandlet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEPRECATED_DiffPackagesCommandlet::StaticRegisterNativesUDEPRECATED_DiffPackagesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DiffPackagesCommandlet);
	UClass* Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_NoRegister()
	{
		return UDEPRECATED_DiffPackagesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Packages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DiffPackagesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DiffPackagesCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::NewProp_Packages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/DiffPackagesCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Packages, UDEPRECATED_DiffPackagesCommandlet), nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_DiffPackagesCommandlet, Packages), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::NewProp_Packages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::NewProp_Packages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::NewProp_Packages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DiffPackagesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::ClassParams = {
		&UDEPRECATED_DiffPackagesCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::PropPointers),
		0,
		0x020002A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_DiffPackagesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DiffPackagesCommandlet.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_DiffPackagesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEPRECATED_DiffPackagesCommandlet>()
	{
		return UDEPRECATED_DiffPackagesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DiffPackagesCommandlet);
	UDEPRECATED_DiffPackagesCommandlet::~UDEPRECATED_DiffPackagesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffPackagesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffPackagesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DiffPackagesCommandlet, UDEPRECATED_DiffPackagesCommandlet::StaticClass, TEXT("UDEPRECATED_DiffPackagesCommandlet"), &Z_Registration_Info_UClass_UDEPRECATED_DiffPackagesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DiffPackagesCommandlet), 544625400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffPackagesCommandlet_h_1241542295(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffPackagesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffPackagesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
