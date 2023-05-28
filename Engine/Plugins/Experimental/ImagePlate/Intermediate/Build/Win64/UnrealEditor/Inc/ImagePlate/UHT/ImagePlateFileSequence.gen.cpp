// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImagePlateFileSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImagePlateFileSequence() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFileSequence();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFileSequence_NoRegister();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateSettings();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImagePlate();
// End Cross Module References
	void UImagePlateSettings::StaticRegisterNativesUImagePlateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImagePlateSettings);
	UClass* Z_Construct_UClass_UImagePlateSettings_NoRegister()
	{
		return UImagePlateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UImagePlateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProxyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImagePlateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the ImagePlate plugin.\n*/" },
		{ "IncludePath", "ImagePlateFileSequence.h" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ToolTip", "Implements the settings for the ImagePlate plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateSettings_Statics::NewProp_ProxyName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specifies a sub-directory to append to any image plate file sequences */" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ToolTip", "Specifies a sub-directory to append to any image plate file sequences" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImagePlateSettings_Statics::NewProp_ProxyName = { "ProxyName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateSettings, ProxyName), METADATA_PARAMS(Z_Construct_UClass_UImagePlateSettings_Statics::NewProp_ProxyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateSettings_Statics::NewProp_ProxyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImagePlateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateSettings_Statics::NewProp_ProxyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImagePlateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImagePlateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImagePlateSettings_Statics::ClassParams = {
		&UImagePlateSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImagePlateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UImagePlateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImagePlateSettings()
	{
		if (!Z_Registration_Info_UClass_UImagePlateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImagePlateSettings.OuterSingleton, Z_Construct_UClass_UImagePlateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImagePlateSettings.OuterSingleton;
	}
	template<> IMAGEPLATE_API UClass* StaticClass<UImagePlateSettings>()
	{
		return UImagePlateSettings::StaticClass();
	}
	UImagePlateSettings::UImagePlateSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImagePlateSettings);
	UImagePlateSettings::~UImagePlateSettings() {}
	void UImagePlateFileSequence::StaticRegisterNativesUImagePlateFileSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImagePlateFileSequence);
	UClass* Z_Construct_UClass_UImagePlateFileSequence_NoRegister()
	{
		return UImagePlateFileSequence::StaticClass();
	}
	struct Z_Construct_UClass_UImagePlateFileSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileWildcard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileWildcard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Framerate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Framerate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImagePlateFileSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateFileSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImagePlateFileSequence.h" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_SequencePath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Path to the directory in which the image sequence resides */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ToolTip", "Path to the directory in which the image sequence resides" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateFileSequence, SequencePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_SequencePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_FileWildcard_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Wildcard used to find images within the directory (ie *.exr) */" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ToolTip", "Wildcard used to find images within the directory (ie *.exr)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_FileWildcard = { "FileWildcard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateFileSequence, FileWildcard), METADATA_PARAMS(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_FileWildcard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_FileWildcard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_Framerate_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Framerate at which to display the images */" },
		{ "ModuleRelativePath", "Public/ImagePlateFileSequence.h" },
		{ "ToolTip", "Framerate at which to display the images" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_Framerate = { "Framerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateFileSequence, Framerate), METADATA_PARAMS(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_Framerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_Framerate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImagePlateFileSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_SequencePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_FileWildcard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateFileSequence_Statics::NewProp_Framerate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImagePlateFileSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImagePlateFileSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImagePlateFileSequence_Statics::ClassParams = {
		&UImagePlateFileSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImagePlateFileSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFileSequence_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImagePlateFileSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateFileSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImagePlateFileSequence()
	{
		if (!Z_Registration_Info_UClass_UImagePlateFileSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImagePlateFileSequence.OuterSingleton, Z_Construct_UClass_UImagePlateFileSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImagePlateFileSequence.OuterSingleton;
	}
	template<> IMAGEPLATE_API UClass* StaticClass<UImagePlateFileSequence>()
	{
		return UImagePlateFileSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImagePlateFileSequence);
	UImagePlateFileSequence::~UImagePlateFileSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateFileSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateFileSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImagePlateSettings, UImagePlateSettings::StaticClass, TEXT("UImagePlateSettings"), &Z_Registration_Info_UClass_UImagePlateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImagePlateSettings), 2991679518U) },
		{ Z_Construct_UClass_UImagePlateFileSequence, UImagePlateFileSequence::StaticClass, TEXT("UImagePlateFileSequence"), &Z_Registration_Info_UClass_UImagePlateFileSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImagePlateFileSequence), 3076962735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateFileSequence_h_213360568(TEXT("/Script/ImagePlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateFileSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateFileSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
