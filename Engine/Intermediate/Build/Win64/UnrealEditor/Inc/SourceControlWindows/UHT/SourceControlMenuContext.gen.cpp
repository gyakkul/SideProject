// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceControlMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOURCECONTROLWINDOWS_API UClass* Z_Construct_UClass_USourceControlMenuContext();
	SOURCECONTROLWINDOWS_API UClass* Z_Construct_UClass_USourceControlMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceControlWindows();
// End Cross Module References
	void USourceControlMenuContext::StaticRegisterNativesUSourceControlMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceControlMenuContext);
	UClass* Z_Construct_UClass_USourceControlMenuContext_NoRegister()
	{
		return USourceControlMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USourceControlMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceControlMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceControlWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlMenuContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Source control window menu context providing information for menu extenders.\n */" },
		{ "IncludePath", "SourceControlMenuContext.h" },
		{ "ModuleRelativePath", "Public/SourceControlMenuContext.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Source control window menu context providing information for menu extenders." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles_Inner = { "SelectedFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/SourceControlMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles = { "SelectedFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceControlMenuContext, SelectedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceControlMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlMenuContext_Statics::NewProp_SelectedFiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceControlMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceControlMenuContext_Statics::ClassParams = {
		&USourceControlMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USourceControlMenuContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlMenuContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceControlMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceControlMenuContext()
	{
		if (!Z_Registration_Info_UClass_USourceControlMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceControlMenuContext.OuterSingleton, Z_Construct_UClass_USourceControlMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceControlMenuContext.OuterSingleton;
	}
	template<> SOURCECONTROLWINDOWS_API UClass* StaticClass<USourceControlMenuContext>()
	{
		return USourceControlMenuContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlMenuContext);
	USourceControlMenuContext::~USourceControlMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Public_SourceControlMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Public_SourceControlMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceControlMenuContext, USourceControlMenuContext::StaticClass, TEXT("USourceControlMenuContext"), &Z_Registration_Info_UClass_USourceControlMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceControlMenuContext), 2582759634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Public_SourceControlMenuContext_h_1605029739(TEXT("/Script/SourceControlWindows"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Public_SourceControlMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Public_SourceControlMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
