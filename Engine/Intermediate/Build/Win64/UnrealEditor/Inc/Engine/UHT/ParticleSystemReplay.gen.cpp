// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemReplay() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame;
class UScriptStruct* FParticleEmitterReplayFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEmitterReplayFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEmitterReplayFrame>()
{
	return FParticleEmitterReplayFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEmitterReplayFrame",
		sizeof(FParticleEmitterReplayFrame),
		alignof(FParticleEmitterReplayFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton, Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame;
class UScriptStruct* FParticleSystemReplayFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemReplayFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemReplayFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemReplayFrame>()
{
	return FParticleSystemReplayFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single frame within this replay */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "A single frame within this replay" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleSystemReplayFrame",
		sizeof(FParticleSystemReplayFrame),
		alignof(FParticleSystemReplayFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton, Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton;
	}
	void UParticleSystemReplay::StaticRegisterNativesUParticleSystemReplay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemReplay);
	UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister()
	{
		return UParticleSystemReplay::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ParticleSystemReplay" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleSystemReplay.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData[] = {
		{ "Category", "ParticleSystemReplay" },
		{ "Comment", "/** Unique ID number for this replay clip */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "Unique ID number for this replay clip" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber = { "ClipIDNumber", nullptr, (EPropertyFlags)0x0010000000202001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemReplay, ClipIDNumber), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemReplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams = {
		&UParticleSystemReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemReplay()
	{
		if (!Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton, Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleSystemReplay>()
	{
		return UParticleSystemReplay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemReplay);
	UParticleSystemReplay::~UParticleSystemReplay() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ScriptStructInfo[] = {
		{ FParticleEmitterReplayFrame::StaticStruct, Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::NewStructOps, TEXT("ParticleEmitterReplayFrame"), &Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEmitterReplayFrame), 3147586766U) },
		{ FParticleSystemReplayFrame::StaticStruct, Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::NewStructOps, TEXT("ParticleSystemReplayFrame"), &Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSystemReplayFrame), 4047122145U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleSystemReplay, UParticleSystemReplay::StaticClass, TEXT("UParticleSystemReplay"), &Z_Registration_Info_UClass_UParticleSystemReplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemReplay), 1070740903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_2759745396(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
