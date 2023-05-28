// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialDebugTools.h"
#include "SocialManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialDebugTools() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PARTY_API UClass* Z_Construct_UClass_USocialDebugTools();
	PARTY_API UClass* Z_Construct_UClass_USocialDebugTools_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialDebugTools::StaticRegisterNativesUSocialDebugTools()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialDebugTools);
	UClass* Z_Construct_UClass_USocialDebugTools_NoRegister()
	{
		return USocialDebugTools::StaticClass();
	}
	struct Z_Construct_UClass_USocialDebugTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialDebugTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialDebugTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SocialDebugTools.h" },
		{ "ModuleRelativePath", "Public/SocialDebugTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialDebugTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialDebugTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialDebugTools_Statics::ClassParams = {
		&USocialDebugTools::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_USocialDebugTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialDebugTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialDebugTools()
	{
		if (!Z_Registration_Info_UClass_USocialDebugTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialDebugTools.OuterSingleton, Z_Construct_UClass_USocialDebugTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialDebugTools.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialDebugTools>()
	{
		return USocialDebugTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialDebugTools);
	USocialDebugTools::~USocialDebugTools() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialDebugTools, USocialDebugTools::StaticClass, TEXT("USocialDebugTools"), &Z_Registration_Info_UClass_USocialDebugTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialDebugTools), 11053171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_1434661113(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
