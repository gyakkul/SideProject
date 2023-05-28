// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlayerProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerProxyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UMediaPlayerProxyInterface::StaticRegisterNativesUMediaPlayerProxyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerProxyInterface);
	UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister()
	{
		return UMediaPlayerProxyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerProxyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaPlayerProxyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMediaPlayerProxyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::ClassParams = {
		&UMediaPlayerProxyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerProxyInterface()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton, Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaPlayerProxyInterface>()
	{
		return UMediaPlayerProxyInterface::StaticClass();
	}
	UMediaPlayerProxyInterface::UMediaPlayerProxyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerProxyInterface);
	UMediaPlayerProxyInterface::~UMediaPlayerProxyInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerProxyInterface, UMediaPlayerProxyInterface::StaticClass, TEXT("UMediaPlayerProxyInterface"), &Z_Registration_Info_UClass_UMediaPlayerProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerProxyInterface), 921733538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_3589764474(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
