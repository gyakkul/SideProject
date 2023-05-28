// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VPRolesSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPRolesSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VPRoles();
	VPROLES_API UClass* Z_Construct_UClass_UVPRolesUserSettings();
	VPROLES_API UClass* Z_Construct_UClass_UVPRolesUserSettings_NoRegister();
// End Cross Module References
	void UVPRolesUserSettings::StaticRegisterNativesUVPRolesUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPRolesUserSettings);
	UClass* Z_Construct_UClass_UVPRolesUserSettings_NoRegister()
	{
		return UVPRolesUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVPRolesUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoleSources_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleSources_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RoleSources;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedRoles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedRoles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPRolesUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPRoles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPRolesUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPRolesSettings.h" },
		{ "ModuleRelativePath", "Private/VPRolesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_Roles_MetaData[] = {
		{ "Comment", "/**\n\x09 * The machine role(s) in a virtual production context.\n\x09 * @note The role may be override via the command line, \"-VPRole=[Role.SubRole1|Role.SubRole2]\"\n\x09 */" },
		{ "ModuleRelativePath", "Private/VPRolesSettings.h" },
		{ "ToolTip", "The machine role(s) in a virtual production context.\n@note The role may be override via the command line, \"-VPRole=[Role.SubRole1|Role.SubRole2]\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPRolesUserSettings, Roles), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_Roles_MetaData)) }; // 3057219007
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources_ElementProp = { "RoleSources", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources_MetaData[] = {
		{ "Comment", "/** The files that contain the available VP Roles. */" },
		{ "ModuleRelativePath", "Private/VPRolesSettings.h" },
		{ "ToolTip", "The files that contain the available VP Roles." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources = { "RoleSources", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPRolesUserSettings, RoleSources), METADATA_PARAMS(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles_Inner = { "CachedRoles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles_MetaData[] = {
		{ "Comment", "/** Cached available roles since the list isn't available outside of editor. */" },
		{ "ModuleRelativePath", "Private/VPRolesSettings.h" },
		{ "ToolTip", "Cached available roles since the list isn't available outside of editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles = { "CachedRoles", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPRolesUserSettings, CachedRoles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPRolesUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_Roles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_RoleSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPRolesUserSettings_Statics::NewProp_CachedRoles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPRolesUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPRolesUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPRolesUserSettings_Statics::ClassParams = {
		&UVPRolesUserSettings::StaticClass,
		"UserVPRoles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPRolesUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPRolesUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVPRolesUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPRolesUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPRolesUserSettings()
	{
		if (!Z_Registration_Info_UClass_UVPRolesUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPRolesUserSettings.OuterSingleton, Z_Construct_UClass_UVPRolesUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPRolesUserSettings.OuterSingleton;
	}
	template<> VPROLES_API UClass* StaticClass<UVPRolesUserSettings>()
	{
		return UVPRolesUserSettings::StaticClass();
	}
	UVPRolesUserSettings::UVPRolesUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPRolesUserSettings);
	UVPRolesUserSettings::~UVPRolesUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPRolesUserSettings, UVPRolesUserSettings::StaticClass, TEXT("UVPRolesUserSettings"), &Z_Registration_Info_UClass_UVPRolesUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPRolesUserSettings), 2718209662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_455358121(TEXT("/Script/VPRoles"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
