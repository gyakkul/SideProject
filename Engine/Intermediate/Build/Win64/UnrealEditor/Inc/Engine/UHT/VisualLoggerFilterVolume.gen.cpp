// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/VisualLogger/VisualLoggerFilterVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerFilterVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVisualLoggerFilterVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVisualLoggerFilterVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AVisualLoggerFilterVolume::StaticRegisterNativesAVisualLoggerFilterVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualLoggerFilterVolume);
	UClass* Z_Construct_UClass_AVisualLoggerFilterVolume_NoRegister()
	{
		return AVisualLoggerFilterVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVisualLoggerFilterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A volume to be placed in the level while browsing visual logger output.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "VisualLogger/VisualLoggerFilterVolume.h" },
		{ "ModuleRelativePath", "Public/VisualLogger/VisualLoggerFilterVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume to be placed in the level while browsing visual logger output." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualLoggerFilterVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::ClassParams = {
		&AVisualLoggerFilterVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualLoggerFilterVolume()
	{
		if (!Z_Registration_Info_UClass_AVisualLoggerFilterVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualLoggerFilterVolume.OuterSingleton, Z_Construct_UClass_AVisualLoggerFilterVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualLoggerFilterVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AVisualLoggerFilterVolume>()
	{
		return AVisualLoggerFilterVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerFilterVolume);
	AVisualLoggerFilterVolume::~AVisualLoggerFilterVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerFilterVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerFilterVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualLoggerFilterVolume, AVisualLoggerFilterVolume::StaticClass, TEXT("AVisualLoggerFilterVolume"), &Z_Registration_Info_UClass_AVisualLoggerFilterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualLoggerFilterVolume), 4095484751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerFilterVolume_h_265580170(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerFilterVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerFilterVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
