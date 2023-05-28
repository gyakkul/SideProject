// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/UserWidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UUserWidgetBlueprint::StaticRegisterNativesUUserWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetBlueprint);
	UClass* Z_Construct_UClass_UUserWidgetBlueprint_NoRegister()
	{
		return UUserWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/UserWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetBlueprint_Statics::ClassParams = {
		&UUserWidgetBlueprint::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUserWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UUserWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserWidgetBlueprint.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUserWidgetBlueprint>()
	{
		return UUserWidgetBlueprint::StaticClass();
	}
	UUserWidgetBlueprint::UUserWidgetBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetBlueprint);
	UUserWidgetBlueprint::~UUserWidgetBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetBlueprint, UUserWidgetBlueprint::StaticClass, TEXT("UUserWidgetBlueprint"), &Z_Registration_Info_UClass_UUserWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetBlueprint), 2041324016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_4139048488(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
