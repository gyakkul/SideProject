// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreas/NavAreaMeta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaMeta() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavAreaMeta::StaticRegisterNativesUNavAreaMeta()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavAreaMeta);
	UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister()
	{
		return UNavAreaMeta::StaticClass();
	}
	struct Z_Construct_UClass_UNavAreaMeta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavAreaMeta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A convenience class for an area that has IsMetaArea() == true.\n *\x09""Do not use this class when determining whether an area class is \"meta\". \n *\x09""Call IsMetaArea instead. */" },
		{ "IncludePath", "NavAreas/NavAreaMeta.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavAreaMeta.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A convenience class for an area that has IsMetaArea() == true.\n   Do not use this class when determining whether an area class is \"meta\".\n   Call IsMetaArea instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavAreaMeta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavAreaMeta>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams = {
		&UNavAreaMeta::StaticClass,
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
		0x003000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavAreaMeta()
	{
		if (!Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton, Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavAreaMeta.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavAreaMeta>()
	{
		return UNavAreaMeta::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaMeta);
	UNavAreaMeta::~UNavAreaMeta() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavAreaMeta, UNavAreaMeta::StaticClass, TEXT("UNavAreaMeta"), &Z_Registration_Info_UClass_UNavAreaMeta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavAreaMeta), 3285960447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_4238136475(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
