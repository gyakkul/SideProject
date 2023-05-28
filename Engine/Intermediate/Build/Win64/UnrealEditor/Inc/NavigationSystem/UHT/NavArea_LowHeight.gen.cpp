// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreas/NavArea_LowHeight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea_LowHeight);
	UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister()
	{
		return UNavArea_LowHeight::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_LowHeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_LowHeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone. */" },
		{ "IncludePath", "NavAreas/NavArea_LowHeight.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_LowHeight.h" },
		{ "ToolTip", "Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_LowHeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_LowHeight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams = {
		&UNavArea_LowHeight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_LowHeight()
	{
		if (!Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton, Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavArea_LowHeight.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_LowHeight>()
	{
		return UNavArea_LowHeight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_LowHeight);
	UNavArea_LowHeight::~UNavArea_LowHeight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea_LowHeight, UNavArea_LowHeight::StaticClass, TEXT("UNavArea_LowHeight"), &Z_Registration_Info_UClass_UNavArea_LowHeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea_LowHeight), 3209713694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_492264217(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
