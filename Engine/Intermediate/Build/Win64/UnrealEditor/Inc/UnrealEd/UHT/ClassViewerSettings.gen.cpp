// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/ClassViewerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassViewerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UClassViewerSettings();
	UNREALED_API UClass* Z_Construct_UClass_UClassViewerSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClassViewerDeveloperType;
	static UEnum* EClassViewerDeveloperType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClassViewerDeveloperType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClassViewerDeveloperType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EClassViewerDeveloperType"));
		}
		return Z_Registration_Info_UEnum_EClassViewerDeveloperType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EClassViewerDeveloperType>()
	{
		return EClassViewerDeveloperType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enumerators[] = {
		{ "EClassViewerDeveloperType::CVDT_None", (int64)EClassViewerDeveloperType::CVDT_None },
		{ "EClassViewerDeveloperType::CVDT_CurrentUser", (int64)EClassViewerDeveloperType::CVDT_CurrentUser },
		{ "EClassViewerDeveloperType::CVDT_All", (int64)EClassViewerDeveloperType::CVDT_All },
		{ "EClassViewerDeveloperType::CVDT_Max", (int64)EClassViewerDeveloperType::CVDT_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The developer folder view modes used in SClassViewer */" },
		{ "CVDT_All.Comment", "/** Allow all users' developer folders to be displayed.*/" },
		{ "CVDT_All.Name", "EClassViewerDeveloperType::CVDT_All" },
		{ "CVDT_All.ToolTip", "Allow all users' developer folders to be displayed." },
		{ "CVDT_CurrentUser.Comment", "/** Allow the current user's developer folder to be displayed. */" },
		{ "CVDT_CurrentUser.Name", "EClassViewerDeveloperType::CVDT_CurrentUser" },
		{ "CVDT_CurrentUser.ToolTip", "Allow the current user's developer folder to be displayed." },
		{ "CVDT_Max.Comment", "/** Max developer type*/" },
		{ "CVDT_Max.Name", "EClassViewerDeveloperType::CVDT_Max" },
		{ "CVDT_Max.ToolTip", "Max developer type" },
		{ "CVDT_None.Comment", "/** Display no developer folders*/" },
		{ "CVDT_None.Name", "EClassViewerDeveloperType::CVDT_None" },
		{ "CVDT_None.ToolTip", "Display no developer folders" },
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "The developer folder view modes used in SClassViewer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EClassViewerDeveloperType",
		"EClassViewerDeveloperType",
		Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType()
	{
		if (!Z_Registration_Info_UEnum_EClassViewerDeveloperType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClassViewerDeveloperType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClassViewerDeveloperType.InnerSingleton;
	}
	void UClassViewerSettings::StaticRegisterNativesUClassViewerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassViewerSettings);
	UClass* Z_Construct_UClass_UClassViewerSettings_NoRegister()
	{
		return UClassViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClassViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInternalClasses_MetaData[];
#endif
		static void NewProp_DisplayInternalClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisplayInternalClasses;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeveloperFolderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperFolderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeveloperFolderType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Class Viewer's loading and saving settings.\n */" },
		{ "IncludePath", "Settings/ClassViewerSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "Implements the Class Viewer's loading and saving settings." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses_Inner = { "AllowedClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassViewerSettings, AllowedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData[] = {
		{ "Comment", "/** Whether to display internal use classes. */" },
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "Whether to display internal use classes." },
	};
#endif
	void Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_SetBit(void* Obj)
	{
		((UClassViewerSettings*)Obj)->DisplayInternalClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses = { "DisplayInternalClasses", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UClassViewerSettings), &Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData[] = {
		{ "Comment", "/** The developer folder view modes used in SClassViewer */" },
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "The developer folder view modes used in SClassViewer" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType = { "DeveloperFolderType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassViewerSettings, DeveloperFolderType), Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType, METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData)) }; // 407566408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_AllowedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassViewerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassViewerSettings_Statics::ClassParams = {
		&UClassViewerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassViewerSettings()
	{
		if (!Z_Registration_Info_UClass_UClassViewerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassViewerSettings.OuterSingleton, Z_Construct_UClass_UClassViewerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassViewerSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UClassViewerSettings>()
	{
		return UClassViewerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassViewerSettings);
	UClassViewerSettings::~UClassViewerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::EnumInfo[] = {
		{ EClassViewerDeveloperType_StaticEnum, TEXT("EClassViewerDeveloperType"), &Z_Registration_Info_UEnum_EClassViewerDeveloperType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 407566408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassViewerSettings, UClassViewerSettings::StaticClass, TEXT("UClassViewerSettings"), &Z_Registration_Info_UClass_UClassViewerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassViewerSettings), 4260323998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_2035333286(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
