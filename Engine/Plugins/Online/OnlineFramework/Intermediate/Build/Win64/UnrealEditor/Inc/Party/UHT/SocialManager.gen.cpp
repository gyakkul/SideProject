// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PARTY_API UClass* Z_Construct_UClass_USocialDebugTools_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialManager();
	PARTY_API UClass* Z_Construct_UClass_USocialManager_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialToolkit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	void USocialManager::StaticRegisterNativesUSocialManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialManager);
	UClass* Z_Construct_UClass_USocialManager_NoRegister()
	{
		return USocialManager::StaticClass();
	}
	struct Z_Construct_UClass_USocialManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SocialToolkits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocialToolkits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SocialToolkits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocialDebugTools_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SocialDebugTools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Singleton manager at the top of the social framework */" },
		{ "IncludePath", "SocialManager.h" },
		{ "ModuleRelativePath", "Public/SocialManager.h" },
		{ "ToolTip", "Singleton manager at the top of the social framework" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_Inner = { "SocialToolkits", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USocialToolkit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits = { "SocialToolkits", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialManager, SocialToolkits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools = { "SocialDebugTools", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialManager, SocialDebugTools), Z_Construct_UClass_USocialDebugTools_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialManager_Statics::ClassParams = {
		&USocialManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USocialManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocialManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialManager()
	{
		if (!Z_Registration_Info_UClass_USocialManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialManager.OuterSingleton, Z_Construct_UClass_USocialManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialManager.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialManager>()
	{
		return USocialManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialManager);
	USocialManager::~USocialManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialManager, USocialManager::StaticClass, TEXT("USocialManager"), &Z_Registration_Info_UClass_USocialManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialManager), 2527760290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_2654912108(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
