// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ILandscapeSplineInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILandscapeSplineInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeSplineInterface::StaticRegisterNativesULandscapeSplineInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSplineInterface);
	UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister()
	{
		return ULandscapeSplineInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSplineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSplineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ILandscapeSplineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSplineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILandscapeSplineInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplineInterface_Statics::ClassParams = {
		&ULandscapeSplineInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSplineInterface()
	{
		if (!Z_Registration_Info_UClass_ULandscapeSplineInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSplineInterface.OuterSingleton, Z_Construct_UClass_ULandscapeSplineInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeSplineInterface.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplineInterface>()
	{
		return ULandscapeSplineInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineInterface);
	ULandscapeSplineInterface::~ULandscapeSplineInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSplineInterface, ULandscapeSplineInterface::StaticClass, TEXT("ULandscapeSplineInterface"), &Z_Registration_Info_UClass_ULandscapeSplineInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSplineInterface), 2418703177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_2878420248(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
