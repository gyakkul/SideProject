// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/CookOnTheSide/CookOnTheFlyServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookOnTheFlyServer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECookMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECookTickFlags();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECookMode;
	static UEnum* ECookMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECookMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECookMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECookMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECookMode"));
		}
		return Z_Registration_Info_UEnum_ECookMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECookMode::Type>()
	{
		return ECookMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ECookMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enumerators[] = {
		{ "ECookMode::CookOnTheFly", (int64)ECookMode::CookOnTheFly },
		{ "ECookMode::CookOnTheFlyFromTheEditor", (int64)ECookMode::CookOnTheFlyFromTheEditor },
		{ "ECookMode::CookByTheBookFromTheEditor", (int64)ECookMode::CookByTheBookFromTheEditor },
		{ "ECookMode::CookByTheBook", (int64)ECookMode::CookByTheBook },
		{ "ECookMode::CookWorker", (int64)ECookMode::CookWorker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enum_MetaDataParams[] = {
		{ "CookByTheBook.Comment", "/** Cooking by the book (not in the editor). */" },
		{ "CookByTheBook.Name", "ECookMode::CookByTheBook" },
		{ "CookByTheBook.ToolTip", "Cooking by the book (not in the editor)." },
		{ "CookByTheBookFromTheEditor.Comment", "/** Precook all resources while in the editor. */" },
		{ "CookByTheBookFromTheEditor.Name", "ECookMode::CookByTheBookFromTheEditor" },
		{ "CookByTheBookFromTheEditor.ToolTip", "Precook all resources while in the editor." },
		{ "CookOnTheFly.Comment", "/** Default mode, handles requests from network. */" },
		{ "CookOnTheFly.Name", "ECookMode::CookOnTheFly" },
		{ "CookOnTheFly.ToolTip", "Default mode, handles requests from network." },
		{ "CookOnTheFlyFromTheEditor.Comment", "/** Cook on the side. */" },
		{ "CookOnTheFlyFromTheEditor.Name", "ECookMode::CookOnTheFlyFromTheEditor" },
		{ "CookOnTheFlyFromTheEditor.ToolTip", "Cook on the side." },
		{ "CookWorker.Comment", "/** Commandlet helper for a separate director process. Director might be in any of the other modes. */" },
		{ "CookWorker.Name", "ECookMode::CookWorker" },
		{ "CookWorker.ToolTip", "Commandlet helper for a separate director process. Director might be in any of the other modes." },
		{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ECookMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ECookMode",
		"ECookMode::Type",
		Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECookMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ECookMode()
	{
		if (!Z_Registration_Info_UEnum_ECookMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECookMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ECookMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECookMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECookTickFlags;
	static UEnum* ECookTickFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECookTickFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECookTickFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECookTickFlags, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECookTickFlags"));
		}
		return Z_Registration_Info_UEnum_ECookTickFlags.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECookTickFlags>()
	{
		return ECookTickFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enumerators[] = {
		{ "ECookTickFlags::None", (int64)ECookTickFlags::None },
		{ "ECookTickFlags::MarkupInUsePackages", (int64)ECookTickFlags::MarkupInUsePackages },
		{ "ECookTickFlags::HideProgressDisplay", (int64)ECookTickFlags::HideProgressDisplay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enum_MetaDataParams[] = {
		{ "HideProgressDisplay.Comment", "/** Markup packages for partial gc */" },
		{ "HideProgressDisplay.Name", "ECookTickFlags::HideProgressDisplay" },
		{ "HideProgressDisplay.ToolTip", "Markup packages for partial gc" },
		{ "MarkupInUsePackages.Comment", "/* no flags */" },
		{ "MarkupInUsePackages.Name", "ECookTickFlags::MarkupInUsePackages" },
		{ "MarkupInUsePackages.ToolTip", "no flags" },
		{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
		{ "None.Name", "ECookTickFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ECookTickFlags",
		"ECookTickFlags",
		Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ECookTickFlags()
	{
		if (!Z_Registration_Info_UEnum_ECookTickFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECookTickFlags.InnerSingleton, Z_Construct_UEnum_UnrealEd_ECookTickFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECookTickFlags.InnerSingleton;
	}
	void UCookOnTheFlyServer::StaticRegisterNativesUCookOnTheFlyServer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookOnTheFlyServer);
	UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister()
	{
		return UCookOnTheFlyServer::StaticClass();
	}
	struct Z_Construct_UClass_UCookOnTheFlyServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookOnTheFlyServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CookOnTheSide/CookOnTheFlyServer.h" },
		{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookOnTheFlyServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookOnTheFlyServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookOnTheFlyServer_Statics::ClassParams = {
		&UCookOnTheFlyServer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookOnTheFlyServer()
	{
		if (!Z_Registration_Info_UClass_UCookOnTheFlyServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookOnTheFlyServer.OuterSingleton, Z_Construct_UClass_UCookOnTheFlyServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookOnTheFlyServer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCookOnTheFlyServer>()
	{
		return UCookOnTheFlyServer::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::EnumInfo[] = {
		{ ECookMode_StaticEnum, TEXT("ECookMode"), &Z_Registration_Info_UEnum_ECookMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 469741436U) },
		{ ECookTickFlags_StaticEnum, TEXT("ECookTickFlags"), &Z_Registration_Info_UEnum_ECookTickFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2888898101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookOnTheFlyServer, UCookOnTheFlyServer::StaticClass, TEXT("UCookOnTheFlyServer"), &Z_Registration_Info_UClass_UCookOnTheFlyServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookOnTheFlyServer), 1572971589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_27197003(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
