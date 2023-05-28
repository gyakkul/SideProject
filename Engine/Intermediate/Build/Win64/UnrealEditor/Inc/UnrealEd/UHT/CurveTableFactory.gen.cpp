// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CurveTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveTableFactory::StaticRegisterNativesUCurveTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveTableFactory);
	UClass* Z_Construct_UClass_UCurveTableFactory_NoRegister()
	{
		return UCurveTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTableFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Creates a CurveTable with Rich Curves */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CurveTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveTableFactory.h" },
		{ "ToolTip", "Creates a CurveTable with Rich Curves" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveTableFactory_Statics::ClassParams = {
		&UCurveTableFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveTableFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveTableFactory.OuterSingleton, Z_Construct_UClass_UCurveTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveTableFactory>()
	{
		return UCurveTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveTableFactory);
	UCurveTableFactory::~UCurveTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveTableFactory, UCurveTableFactory::StaticClass, TEXT("UCurveTableFactory"), &Z_Registration_Info_UClass_UCurveTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveTableFactory), 3603789711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_175237568(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
