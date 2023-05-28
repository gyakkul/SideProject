// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/MediaProfileFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaProfileFactoryNew() {}
// Cross Module References
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaProfileFactoryNew();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaProfileFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	void UMediaProfileFactoryNew::StaticRegisterNativesUMediaProfileFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaProfileFactoryNew);
	UClass* Z_Construct_UClass_UMediaProfileFactoryNew_NoRegister()
	{
		return UMediaProfileFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMediaProfileFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaProfileFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UMediaProfileFactoryNew objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MediaProfileFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/MediaProfileFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UMediaProfileFactoryNew objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaProfileFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaProfileFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaProfileFactoryNew_Statics::ClassParams = {
		&UMediaProfileFactoryNew::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaProfileFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaProfileFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMediaProfileFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaProfileFactoryNew.OuterSingleton, Z_Construct_UClass_UMediaProfileFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaProfileFactoryNew.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaProfileFactoryNew>()
	{
		return UMediaProfileFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaProfileFactoryNew);
	UMediaProfileFactoryNew::~UMediaProfileFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaProfileFactoryNew, UMediaProfileFactoryNew::StaticClass, TEXT("UMediaProfileFactoryNew"), &Z_Registration_Info_UClass_UMediaProfileFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaProfileFactoryNew), 2907114625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_1959724428(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_MediaProfileFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
