// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBEditorBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBEditorBlueprint() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprint();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBEditorBlueprint();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBEditorBlueprint_NoRegister();
// End Cross Module References
	void UUTBEditorBlueprint::StaticRegisterNativesUUTBEditorBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBEditorBlueprint);
	UClass* Z_Construct_UClass_UUTBEditorBlueprint_NoRegister()
	{
		return UUTBEditorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UUTBEditorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBEditorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBEditorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UTBEditorBlueprint.h" },
		{ "ModuleRelativePath", "Public/UTBEditorBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBEditorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBEditorBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBEditorBlueprint_Statics::ClassParams = {
		&UUTBEditorBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBEditorBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBEditorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBEditorBlueprint()
	{
		if (!Z_Registration_Info_UClass_UUTBEditorBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBEditorBlueprint.OuterSingleton, Z_Construct_UClass_UUTBEditorBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBEditorBlueprint.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBEditorBlueprint>()
	{
		return UUTBEditorBlueprint::StaticClass();
	}
	UUTBEditorBlueprint::UUTBEditorBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBEditorBlueprint);
	UUTBEditorBlueprint::~UUTBEditorBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBEditorBlueprint, UUTBEditorBlueprint::StaticClass, TEXT("UUTBEditorBlueprint"), &Z_Registration_Info_UClass_UUTBEditorBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBEditorBlueprint), 669762828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_2642504807(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
