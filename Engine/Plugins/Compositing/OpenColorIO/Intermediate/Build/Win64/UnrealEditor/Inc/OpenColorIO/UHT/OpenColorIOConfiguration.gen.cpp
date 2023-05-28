// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOConfiguration.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOConfiguration() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOConfiguration();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorSpace();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayView();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	DEFINE_FUNCTION(UOpenColorIOConfiguration::execReloadExistingColorspaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadExistingColorspaces();
		P_NATIVE_END;
	}
	void UOpenColorIOConfiguration::StaticRegisterNativesUOpenColorIOConfiguration()
	{
		UClass* Class = UOpenColorIOConfiguration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReloadExistingColorspaces", &UOpenColorIOConfiguration::execReloadExistingColorspaces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "/** This forces to reload colorspaces and corresponding shaders if those are not loaded already. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
		{ "ToolTip", "This forces to reload colorspaces and corresponding shaders if those are not loaded already." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIOConfiguration, nullptr, "ReloadExistingColorspaces", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOConfiguration);
	UClass* Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister()
	{
		return UOpenColorIOConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigurationFile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredColorSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredColorSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredColorSpaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredDisplayViews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredDisplayViews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredDisplayViews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenColorIOConfiguration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenColorIOConfiguration_ReloadExistingColorspaces, "ReloadExistingColorspaces" }, // 1655330906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfiguration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset to manage allowed OpenColorIO color spaces. This will create required transform objects.\n */" },
		{ "IncludePath", "OpenColorIOConfiguration.h" },
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Asset to manage allowed OpenColorIO color spaces. This will create required transform objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ConfigurationFile_MetaData[] = {
		{ "Category", "Config" },
		{ "FilePathFilter", "Config Files (*.ocio, *.ocioz)|*.ocio;*.ocioz" },
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
		{ "RelativeToGameDir", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ConfigurationFile = { "ConfigurationFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenColorIOConfiguration, ConfigurationFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ConfigurationFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ConfigurationFile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces_Inner = { "DesiredColorSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOpenColorIOColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2371464818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
		{ "OCIOConfigFile", "ConfigurationFile" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces = { "DesiredColorSpaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenColorIOConfiguration, DesiredColorSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces_MetaData)) }; // 2371464818
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews_Inner = { "DesiredDisplayViews", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOpenColorIODisplayView, METADATA_PARAMS(nullptr, 0) }; // 496537640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "DisplayName", "Desired Display-Views" },
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
		{ "OCIOConfigFile", "ConfigurationFile" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews = { "DesiredDisplayViews", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenColorIOConfiguration, DesiredDisplayViews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews_MetaData)) }; // 496537640
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms_Inner = { "ColorTransforms", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOpenColorIOColorTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenColorIOConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms = { "ColorTransforms", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenColorIOConfiguration, ColorTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenColorIOConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ConfigurationFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredColorSpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_DesiredDisplayViews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOConfiguration_Statics::NewProp_ColorTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOConfiguration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOConfiguration_Statics::ClassParams = {
		&UOpenColorIOConfiguration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenColorIOConfiguration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIOConfiguration()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton, Z_Construct_UClass_UOpenColorIOConfiguration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOConfiguration.OuterSingleton;
	}
	template<> OPENCOLORIO_API UClass* StaticClass<UOpenColorIOConfiguration>()
	{
		return UOpenColorIOConfiguration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOConfiguration);
	UOpenColorIOConfiguration::~UOpenColorIOConfiguration() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOConfiguration, UOpenColorIOConfiguration::StaticClass, TEXT("UOpenColorIOConfiguration"), &Z_Registration_Info_UClass_UOpenColorIOConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOConfiguration), 180921779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_1701490273(TEXT("/Script/OpenColorIO"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
