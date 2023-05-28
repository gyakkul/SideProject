// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/FTextCrash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTextCrash() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UFTextCrash();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UFTextCrash_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NUTUnrealEngine();
// End Cross Module References
	void UFTextCrash::StaticRegisterNativesUFTextCrash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFTextCrash);
	UClass* Z_Construct_UClass_UFTextCrash_NoRegister()
	{
		return UFTextCrash::StaticClass();
	}
	struct Z_Construct_UClass_UFTextCrash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFTextCrash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClientUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NUTUnrealEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFTextCrash_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tests an RPC crash caused by empty FText's, as reported on the UDN here:\n * https://udn.unrealengine.com/questions/213120/using-empty-ftexts-within-rpcs.html\n *\n * UDN Post: \"Using Empty FTexts within RPCs\"\n * Hey,\n * we're using FTexts within RPCs functions (server -> client in my specific case) to pass localized strings.\n * That works fine until the point when the server sends an empty FText.\n * In that case both the FText members SourceString and DisplayString are null on client side which lead to crashes whenever you use\n * something like ToString which assumes those are valid.\n *\n * Is this the intended behavior? I'm using FTextInspector::GetSourceString(text) to run checks on these replicated FTexts now to catch\n * this case. FTexts that are not empty work just fine.\n *\n * Thanks, Oliver\n */" },
		{ "IncludePath", "UnitTests/FTextCrash.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/FTextCrash.h" },
		{ "ToolTip", "Tests an RPC crash caused by empty FText's, as reported on the UDN here:\nhttps://udn.unrealengine.com/questions/213120/using-empty-ftexts-within-rpcs.html\n\nUDN Post: \"Using Empty FTexts within RPCs\"\nHey,\nwe're using FTexts within RPCs functions (server -> client in my specific case) to pass localized strings.\nThat works fine until the point when the server sends an empty FText.\nIn that case both the FText members SourceString and DisplayString are null on client side which lead to crashes whenever you use\nsomething like ToString which assumes those are valid.\n\nIs this the intended behavior? I'm using FTextInspector::GetSourceString(text) to run checks on these replicated FTexts now to catch\nthis case. FTexts that are not empty work just fine.\n\nThanks, Oliver" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFTextCrash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFTextCrash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFTextCrash_Statics::ClassParams = {
		&UFTextCrash::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFTextCrash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFTextCrash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFTextCrash()
	{
		if (!Z_Registration_Info_UClass_UFTextCrash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFTextCrash.OuterSingleton, Z_Construct_UClass_UFTextCrash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFTextCrash.OuterSingleton;
	}
	template<> NUTUNREALENGINE_API UClass* StaticClass<UFTextCrash>()
	{
		return UFTextCrash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFTextCrash);
	UFTextCrash::~UFTextCrash() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_FTextCrash_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_FTextCrash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFTextCrash, UFTextCrash::StaticClass, TEXT("UFTextCrash"), &Z_Registration_Info_UClass_UFTextCrash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFTextCrash), 4262477326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_FTextCrash_h_2553572731(TEXT("/Script/NUTUnrealEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_FTextCrash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_FTextCrash_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
