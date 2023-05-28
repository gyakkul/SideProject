// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreas/NavArea_Null.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Null() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_Null::StaticRegisterNativesUNavArea_Null()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_Null);
	UClass* Z_Construct_UClass_UNavArea_Null_NoRegister()
	{
		return UNavArea_Null::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Null_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Null_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** In general represents an empty area, that cannot be traversed by anyone. Ever.*/" },
		{ "IncludePath", "NavAreas/NavArea_Null.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Null.h" },
		{ "ToolTip", "In general represents an empty area, that cannot be traversed by anyone. Ever." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Null_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Null>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Null_Statics::ClassParams = {
		&UNavArea_Null::StaticClass,
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
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Null()
	{
		if (!Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton, Z_Construct_UClass_UNavArea_Null_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavArea_Null.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Null>()
	{
		return UNavArea_Null::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Null);
	UNavArea_Null::~UNavArea_Null() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_Null, UNavArea_Null::StaticClass, TEXT("UNavArea_Null"), &Z_Registration_Info_UClass_UNavArea_Null, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_Null), 3911666594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_896326570(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Null_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
