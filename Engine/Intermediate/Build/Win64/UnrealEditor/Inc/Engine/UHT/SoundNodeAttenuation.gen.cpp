// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeAttenuation.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeAttenuation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAttenuation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeAttenuation::StaticRegisterNativesUSoundNodeAttenuation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeAttenuation);
	UClass* Z_Construct_UClass_USoundNodeAttenuation_NoRegister()
	{
		return USoundNodeAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines how a sound's volume changes based on distance to the listener\n */" },
		{ "DisplayName", "Attenuation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeAttenuation.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
		{ "ToolTip", "Defines how a sound's volume changes based on distance to the listener" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeAttenuation, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeAttenuation, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 895530132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	void Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((USoundNodeAttenuation*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeAttenuation), &Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeAttenuation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeAttenuation_Statics::ClassParams = {
		&USoundNodeAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeAttenuation()
	{
		if (!Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton, Z_Construct_UClass_USoundNodeAttenuation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeAttenuation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeAttenuation>()
	{
		return USoundNodeAttenuation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeAttenuation);
	USoundNodeAttenuation::~USoundNodeAttenuation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeAttenuation, USoundNodeAttenuation::StaticClass, TEXT("USoundNodeAttenuation"), &Z_Registration_Info_UClass_USoundNodeAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeAttenuation), 1775708033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_3644734482(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeAttenuation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
