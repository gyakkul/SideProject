// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/MultiUserServerUserPreferences.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserServerUserPreferences() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UMultiUserServerUserPreferences();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UMultiUserServerUserPreferences_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiUserServer();
// End Cross Module References
	void UMultiUserServerUserPreferences::StaticRegisterNativesUMultiUserServerUserPreferences()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiUserServerUserPreferences);
	UClass* Z_Construct_UClass_UMultiUserServerUserPreferences_NoRegister()
	{
		return UMultiUserServerUserPreferences::StaticClass();
	}
	struct Z_Construct_UClass_UMultiUserServerUserPreferences_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarnUserAboutMuting_MetaData[];
#endif
		static void NewProp_bWarnUserAboutMuting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnUserAboutMuting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarnUserAboutUnmuting_MetaData[];
#endif
		static void NewProp_bWarnUserAboutUnmuting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnUserAboutUnmuting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/MultiUserServerUserPreferences.h" },
		{ "ModuleRelativePath", "Private/Settings/MultiUserServerUserPreferences.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MultiUserServerUserPreferences.h" },
	};
#endif
	void Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting_SetBit(void* Obj)
	{
		((UMultiUserServerUserPreferences*)Obj)->bWarnUserAboutMuting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting = { "bWarnUserAboutMuting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMultiUserServerUserPreferences), &Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MultiUserServerUserPreferences.h" },
	};
#endif
	void Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting_SetBit(void* Obj)
	{
		((UMultiUserServerUserPreferences*)Obj)->bWarnUserAboutUnmuting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting = { "bWarnUserAboutUnmuting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMultiUserServerUserPreferences), &Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutMuting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::NewProp_bWarnUserAboutUnmuting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiUserServerUserPreferences>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::ClassParams = {
		&UMultiUserServerUserPreferences::StaticClass,
		"MultiUserServerUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiUserServerUserPreferences()
	{
		if (!Z_Registration_Info_UClass_UMultiUserServerUserPreferences.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiUserServerUserPreferences.OuterSingleton, Z_Construct_UClass_UMultiUserServerUserPreferences_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiUserServerUserPreferences.OuterSingleton;
	}
	template<> MULTIUSERSERVER_API UClass* StaticClass<UMultiUserServerUserPreferences>()
	{
		return UMultiUserServerUserPreferences::StaticClass();
	}
	UMultiUserServerUserPreferences::UMultiUserServerUserPreferences(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiUserServerUserPreferences);
	UMultiUserServerUserPreferences::~UMultiUserServerUserPreferences() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerUserPreferences_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerUserPreferences_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiUserServerUserPreferences, UMultiUserServerUserPreferences::StaticClass, TEXT("UMultiUserServerUserPreferences"), &Z_Registration_Info_UClass_UMultiUserServerUserPreferences, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiUserServerUserPreferences), 586735909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerUserPreferences_h_2641038973(TEXT("/Script/MultiUserServer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerUserPreferences_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Settings_MultiUserServerUserPreferences_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
