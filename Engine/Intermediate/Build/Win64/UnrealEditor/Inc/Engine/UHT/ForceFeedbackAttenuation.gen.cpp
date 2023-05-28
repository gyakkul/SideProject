// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackAttenuation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FForceFeedbackAttenuationSettings>() == std::is_polymorphic<FBaseAttenuationSettings>(), "USTRUCT FForceFeedbackAttenuationSettings cannot be polymorphic unless super FBaseAttenuationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings;
class UScriptStruct* FForceFeedbackAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackAttenuationSettings>()
{
	return FForceFeedbackAttenuationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The struct for defining the properties used when determining attenuation for a force feedback effect */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "The struct for defining the properties used when determining attenuation for a force feedback effect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBaseAttenuationSettings,
		&NewStructOps,
		"ForceFeedbackAttenuationSettings",
		sizeof(FForceFeedbackAttenuationSettings),
		alignof(FForceFeedbackAttenuationSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings.InnerSingleton;
	}
	void UForceFeedbackAttenuation::StaticRegisterNativesUForceFeedbackAttenuation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackAttenuation);
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister()
	{
		return UForceFeedbackAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\n * of the properties for multiple attenuation components\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameFramework/ForceFeedbackAttenuation.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\nof the properties for multiple attenuation components" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackAttenuation, Attenuation), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData)) }; // 1188219074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackAttenuation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams = {
		&UForceFeedbackAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton, Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackAttenuation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackAttenuation>()
	{
		return UForceFeedbackAttenuation::StaticClass();
	}
	UForceFeedbackAttenuation::UForceFeedbackAttenuation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackAttenuation);
	UForceFeedbackAttenuation::~UForceFeedbackAttenuation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ScriptStructInfo[] = {
		{ FForceFeedbackAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::NewStructOps, TEXT("ForceFeedbackAttenuationSettings"), &Z_Registration_Info_UScriptStruct_ForceFeedbackAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackAttenuationSettings), 1188219074U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackAttenuation, UForceFeedbackAttenuation::StaticClass, TEXT("UForceFeedbackAttenuation"), &Z_Registration_Info_UClass_UForceFeedbackAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackAttenuation), 2159379781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_241521472(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackAttenuation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
