// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GauntletTestController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntletTestController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gauntlet();
// End Cross Module References
	void UGauntletTestController::StaticRegisterNativesUGauntletTestController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGauntletTestController);
	UClass* Z_Construct_UClass_UGauntletTestController_NoRegister()
	{
		return UGauntletTestController::StaticClass();
	}
	struct Z_Construct_UClass_UGauntletTestController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGauntletTestController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGauntletTestController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Base class for games to implement test controllers that use the Gauntlet native\n *\x09""framework. This is a very thin class that is created automatically based on \n *\x09""command line params (-gauntlet=MyControllerName) and provides easily overridden\n *\x09""functions that represent state changes and ticking\n *\n *\x09In essence your derived class should implement logic that starts and monitors\n *\x09""a test, then calls EndTest(Result) when the desired criteria are met (or not!)\n */" },
		{ "IncludePath", "GauntletTestController.h" },
		{ "ModuleRelativePath", "Public/GauntletTestController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for games to implement test controllers that use the Gauntlet native\nframework. This is a very thin class that is created automatically based on\ncommand line params (-gauntlet=MyControllerName) and provides easily overridden\nfunctions that represent state changes and ticking\n\nIn essence your derived class should implement logic that starts and monitors\na test, then calls EndTest(Result) when the desired criteria are met (or not!)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGauntletTestController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGauntletTestController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGauntletTestController_Statics::ClassParams = {
		&UGauntletTestController::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGauntletTestController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGauntletTestController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGauntletTestController()
	{
		if (!Z_Registration_Info_UClass_UGauntletTestController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGauntletTestController.OuterSingleton, Z_Construct_UClass_UGauntletTestController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGauntletTestController.OuterSingleton;
	}
	template<> GAUNTLET_API UClass* StaticClass<UGauntletTestController>()
	{
		return UGauntletTestController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGauntletTestController);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGauntletTestController, UGauntletTestController::StaticClass, TEXT("UGauntletTestController"), &Z_Registration_Info_UClass_UGauntletTestController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGauntletTestController), 2290895373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestController_h_4019943941(TEXT("/Script/Gauntlet"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
