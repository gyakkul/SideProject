// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeGameMode();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeGameMode_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeToolset_NoRegister();
// End Cross Module References
	void AXRCreativeGameMode::StaticRegisterNativesAXRCreativeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeGameMode);
	UClass* Z_Construct_UClass_AXRCreativeGameMode_NoRegister()
	{
		return AXRCreativeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolsetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ToolsetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "XRCreativeGameMode.h" },
		{ "ModuleRelativePath", "Public/XRCreativeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeGameMode_Statics::NewProp_ToolsetClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeGameMode.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AXRCreativeGameMode_Statics::NewProp_ToolsetClass = { "ToolsetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeGameMode, ToolsetClass), Z_Construct_UClass_UXRCreativeToolset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeGameMode_Statics::NewProp_ToolsetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeGameMode_Statics::NewProp_ToolsetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXRCreativeGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeGameMode_Statics::NewProp_ToolsetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeGameMode_Statics::ClassParams = {
		&AXRCreativeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXRCreativeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeGameMode()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeGameMode.OuterSingleton, Z_Construct_UClass_AXRCreativeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeGameMode.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeGameMode>()
	{
		return AXRCreativeGameMode::StaticClass();
	}
	AXRCreativeGameMode::AXRCreativeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeGameMode);
	AXRCreativeGameMode::~AXRCreativeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AXRCreativeGameMode, AXRCreativeGameMode::StaticClass, TEXT("AXRCreativeGameMode"), &Z_Registration_Info_UClass_AXRCreativeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeGameMode), 70531680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_840431047(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
