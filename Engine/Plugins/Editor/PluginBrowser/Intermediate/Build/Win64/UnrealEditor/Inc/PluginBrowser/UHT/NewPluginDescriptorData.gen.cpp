// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NewPluginDescriptorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewPluginDescriptorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLUGINBROWSER_API UClass* Z_Construct_UClass_UNewPluginDescriptorData();
	PLUGINBROWSER_API UClass* Z_Construct_UClass_UNewPluginDescriptorData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PluginBrowser();
// End Cross Module References
	void UNewPluginDescriptorData::StaticRegisterNativesUNewPluginDescriptorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewPluginDescriptorData);
	UClass* Z_Construct_UClass_UNewPluginDescriptorData_NoRegister()
	{
		return UNewPluginDescriptorData::StaticClass();
	}
	struct Z_Construct_UClass_UNewPluginDescriptorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedByURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedByURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBetaVersion_MetaData[];
#endif
		static void NewProp_bIsBetaVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBetaVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewPluginDescriptorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewPluginDescriptorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An object used internally by the New Plugin Wizard to set user-defined plugin descriptor information.\n * This should not be used outside of the New Plugin Wizard dialog\n */" },
		{ "IncludePath", "NewPluginDescriptorData.h" },
		{ "ModuleRelativePath", "Private/NewPluginDescriptorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An object used internally by the New Plugin Wizard to set user-defined plugin descriptor information.\nThis should not be used outside of the New Plugin Wizard dialog" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedBy_MetaData[] = {
		{ "Category", "Descriptor Data" },
		{ "Comment", "/** The author of this content */" },
		{ "DisplayName", "Author" },
		{ "ModuleRelativePath", "Private/NewPluginDescriptorData.h" },
		{ "ToolTip", "The author of this content" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedBy = { "CreatedBy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewPluginDescriptorData, CreatedBy), METADATA_PARAMS(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedByURL_MetaData[] = {
		{ "Category", "Descriptor Data" },
		{ "Comment", "/** Optional hyperlink for the author's website  */" },
		{ "DisplayName", "Author URL" },
		{ "ModuleRelativePath", "Private/NewPluginDescriptorData.h" },
		{ "ToolTip", "Optional hyperlink for the author's website" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedByURL = { "CreatedByURL", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewPluginDescriptorData, CreatedByURL), METADATA_PARAMS(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedByURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedByURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Descriptor Data" },
		{ "Comment", "/** A description for this content */" },
		{ "ModuleRelativePath", "Private/NewPluginDescriptorData.h" },
		{ "ToolTip", "A description for this content" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewPluginDescriptorData, Description), METADATA_PARAMS(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion_MetaData[] = {
		{ "Category", "Descriptor Data" },
		{ "Comment", "/** Marks this content as being in beta */" },
		{ "ModuleRelativePath", "Private/NewPluginDescriptorData.h" },
		{ "ToolTip", "Marks this content as being in beta" },
	};
#endif
	void Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion_SetBit(void* Obj)
	{
		((UNewPluginDescriptorData*)Obj)->bIsBetaVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion = { "bIsBetaVersion", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNewPluginDescriptorData), &Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewPluginDescriptorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_CreatedByURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewPluginDescriptorData_Statics::NewProp_bIsBetaVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewPluginDescriptorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewPluginDescriptorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewPluginDescriptorData_Statics::ClassParams = {
		&UNewPluginDescriptorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNewPluginDescriptorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewPluginDescriptorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewPluginDescriptorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewPluginDescriptorData()
	{
		if (!Z_Registration_Info_UClass_UNewPluginDescriptorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewPluginDescriptorData.OuterSingleton, Z_Construct_UClass_UNewPluginDescriptorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewPluginDescriptorData.OuterSingleton;
	}
	template<> PLUGINBROWSER_API UClass* StaticClass<UNewPluginDescriptorData>()
	{
		return UNewPluginDescriptorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewPluginDescriptorData);
	UNewPluginDescriptorData::~UNewPluginDescriptorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_NewPluginDescriptorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_NewPluginDescriptorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewPluginDescriptorData, UNewPluginDescriptorData::StaticClass, TEXT("UNewPluginDescriptorData"), &Z_Registration_Info_UClass_UNewPluginDescriptorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewPluginDescriptorData), 797699876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_NewPluginDescriptorData_h_3196509972(TEXT("/Script/PluginBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_NewPluginDescriptorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_NewPluginDescriptorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
