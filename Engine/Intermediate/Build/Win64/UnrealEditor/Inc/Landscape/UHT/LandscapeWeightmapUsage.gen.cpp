// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeWeightmapUsage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeWeightmapUsage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeWeightmapUsage::StaticRegisterNativesULandscapeWeightmapUsage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeWeightmapUsage);
	UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister()
	{
		return ULandscapeWeightmapUsage::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeWeightmapUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelUsage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChannelUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeWeightmapUsage.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage = { "ChannelUsage", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ChannelUsage, ULandscapeWeightmapUsage), nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightmapUsage, ChannelUsage), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid = { "LayerGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightmapUsage, LayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightmapUsage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams = {
		&ULandscapeWeightmapUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeWeightmapUsage()
	{
		if (!Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton, Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeWeightmapUsage>()
	{
		return ULandscapeWeightmapUsage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightmapUsage);
	ULandscapeWeightmapUsage::~ULandscapeWeightmapUsage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeWeightmapUsage, ULandscapeWeightmapUsage::StaticClass, TEXT("ULandscapeWeightmapUsage"), &Z_Registration_Info_UClass_ULandscapeWeightmapUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeWeightmapUsage), 2006441996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_1791318887(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
