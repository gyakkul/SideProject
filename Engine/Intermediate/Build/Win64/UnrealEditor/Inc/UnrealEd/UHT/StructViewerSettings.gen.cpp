// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/StructViewerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructViewerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UStructViewerSettings();
	UNREALED_API UClass* Z_Construct_UClass_UStructViewerSettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructViewerDeveloperType;
	static UEnum* EStructViewerDeveloperType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStructViewerDeveloperType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStructViewerDeveloperType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EStructViewerDeveloperType"));
		}
		return Z_Registration_Info_UEnum_EStructViewerDeveloperType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EStructViewerDeveloperType>()
	{
		return EStructViewerDeveloperType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enumerators[] = {
		{ "EStructViewerDeveloperType::SVDT_None", (int64)EStructViewerDeveloperType::SVDT_None },
		{ "EStructViewerDeveloperType::SVDT_CurrentUser", (int64)EStructViewerDeveloperType::SVDT_CurrentUser },
		{ "EStructViewerDeveloperType::SVDT_All", (int64)EStructViewerDeveloperType::SVDT_All },
		{ "EStructViewerDeveloperType::SVDT_Max", (int64)EStructViewerDeveloperType::SVDT_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The developer folder view modes used in SStructViewer */" },
		{ "ModuleRelativePath", "Classes/Settings/StructViewerSettings.h" },
		{ "SVDT_All.Comment", "/** Allow all users' developer folders to be displayed.*/" },
		{ "SVDT_All.Name", "EStructViewerDeveloperType::SVDT_All" },
		{ "SVDT_All.ToolTip", "Allow all users' developer folders to be displayed." },
		{ "SVDT_CurrentUser.Comment", "/** Allow the current user's developer folder to be displayed. */" },
		{ "SVDT_CurrentUser.Name", "EStructViewerDeveloperType::SVDT_CurrentUser" },
		{ "SVDT_CurrentUser.ToolTip", "Allow the current user's developer folder to be displayed." },
		{ "SVDT_Max.Comment", "/** Max developer type*/" },
		{ "SVDT_Max.Name", "EStructViewerDeveloperType::SVDT_Max" },
		{ "SVDT_Max.ToolTip", "Max developer type" },
		{ "SVDT_None.Comment", "/** Display no developer folders*/" },
		{ "SVDT_None.Name", "EStructViewerDeveloperType::SVDT_None" },
		{ "SVDT_None.ToolTip", "Display no developer folders" },
		{ "ToolTip", "The developer folder view modes used in SStructViewer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EStructViewerDeveloperType",
		"EStructViewerDeveloperType",
		Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType()
	{
		if (!Z_Registration_Info_UEnum_EStructViewerDeveloperType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructViewerDeveloperType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStructViewerDeveloperType.InnerSingleton;
	}
	void UStructViewerSettings::StaticRegisterNativesUStructViewerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructViewerSettings);
	UClass* Z_Construct_UClass_UStructViewerSettings_NoRegister()
	{
		return UStructViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStructViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayInternalStructs_MetaData[];
#endif
		static void NewProp_DisplayInternalStructs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisplayInternalStructs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeveloperFolderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperFolderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeveloperFolderType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Struct Viewer's loading and saving settings.\n */" },
		{ "IncludePath", "Settings/StructViewerSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/StructViewerSettings.h" },
		{ "ToolTip", "Implements the Struct Viewer's loading and saving settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs_MetaData[] = {
		{ "Comment", "/** Whether to display internal use structs. */" },
		{ "ModuleRelativePath", "Classes/Settings/StructViewerSettings.h" },
		{ "ToolTip", "Whether to display internal use structs." },
	};
#endif
	void Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs_SetBit(void* Obj)
	{
		((UStructViewerSettings*)Obj)->DisplayInternalStructs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs = { "DisplayInternalStructs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStructViewerSettings), &Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData[] = {
		{ "Comment", "/** The developer folder view modes used in SStructViewer */" },
		{ "ModuleRelativePath", "Classes/Settings/StructViewerSettings.h" },
		{ "ToolTip", "The developer folder view modes used in SStructViewer" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType = { "DeveloperFolderType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStructViewerSettings, DeveloperFolderType), Z_Construct_UEnum_UnrealEd_EStructViewerDeveloperType, METADATA_PARAMS(Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData)) }; // 1769229035
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructViewerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DisplayInternalStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerSettings_Statics::NewProp_DeveloperFolderType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructViewerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructViewerSettings_Statics::ClassParams = {
		&UStructViewerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStructViewerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStructViewerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructViewerSettings()
	{
		if (!Z_Registration_Info_UClass_UStructViewerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructViewerSettings.OuterSingleton, Z_Construct_UClass_UStructViewerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructViewerSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UStructViewerSettings>()
	{
		return UStructViewerSettings::StaticClass();
	}
	UStructViewerSettings::UStructViewerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructViewerSettings);
	UStructViewerSettings::~UStructViewerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::EnumInfo[] = {
		{ EStructViewerDeveloperType_StaticEnum, TEXT("EStructViewerDeveloperType"), &Z_Registration_Info_UEnum_EStructViewerDeveloperType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1769229035U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructViewerSettings, UStructViewerSettings::StaticClass, TEXT("UStructViewerSettings"), &Z_Registration_Info_UClass_UStructViewerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructViewerSettings), 3067617109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_3117928557(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
