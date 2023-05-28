// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog();
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AAtmosphericFog::StaticRegisterNativesAAtmosphericFog()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtmosphericFog);
	UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister()
	{
		return AAtmosphericFog::StaticClass();
	}
	struct Z_Construct_UClass_AAtmosphericFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AtmosphericFogComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtmosphericFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/** \n *\x09""A placeable fog actor that simulates atmospheric light scattering  \n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Atmosphere/AtmosphericFog.h" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable fog actor that simulates atmospheric light scattering\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Main fog component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Main fog component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent = { "AtmosphericFogComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtmosphericFog, AtmosphericFogComponent), Z_Construct_UClass_UAtmosphericFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow component to indicate default sun rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtmosphericFog, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtmosphericFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtmosphericFog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams = {
		&AAtmosphericFog::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtmosphericFog()
	{
		if (!Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton, Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AAtmosphericFog>()
	{
		return AAtmosphericFog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtmosphericFog);
	AAtmosphericFog::~AAtmosphericFog() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtmosphericFog, AAtmosphericFog::StaticClass, TEXT("AAtmosphericFog"), &Z_Registration_Info_UClass_AAtmosphericFog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtmosphericFog), 2775249249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_1747934164(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
