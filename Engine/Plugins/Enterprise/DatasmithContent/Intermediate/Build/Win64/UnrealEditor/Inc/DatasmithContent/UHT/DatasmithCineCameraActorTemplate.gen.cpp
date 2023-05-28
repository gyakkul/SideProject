// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithCineCameraActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraActorTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate;
class UScriptStruct* FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraLookatTrackingSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraLookatTrackingSettingsTemplate>()
{
	return FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[];
#endif
		static void NewProp_bEnableLookAtTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[];
#endif
		static void NewProp_bAllowRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraLookatTrackingSettingsTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit(void* Obj)
	{
		((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bEnableLookAtTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking = { "bEnableLookAtTracking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit(void* Obj)
	{
		((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bAllowRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll = { "bAllowRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithCameraLookatTrackingSettingsTemplate",
		sizeof(FDatasmithCameraLookatTrackingSettingsTemplate),
		alignof(FDatasmithCameraLookatTrackingSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate.InnerSingleton;
	}
	void UDatasmithCineCameraActorTemplate::StaticRegisterNativesUDatasmithCineCameraActorTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCineCameraActorTemplate);
	UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister()
	{
		return UDatasmithCineCameraActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings = { "LookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithCineCameraActorTemplate, LookatTrackingSettings), Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData)) }; // 1917588172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCineCameraActorTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams = {
		&UDatasmithCineCameraActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCineCameraActorTemplate>()
	{
		return UDatasmithCineCameraActorTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCineCameraActorTemplate);
	UDatasmithCineCameraActorTemplate::~UDatasmithCineCameraActorTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithCameraLookatTrackingSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithCameraLookatTrackingSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), 1917588172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCineCameraActorTemplate, UDatasmithCineCameraActorTemplate::StaticClass, TEXT("UDatasmithCineCameraActorTemplate"), &Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCineCameraActorTemplate), 1628809799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_2601676403(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraActorTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
