// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GatherTextCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextCommandlet::StaticRegisterNativesUGatherTextCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGatherTextCommandlet);
	UClass* Z_Construct_UClass_UGatherTextCommandlet_NoRegister()
	{
		return UGatherTextCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGatherTextCommandlet: One commandlet to rule them all. This commandlet loads a config file and then calls other localization commandlets. Allows localization system to be easily extendable and flexible. \n */" },
		{ "IncludePath", "Commandlets/GatherTextCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextCommandlet.h" },
		{ "ToolTip", "UGatherTextCommandlet: One commandlet to rule them all. This commandlet loads a config file and then calls other localization commandlets. Allows localization system to be easily extendable and flexible." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextCommandlet_Statics::ClassParams = {
		&UGatherTextCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGatherTextCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGatherTextCommandlet.OuterSingleton, Z_Construct_UClass_UGatherTextCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGatherTextCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGatherTextCommandlet>()
	{
		return UGatherTextCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextCommandlet);
	UGatherTextCommandlet::~UGatherTextCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGatherTextCommandlet, UGatherTextCommandlet::StaticClass, TEXT("UGatherTextCommandlet"), &Z_Registration_Info_UClass_UGatherTextCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGatherTextCommandlet), 3506835135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_1981445182(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
