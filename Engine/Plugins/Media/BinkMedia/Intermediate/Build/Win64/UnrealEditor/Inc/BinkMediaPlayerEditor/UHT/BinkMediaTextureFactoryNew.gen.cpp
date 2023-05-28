// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BinkMediaTextureFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkMediaTextureFactoryNew() {}
// Cross Module References
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew();
	BINKMEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BinkMediaPlayerEditor();
// End Cross Module References
	void UBinkMediaTextureFactoryNew::StaticRegisterNativesUBinkMediaTextureFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinkMediaTextureFactoryNew);
	UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew_NoRegister()
	{
		return UBinkMediaTextureFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialMediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialMediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BinkMediaTextureFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BinkMediaTextureFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/BinkMediaTextureFactoryNew.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer = { "InitialMediaPlayer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTextureFactoryNew, InitialMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::NewProp_InitialMediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaTextureFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::ClassParams = {
		&UBinkMediaTextureFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBinkMediaTextureFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton, Z_Construct_UClass_UBinkMediaTextureFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew.OuterSingleton;
	}
	template<> BINKMEDIAPLAYEREDITOR_API UClass* StaticClass<UBinkMediaTextureFactoryNew>()
	{
		return UBinkMediaTextureFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaTextureFactoryNew);
	UBinkMediaTextureFactoryNew::~UBinkMediaTextureFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaTextureFactoryNew, UBinkMediaTextureFactoryNew::StaticClass, TEXT("UBinkMediaTextureFactoryNew"), &Z_Registration_Info_UClass_UBinkMediaTextureFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaTextureFactoryNew), 3655031656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h_3982561250(TEXT("/Script/BinkMediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayerEditor_Private_Factories_BinkMediaTextureFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
