// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreas/NavArea_Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Obstacle() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Obstacle();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Obstacle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_Obstacle::StaticRegisterNativesUNavArea_Obstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_Obstacle);
	UClass* Z_Construct_UClass_UNavArea_Obstacle_NoRegister()
	{
		return UNavArea_Obstacle::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Obstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Obstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Obstacle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** In general represents a high cost area, that shouldn't be traversed by anyone unless no other path exist.*/" },
		{ "IncludePath", "NavAreas/NavArea_Obstacle.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Obstacle.h" },
		{ "ToolTip", "In general represents a high cost area, that shouldn't be traversed by anyone unless no other path exist." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Obstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Obstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Obstacle_Statics::ClassParams = {
		&UNavArea_Obstacle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Obstacle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Obstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Obstacle()
	{
		if (!Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton, Z_Construct_UClass_UNavArea_Obstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavArea_Obstacle.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Obstacle>()
	{
		return UNavArea_Obstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Obstacle);
	UNavArea_Obstacle::~UNavArea_Obstacle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_Obstacle, UNavArea_Obstacle::StaticClass, TEXT("UNavArea_Obstacle"), &Z_Registration_Info_UClass_UNavArea_Obstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_Obstacle), 2984010929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_3223512759(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
