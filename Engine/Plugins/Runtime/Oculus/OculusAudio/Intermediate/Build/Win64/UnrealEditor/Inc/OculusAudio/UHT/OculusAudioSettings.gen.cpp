// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSettings();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	void UOculusAudioSettings::StaticRegisterNativesUOculusAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioSettings);
	UClass* Z_Construct_UClass_UOculusAudioSettings_NoRegister()
	{
		return UOculusAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflections_MetaData[];
#endif
		static void NewProp_EarlyReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EarlyReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateReverberation_MetaData[];
#endif
		static void NewProp_LateReverberation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LateReverberation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropagationQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropagationQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefDown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefBack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCoefFront_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionCoefFront;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusAudioSettings.h" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_OutputSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Reverb" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_OutputSubmix = { "OutputSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, OutputSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_OutputSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_OutputSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReverbWetLevel_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReverbWetLevel = { "ReverbWetLevel", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReverbWetLevel), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReverbWetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReverbWetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections_SetBit(void* Obj)
	{
		((UOculusAudioSettings*)Obj)->EarlyReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections = { "EarlyReflections", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusAudioSettings), &Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation_SetBit(void* Obj)
	{
		((UOculusAudioSettings*)Obj)->LateReverberation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation = { "LateReverberation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusAudioSettings), &Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_PropagationQuality_MetaData[] = {
		{ "Category", "Propagation Quality" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_PropagationQuality = { "PropagationQuality", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, PropagationQuality), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_PropagationQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_PropagationQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, Width), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, Height), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, Depth), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefRight_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefRight = { "ReflectionCoefRight", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefRight), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefLeft_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefLeft = { "ReflectionCoefLeft", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefLeft), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefUp_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefUp = { "ReflectionCoefUp", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefUp), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefDown_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefDown = { "ReflectionCoefDown", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefDown), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefBack_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefBack = { "ReflectionCoefBack", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefBack), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefFront_MetaData[] = {
		{ "Category", "Room Modeling" },
		{ "ClampMax", "0.97" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/OculusAudioSettings.h" },
		{ "UIMax", "0.97" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefFront = { "ReflectionCoefFront", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSettings, ReflectionCoefFront), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefFront_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_OutputSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReverbWetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_EarlyReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_LateReverberation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_PropagationQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSettings_Statics::NewProp_ReflectionCoefFront,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioSettings_Statics::ClassParams = {
		&UOculusAudioSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioSettings.OuterSingleton, Z_Construct_UClass_UOculusAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioSettings.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioSettings>()
	{
		return UOculusAudioSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioSettings);
	UOculusAudioSettings::~UOculusAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioSettings, UOculusAudioSettings::StaticClass, TEXT("UOculusAudioSettings"), &Z_Registration_Info_UClass_UOculusAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioSettings), 1777607535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioSettings_h_788067794(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
