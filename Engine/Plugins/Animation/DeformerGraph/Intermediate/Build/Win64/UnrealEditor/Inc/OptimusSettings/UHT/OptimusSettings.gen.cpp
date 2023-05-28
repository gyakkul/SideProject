// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	OPTIMUSSETTINGS_API UClass* Z_Construct_UClass_UOptimusSettings();
	OPTIMUSSETTINGS_API UClass* Z_Construct_UClass_UOptimusSettings_NoRegister();
	OPTIMUSSETTINGS_API UEnum* Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode();
	UPackage* Z_Construct_UPackage__Script_OptimusSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode;
	static UEnum* EOptimusDefaultDeformerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode, (UObject*)Z_Construct_UPackage__Script_OptimusSettings(), TEXT("EOptimusDefaultDeformerMode"));
		}
		return Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.OuterSingleton;
	}
	template<> OPTIMUSSETTINGS_API UEnum* StaticEnum<EOptimusDefaultDeformerMode>()
	{
		return EOptimusDefaultDeformerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enumerators[] = {
		{ "EOptimusDefaultDeformerMode::Never", (int64)EOptimusDefaultDeformerMode::Never },
		{ "EOptimusDefaultDeformerMode::SkinCacheOnly", (int64)EOptimusDefaultDeformerMode::SkinCacheOnly },
		{ "EOptimusDefaultDeformerMode::Always", (int64)EOptimusDefaultDeformerMode::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always apply the default deformers. */" },
		{ "Always.Name", "EOptimusDefaultDeformerMode::Always" },
		{ "Always.ToolTip", "Always apply the default deformers." },
		{ "ModuleRelativePath", "Public/OptimusSettings.h" },
		{ "Never.Comment", "/** Never apply the default deformers. */" },
		{ "Never.Name", "EOptimusDefaultDeformerMode::Never" },
		{ "Never.ToolTip", "Never apply the default deformers." },
		{ "SkinCacheOnly.Comment", "/** Only apply default deformers as replacement for the GPU Skin Cache. */" },
		{ "SkinCacheOnly.Name", "EOptimusDefaultDeformerMode::SkinCacheOnly" },
		{ "SkinCacheOnly.ToolTip", "Only apply default deformers as replacement for the GPU Skin Cache." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusSettings,
		nullptr,
		"EOptimusDefaultDeformerMode",
		"EOptimusDefaultDeformerMode",
		Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton, Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode.InnerSingleton;
	}
	void UOptimusSettings::StaticRegisterNativesUOptimusSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSettings);
	UClass* Z_Construct_UClass_UOptimusSettings_NoRegister()
	{
		return UOptimusSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeformer_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDeformer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRecomputeTangentDeformer_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultRecomputeTangentDeformer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "DeformerGraph" },
		{ "IncludePath", "OptimusSettings.h" },
		{ "ModuleRelativePath", "Public/OptimusSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode_MetaData[] = {
		{ "Category", "DeformerGraph" },
		{ "Comment", "/** Set when skinned meshes should have a default deformer applied. */" },
		{ "ModuleRelativePath", "Public/OptimusSettings.h" },
		{ "ToolTip", "Set when skinned meshes should have a default deformer applied." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode = { "DefaultMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSettings, DefaultMode), Z_Construct_UEnum_OptimusSettings_EOptimusDefaultDeformerMode, METADATA_PARAMS(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode_MetaData)) }; // 3285741285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultDeformer_MetaData[] = {
		{ "AllowedClasses", "/Script/OptimusCore.OptimusDeformer" },
		{ "Category", "DeformerGraph" },
		{ "Comment", "/** A default deformer that will be used on a skinned mesh if no other deformer has been set. */" },
		{ "EditCondition", "DefaultMode != EOptimusDefaultDeformerMode::Never" },
		{ "ModuleRelativePath", "Public/OptimusSettings.h" },
		{ "ToolTip", "A default deformer that will be used on a skinned mesh if no other deformer has been set." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultDeformer = { "DefaultDeformer", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSettings, DefaultDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultDeformer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultRecomputeTangentDeformer_MetaData[] = {
		{ "AllowedClasses", "/Script/OptimusCore.OptimusDeformer" },
		{ "Category", "DeformerGraph" },
		{ "Comment", "/** A default deformer that will be used on a skinned mesh if no other deformer has been set, and if the mesh has requested to recompute tangets. */" },
		{ "EditCondition", "DefaultMode != EOptimusDefaultDeformerMode::Never" },
		{ "ModuleRelativePath", "Public/OptimusSettings.h" },
		{ "ToolTip", "A default deformer that will be used on a skinned mesh if no other deformer has been set, and if the mesh has requested to recompute tangets." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultRecomputeTangentDeformer = { "DefaultRecomputeTangentDeformer", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSettings, DefaultRecomputeTangentDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultRecomputeTangentDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultRecomputeTangentDeformer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultDeformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSettings_Statics::NewProp_DefaultRecomputeTangentDeformer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSettings_Statics::ClassParams = {
		&UOptimusSettings::StaticClass,
		"DeformerGraph",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSettings()
	{
		if (!Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton, Z_Construct_UClass_UOptimusSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSettings.OuterSingleton;
	}
	template<> OPTIMUSSETTINGS_API UClass* StaticClass<UOptimusSettings>()
	{
		return UOptimusSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSettings);
	UOptimusSettings::~UOptimusSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::EnumInfo[] = {
		{ EOptimusDefaultDeformerMode_StaticEnum, TEXT("EOptimusDefaultDeformerMode"), &Z_Registration_Info_UEnum_EOptimusDefaultDeformerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285741285U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSettings, UOptimusSettings::StaticClass, TEXT("UOptimusSettings"), &Z_Registration_Info_UClass_UOptimusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSettings), 714196829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_2050991019(TEXT("/Script/OptimusSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
