// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Debug/DebugDrawService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDrawService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDebugDrawService::StaticRegisterNativesUDebugDrawService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugDrawService);
	UClass* Z_Construct_UClass_UDebugDrawService_NoRegister()
	{
		return UDebugDrawService::StaticClass();
	}
	struct Z_Construct_UClass_UDebugDrawService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugDrawService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/DebugDrawService.h" },
		{ "ModuleRelativePath", "Classes/Debug/DebugDrawService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugDrawService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugDrawService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugDrawService_Statics::ClassParams = {
		&UDebugDrawService::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugDrawService()
	{
		if (!Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton, Z_Construct_UClass_UDebugDrawService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugDrawService.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDebugDrawService>()
	{
		return UDebugDrawService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugDrawService);
	UDebugDrawService::~UDebugDrawService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugDrawService, UDebugDrawService::StaticClass, TEXT("UDebugDrawService"), &Z_Registration_Info_UClass_UDebugDrawService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugDrawService), 1451901544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_2435926130(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
