// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTestLevelScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestLevelScript() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AFunctionalTestLevelScript::StaticRegisterNativesAFunctionalTestLevelScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTestLevelScript);
	UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister()
	{
		return AFunctionalTestLevelScript::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalTestLevelScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalTestLevelScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation Collision Rendering Transformation" },
		{ "IncludePath", "FunctionalTestLevelScript.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Classes/FunctionalTestLevelScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalTestLevelScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTestLevelScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams = {
		&AFunctionalTestLevelScript::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalTestLevelScript()
	{
		if (!Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton, Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTestLevelScript>()
	{
		return AFunctionalTestLevelScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTestLevelScript);
	AFunctionalTestLevelScript::~AFunctionalTestLevelScript() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalTestLevelScript, AFunctionalTestLevelScript::StaticClass, TEXT("AFunctionalTestLevelScript"), &Z_Registration_Info_UClass_AFunctionalTestLevelScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTestLevelScript), 2186986831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_1276323278(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
