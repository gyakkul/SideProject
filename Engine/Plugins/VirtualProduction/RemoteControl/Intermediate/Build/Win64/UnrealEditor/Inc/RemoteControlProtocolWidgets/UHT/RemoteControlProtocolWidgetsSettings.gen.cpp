// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlProtocolWidgetsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolWidgetsSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLPROTOCOLWIDGETS_API UClass* Z_Construct_UClass_URemoteControlProtocolWidgetsSettings();
	REMOTECONTROLPROTOCOLWIDGETS_API UClass* Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolWidgets();
// End Cross Module References
	void URemoteControlProtocolWidgetsSettings::StaticRegisterNativesURemoteControlProtocolWidgetsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlProtocolWidgetsSettings);
	UClass* Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_NoRegister()
	{
		return URemoteControlProtocolWidgetsSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HiddenProtocolTypeNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenProtocolTypeNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_HiddenProtocolTypeNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreferredProtocol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remote Control Protocol Widget Settings\n */" },
		{ "IncludePath", "RemoteControlProtocolWidgetsSettings.h" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolWidgetsSettings.h" },
		{ "ToolTip", "Remote Control Protocol Widget Settings" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames_ElementProp = { "HiddenProtocolTypeNames", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** Protocol types to be hidden in the list view. */" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolWidgetsSettings.h" },
		{ "ToolTip", "Protocol types to be hidden in the list view." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames = { "HiddenProtocolTypeNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlProtocolWidgetsSettings, HiddenProtocolTypeNames), METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_PreferredProtocol_MetaData[] = {
		{ "Comment", "/** Last protocol added. Used as default in the binding list. */" },
		{ "ModuleRelativePath", "Private/RemoteControlProtocolWidgetsSettings.h" },
		{ "ToolTip", "Last protocol added. Used as default in the binding list." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_PreferredProtocol = { "PreferredProtocol", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlProtocolWidgetsSettings, PreferredProtocol), METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_PreferredProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_PreferredProtocol_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_HiddenProtocolTypeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::NewProp_PreferredProtocol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlProtocolWidgetsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::ClassParams = {
		&URemoteControlProtocolWidgetsSettings::StaticClass,
		"RemoteControlProtocolWidgets",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlProtocolWidgetsSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteControlProtocolWidgetsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlProtocolWidgetsSettings.OuterSingleton, Z_Construct_UClass_URemoteControlProtocolWidgetsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlProtocolWidgetsSettings.OuterSingleton;
	}
	template<> REMOTECONTROLPROTOCOLWIDGETS_API UClass* StaticClass<URemoteControlProtocolWidgetsSettings>()
	{
		return URemoteControlProtocolWidgetsSettings::StaticClass();
	}
	URemoteControlProtocolWidgetsSettings::URemoteControlProtocolWidgetsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlProtocolWidgetsSettings);
	URemoteControlProtocolWidgetsSettings::~URemoteControlProtocolWidgetsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_RemoteControlProtocolWidgetsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_RemoteControlProtocolWidgetsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlProtocolWidgetsSettings, URemoteControlProtocolWidgetsSettings::StaticClass, TEXT("URemoteControlProtocolWidgetsSettings"), &Z_Registration_Info_UClass_URemoteControlProtocolWidgetsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlProtocolWidgetsSettings), 889017489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_RemoteControlProtocolWidgetsSettings_h_2706106704(TEXT("/Script/RemoteControlProtocolWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_RemoteControlProtocolWidgetsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_RemoteControlProtocolWidgetsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
