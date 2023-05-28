// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBrushActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBrushActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface();
	WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister();
// End Cross Module References
	void UWaterBrushActorInterface::StaticRegisterNativesUWaterBrushActorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBrushActorInterface);
	UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister()
	{
		return UWaterBrushActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBrushActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBrushActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBrushActorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterBrushActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBrushActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWaterBrushActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBrushActorInterface_Statics::ClassParams = {
		&UWaterBrushActorInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBrushActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBrushActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBrushActorInterface()
	{
		if (!Z_Registration_Info_UClass_UWaterBrushActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBrushActorInterface.OuterSingleton, Z_Construct_UClass_UWaterBrushActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBrushActorInterface.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBrushActorInterface>()
	{
		return UWaterBrushActorInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBrushActorInterface);
	UWaterBrushActorInterface::~UWaterBrushActorInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBrushActorInterface, UWaterBrushActorInterface::StaticClass, TEXT("UWaterBrushActorInterface"), &Z_Registration_Info_UClass_UWaterBrushActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBrushActorInterface), 2607518085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_3107998680(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
