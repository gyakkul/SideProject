// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyHLODBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyHLODBuilder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyHLODBuilder();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyHLODBuilder_NoRegister();
// End Cross Module References
	void UWaterBodyHLODBuilder::StaticRegisterNativesUWaterBodyHLODBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyHLODBuilder);
	UClass* Z_Construct_UClass_UWaterBodyHLODBuilder_NoRegister()
	{
		return UWaterBodyHLODBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyHLODBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterBodyHLODBuilder.h" },
		{ "ModuleRelativePath", "Public/WaterBodyHLODBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyHLODBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::ClassParams = {
		&UWaterBodyHLODBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x040000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyHLODBuilder()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyHLODBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyHLODBuilder.OuterSingleton, Z_Construct_UClass_UWaterBodyHLODBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyHLODBuilder.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyHLODBuilder>()
	{
		return UWaterBodyHLODBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyHLODBuilder);
	UWaterBodyHLODBuilder::~UWaterBodyHLODBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyHLODBuilder, UWaterBodyHLODBuilder::StaticClass, TEXT("UWaterBodyHLODBuilder"), &Z_Registration_Info_UClass_UWaterBodyHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyHLODBuilder), 1321263003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_1258564838(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHLODBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
