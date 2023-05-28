// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/TextAssetCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAssetCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UTextAssetCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UTextAssetCommandlet_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextAssetCommandletMode;
	static UEnum* ETextAssetCommandletMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextAssetCommandletMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextAssetCommandletMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ETextAssetCommandletMode"));
		}
		return Z_Registration_Info_UEnum_ETextAssetCommandletMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ETextAssetCommandletMode>()
	{
		return ETextAssetCommandletMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enumerators[] = {
		{ "ETextAssetCommandletMode::ResaveText", (int64)ETextAssetCommandletMode::ResaveText },
		{ "ETextAssetCommandletMode::ResaveBinary", (int64)ETextAssetCommandletMode::ResaveBinary },
		{ "ETextAssetCommandletMode::RoundTrip", (int64)ETextAssetCommandletMode::RoundTrip },
		{ "ETextAssetCommandletMode::LoadBinary", (int64)ETextAssetCommandletMode::LoadBinary },
		{ "ETextAssetCommandletMode::LoadText", (int64)ETextAssetCommandletMode::LoadText },
		{ "ETextAssetCommandletMode::FindMismatchedSerializers", (int64)ETextAssetCommandletMode::FindMismatchedSerializers },
		{ "ETextAssetCommandletMode::GenerateSchema", (int64)ETextAssetCommandletMode::GenerateSchema },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enum_MetaDataParams[] = {
		{ "FindMismatchedSerializers.Name", "ETextAssetCommandletMode::FindMismatchedSerializers" },
		{ "GenerateSchema.Name", "ETextAssetCommandletMode::GenerateSchema" },
		{ "LoadBinary.Name", "ETextAssetCommandletMode::LoadBinary" },
		{ "LoadText.Name", "ETextAssetCommandletMode::LoadText" },
		{ "ModuleRelativePath", "Classes/Commandlets/TextAssetCommandlet.h" },
		{ "ResaveBinary.Name", "ETextAssetCommandletMode::ResaveBinary" },
		{ "ResaveText.Name", "ETextAssetCommandletMode::ResaveText" },
		{ "RoundTrip.Name", "ETextAssetCommandletMode::RoundTrip" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ETextAssetCommandletMode",
		"ETextAssetCommandletMode",
		Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode()
	{
		if (!Z_Registration_Info_UEnum_ETextAssetCommandletMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextAssetCommandletMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ETextAssetCommandletMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextAssetCommandletMode.InnerSingleton;
	}
	void UTextAssetCommandlet::StaticRegisterNativesUTextAssetCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextAssetCommandlet);
	UClass* Z_Construct_UClass_UTextAssetCommandlet_NoRegister()
	{
		return UTextAssetCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UTextAssetCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextAssetCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAssetCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/TextAssetCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/TextAssetCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAssetCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAssetCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextAssetCommandlet_Statics::ClassParams = {
		&UTextAssetCommandlet::StaticClass,
		"Editor",
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
		METADATA_PARAMS(Z_Construct_UClass_UTextAssetCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAssetCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAssetCommandlet()
	{
		if (!Z_Registration_Info_UClass_UTextAssetCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextAssetCommandlet.OuterSingleton, Z_Construct_UClass_UTextAssetCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextAssetCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextAssetCommandlet>()
	{
		return UTextAssetCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAssetCommandlet);
	UTextAssetCommandlet::~UTextAssetCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::EnumInfo[] = {
		{ ETextAssetCommandletMode_StaticEnum, TEXT("ETextAssetCommandletMode"), &Z_Registration_Info_UEnum_ETextAssetCommandletMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2933246225U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextAssetCommandlet, UTextAssetCommandlet::StaticClass, TEXT("UTextAssetCommandlet"), &Z_Registration_Info_UClass_UTextAssetCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextAssetCommandlet), 760477363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_1303775767(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
