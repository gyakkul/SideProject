// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayVolumeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayVolumeSubsystem() {}
// Cross Module References
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeSubsystem();
	AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_AudioGameplayVolume();
// End Cross Module References
	void UAudioGameplayVolumeSubsystem::StaticRegisterNativesUAudioGameplayVolumeSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayVolumeSubsystem);
	UClass* Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister()
	{
		return UAudioGameplayVolumeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AGVComponents_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AGVComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AGVComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AGVComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplayVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UAudioGameplayVolumeSubsystem\n */" },
		{ "IncludePath", "AudioGameplayVolumeSubsystem.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeSubsystem.h" },
		{ "ToolTip", "UAudioGameplayVolumeSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_ValueProp = { "AGVComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAudioGameplayVolumeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_Key_KeyProp = { "AGVComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData[] = {
		{ "Comment", "// Components in our system\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioGameplayVolumeSubsystem.h" },
		{ "ToolTip", "Components in our system" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents = { "AGVComponents", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioGameplayVolumeSubsystem, AGVComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::NewProp_AGVComponents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioGameplayVolumeSubsystem, IActiveSoundUpdateInterface), false },  // 1417036131
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGameplayVolumeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::ClassParams = {
		&UAudioGameplayVolumeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayVolumeSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton, Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem.OuterSingleton;
	}
	template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<UAudioGameplayVolumeSubsystem>()
	{
		return UAudioGameplayVolumeSubsystem::StaticClass();
	}
	UAudioGameplayVolumeSubsystem::UAudioGameplayVolumeSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayVolumeSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayVolumeSubsystem, UAudioGameplayVolumeSubsystem::StaticClass, TEXT("UAudioGameplayVolumeSubsystem"), &Z_Registration_Info_UClass_UAudioGameplayVolumeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayVolumeSubsystem), 3511119232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_1405773977(TEXT("/Script/AudioGameplayVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
