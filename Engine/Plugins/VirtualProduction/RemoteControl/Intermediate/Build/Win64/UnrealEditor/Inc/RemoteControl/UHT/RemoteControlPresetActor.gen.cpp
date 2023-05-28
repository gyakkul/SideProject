// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlPresetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlPresetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	REMOTECONTROL_API UClass* Z_Construct_UClass_ARemoteControlPresetActor();
	REMOTECONTROL_API UClass* Z_Construct_UClass_ARemoteControlPresetActor_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	void ARemoteControlPresetActor::StaticRegisterNativesARemoteControlPresetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARemoteControlPresetActor);
	UClass* Z_Construct_UClass_ARemoteControlPresetActor_NoRegister()
	{
		return ARemoteControlPresetActor::StaticClass();
	}
	struct Z_Construct_UClass_ARemoteControlPresetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARemoteControlPresetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARemoteControlPresetActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that wraps a remote control preset, allows linking a specific preset to a level.\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input Replication Collision Actor Cooking" },
		{ "IncludePath", "RemoteControlPresetActor.h" },
		{ "ModuleRelativePath", "Public/RemoteControlPresetActor.h" },
		{ "ToolTip", "Actor that wraps a remote control preset, allows linking a specific preset to a level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARemoteControlPresetActor_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/RemoteControlPresetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARemoteControlPresetActor_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARemoteControlPresetActor, Preset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARemoteControlPresetActor_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteControlPresetActor_Statics::NewProp_Preset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARemoteControlPresetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARemoteControlPresetActor_Statics::NewProp_Preset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARemoteControlPresetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARemoteControlPresetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARemoteControlPresetActor_Statics::ClassParams = {
		&ARemoteControlPresetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARemoteControlPresetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteControlPresetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARemoteControlPresetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARemoteControlPresetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARemoteControlPresetActor()
	{
		if (!Z_Registration_Info_UClass_ARemoteControlPresetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARemoteControlPresetActor.OuterSingleton, Z_Construct_UClass_ARemoteControlPresetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARemoteControlPresetActor.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<ARemoteControlPresetActor>()
	{
		return ARemoteControlPresetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARemoteControlPresetActor);
	ARemoteControlPresetActor::~ARemoteControlPresetActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARemoteControlPresetActor, ARemoteControlPresetActor::StaticClass, TEXT("ARemoteControlPresetActor"), &Z_Registration_Info_UClass_ARemoteControlPresetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARemoteControlPresetActor), 3616539540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_1338972822(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
