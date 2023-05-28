// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageActor/IDisplayClusterStageActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDisplayClusterStageActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLightCardExtender();
// End Cross Module References
	void UDisplayClusterStageActor::StaticRegisterNativesUDisplayClusterStageActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterStageActor);
	UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister()
	{
		return UDisplayClusterStageActor::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterStageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterStageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardExtender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageActor_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/StageActor/IDisplayClusterStageActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterStageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDisplayClusterStageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterStageActor_Statics::ClassParams = {
		&UDisplayClusterStageActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterStageActor()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterStageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterStageActor.OuterSingleton, Z_Construct_UClass_UDisplayClusterStageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterStageActor.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* StaticClass<UDisplayClusterStageActor>()
	{
		return UDisplayClusterStageActor::StaticClass();
	}
	UDisplayClusterStageActor::UDisplayClusterStageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterStageActor);
	UDisplayClusterStageActor::~UDisplayClusterStageActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterStageActor, UDisplayClusterStageActor::StaticClass, TEXT("UDisplayClusterStageActor"), &Z_Registration_Info_UClass_UDisplayClusterStageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterStageActor), 1221229347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_3400047357(TEXT("/Script/DisplayClusterLightCardExtender"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_IDisplayClusterStageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
