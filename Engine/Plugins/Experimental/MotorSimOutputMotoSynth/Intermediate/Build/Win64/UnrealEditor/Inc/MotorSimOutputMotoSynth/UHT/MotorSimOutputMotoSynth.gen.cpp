// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotorSimOutputMotoSynth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotorSimOutputMotoSynth() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimOutput_NoRegister();
	MOTORSIMOUTPUTMOTOSYNTH_API UClass* Z_Construct_UClass_UMotorSimOutputMotoSynth();
	MOTORSIMOUTPUTMOTOSYNTH_API UClass* Z_Construct_UClass_UMotorSimOutputMotoSynth_NoRegister();
	MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto();
	UPackage* Z_Construct_UPackage__Script_MotorSimOutputMotoSynth();
// End Cross Module References
	void UMotorSimOutputMotoSynth::StaticRegisterNativesUMotorSimOutputMotoSynth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotorSimOutputMotoSynth);
	UClass* Z_Construct_UClass_UMotorSimOutputMotoSynth_NoRegister()
	{
		return UMotorSimOutputMotoSynth::StaticClass();
	}
	struct Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponentMoto,
		(UObject* (*)())Z_Construct_UPackage__Script_MotorSimOutputMotoSynth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "MotorSimOutputMotoSynth.h" },
		{ "ModuleRelativePath", "Public/MotorSimOutputMotoSynth.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioMotorSimOutput_NoRegister, (int32)VTABLE_OFFSET(UMotorSimOutputMotoSynth, IAudioMotorSimOutput), false },  // 798049585
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotorSimOutputMotoSynth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::ClassParams = {
		&UMotorSimOutputMotoSynth::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotorSimOutputMotoSynth()
	{
		if (!Z_Registration_Info_UClass_UMotorSimOutputMotoSynth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotorSimOutputMotoSynth.OuterSingleton, Z_Construct_UClass_UMotorSimOutputMotoSynth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotorSimOutputMotoSynth.OuterSingleton;
	}
	template<> MOTORSIMOUTPUTMOTOSYNTH_API UClass* StaticClass<UMotorSimOutputMotoSynth>()
	{
		return UMotorSimOutputMotoSynth::StaticClass();
	}
	UMotorSimOutputMotoSynth::UMotorSimOutputMotoSynth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotorSimOutputMotoSynth);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotorSimOutputMotoSynth_Source_MotorSimOutputMotoSynth_Public_MotorSimOutputMotoSynth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotorSimOutputMotoSynth_Source_MotorSimOutputMotoSynth_Public_MotorSimOutputMotoSynth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotorSimOutputMotoSynth, UMotorSimOutputMotoSynth::StaticClass, TEXT("UMotorSimOutputMotoSynth"), &Z_Registration_Info_UClass_UMotorSimOutputMotoSynth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotorSimOutputMotoSynth), 2115068049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotorSimOutputMotoSynth_Source_MotorSimOutputMotoSynth_Public_MotorSimOutputMotoSynth_h_2261620145(TEXT("/Script/MotorSimOutputMotoSynth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotorSimOutputMotoSynth_Source_MotorSimOutputMotoSynth_Public_MotorSimOutputMotoSynth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotorSimOutputMotoSynth_Source_MotorSimOutputMotoSynth_Public_MotorSimOutputMotoSynth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
