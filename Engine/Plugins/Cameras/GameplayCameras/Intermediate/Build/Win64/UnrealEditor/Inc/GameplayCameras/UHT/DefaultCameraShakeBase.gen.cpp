// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultCameraShakeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultCameraShakeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultCameraShakeBase();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultCameraShakeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	void UDefaultCameraShakeBase::StaticRegisterNativesUDefaultCameraShakeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultCameraShakeBase);
	UClass* Z_Construct_UClass_UDefaultCameraShakeBase_NoRegister()
	{
		return UDefaultCameraShakeBase::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultCameraShakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultCameraShakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Like UCameraShakeBase but with a perlin noise shake pattern by default, for convenience.\n */" },
		{ "IncludePath", "DefaultCameraShakeBase.h" },
		{ "ModuleRelativePath", "Public/DefaultCameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Like UCameraShakeBase but with a perlin noise shake pattern by default, for convenience." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultCameraShakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultCameraShakeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultCameraShakeBase_Statics::ClassParams = {
		&UDefaultCameraShakeBase::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultCameraShakeBase()
	{
		if (!Z_Registration_Info_UClass_UDefaultCameraShakeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultCameraShakeBase.OuterSingleton, Z_Construct_UClass_UDefaultCameraShakeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultCameraShakeBase.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDefaultCameraShakeBase>()
	{
		return UDefaultCameraShakeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultCameraShakeBase);
	UDefaultCameraShakeBase::~UDefaultCameraShakeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_DefaultCameraShakeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_DefaultCameraShakeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultCameraShakeBase, UDefaultCameraShakeBase::StaticClass, TEXT("UDefaultCameraShakeBase"), &Z_Registration_Info_UClass_UDefaultCameraShakeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultCameraShakeBase), 1243197476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_DefaultCameraShakeBase_h_105953148(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_DefaultCameraShakeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_DefaultCameraShakeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
