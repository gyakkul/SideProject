// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/ComposurePlayerCompositingInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePlayerCompositingInterface() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UComposurePlayerCompositingInterface::StaticRegisterNativesUComposurePlayerCompositingInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePlayerCompositingInterface);
	UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister()
	{
		return UComposurePlayerCompositingInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ComposurePlayerCompositingInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IComposurePlayerCompositingInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::ClassParams = {
		&UComposurePlayerCompositingInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface()
	{
		if (!Z_Registration_Info_UClass_UComposurePlayerCompositingInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePlayerCompositingInterface.OuterSingleton, Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePlayerCompositingInterface.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePlayerCompositingInterface>()
	{
		return UComposurePlayerCompositingInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePlayerCompositingInterface);
	UComposurePlayerCompositingInterface::~UComposurePlayerCompositingInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePlayerCompositingInterface, UComposurePlayerCompositingInterface::StaticClass, TEXT("UComposurePlayerCompositingInterface"), &Z_Registration_Info_UClass_UComposurePlayerCompositingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePlayerCompositingInterface), 890134009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_1610652563(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
