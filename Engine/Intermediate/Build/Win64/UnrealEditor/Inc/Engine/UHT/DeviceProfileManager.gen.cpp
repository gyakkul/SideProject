// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDeviceProfileManager::StaticRegisterNativesUDeviceProfileManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeviceProfileManager);
	UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister()
	{
		return UDeviceProfileManager::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceProfileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackupProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackupProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BackupProfiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceProfileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a helper class that manages all profiles in the Device\n */" },
		{ "IncludePath", "DeviceProfiles/DeviceProfileManager.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Implements a helper class that manages all profiles in the Device" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDeviceProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Holds the collection of managed profiles.\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Holds the collection of managed profiles." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeviceProfileManager, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_Inner = { "BackupProfiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDeviceProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_MetaData[] = {
		{ "Comment", "// Cached copy of profiles at load\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Cached copy of profiles at load" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles = { "BackupProfiles", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeviceProfileManager, BackupProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceProfileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams = {
		&UDeviceProfileManager::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceProfileManager()
	{
		if (!Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton, Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDeviceProfileManager>()
	{
		return UDeviceProfileManager::StaticClass();
	}
	UDeviceProfileManager::UDeviceProfileManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileManager);
	UDeviceProfileManager::~UDeviceProfileManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeviceProfileManager, UDeviceProfileManager::StaticClass, TEXT("UDeviceProfileManager"), &Z_Registration_Info_UClass_UDeviceProfileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeviceProfileManager), 1811883618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_1059033126(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
