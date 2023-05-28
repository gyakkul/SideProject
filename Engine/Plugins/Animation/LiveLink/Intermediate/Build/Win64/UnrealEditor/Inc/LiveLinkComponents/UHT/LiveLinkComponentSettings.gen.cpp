// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponentSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References
	void ULiveLinkComponentSettings::StaticRegisterNativesULiveLinkComponentSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkComponentSettings);
	UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister()
	{
		return ULiveLinkComponentSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControllerForRole_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultControllerForRole;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkComponentSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp = { "DefaultControllerForRole_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Default Controller class to use for the specified role */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Default Controller class to use for the specified role" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentSettings, DefaultControllerForRole), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams = {
		&ULiveLinkComponentSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponentSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkComponentSettings.OuterSingleton;
	}
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentSettings>()
	{
		return ULiveLinkComponentSettings::StaticClass();
	}
	ULiveLinkComponentSettings::ULiveLinkComponentSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentSettings);
	ULiveLinkComponentSettings::~ULiveLinkComponentSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkComponentSettings, ULiveLinkComponentSettings::StaticClass, TEXT("ULiveLinkComponentSettings"), &Z_Registration_Info_UClass_ULiveLinkComponentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkComponentSettings), 395416953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_1247294018(TEXT("/Script/LiveLinkComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
