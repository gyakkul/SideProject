// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/ObjectChooser_Asset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectChooser_Asset() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetChooser();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FAssetChooser>() == std::is_polymorphic<FObjectChooserBase>(), "USTRUCT FAssetChooser cannot be polymorphic unless super FObjectChooserBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetChooser;
class UScriptStruct* FAssetChooser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetChooser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetChooser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetChooser, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("AssetChooser"));
	}
	return Z_Registration_Info_UScriptStruct_AssetChooser.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FAssetChooser>()
{
	return FAssetChooser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetChooser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetChooser_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Asset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetChooser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetChooser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetChooser_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Asset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAssetChooser_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetChooser, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetChooser_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetChooser_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetChooser_Statics::NewProp_Asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetChooser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FObjectChooserBase,
		&NewStructOps,
		"AssetChooser",
		sizeof(FAssetChooser),
		alignof(FAssetChooser),
		Z_Construct_UScriptStruct_FAssetChooser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetChooser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetChooser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetChooser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetChooser()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetChooser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetChooser.InnerSingleton, Z_Construct_UScriptStruct_FAssetChooser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetChooser.InnerSingleton;
	}
	void UDEPRECATED_ObjectChooser_Asset::StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ObjectChooser_Asset);
	UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_NoRegister()
	{
		return UDEPRECATED_ObjectChooser_Asset::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// deprecated class for upgrading old data\n" },
		{ "IncludePath", "ObjectChooser_Asset.h" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Asset.h" },
		{ "ToolTip", "deprecated class for upgrading old data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Asset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ObjectChooser_Asset, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::NewProp_Asset,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObjectChooser_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ObjectChooser_Asset, IObjectChooser), false },  // 2307402721
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ObjectChooser_Asset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::ClassParams = {
		&UDEPRECATED_ObjectChooser_Asset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ObjectChooser_Asset>()
	{
		return UDEPRECATED_ObjectChooser_Asset::StaticClass();
	}
	UDEPRECATED_ObjectChooser_Asset::UDEPRECATED_ObjectChooser_Asset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ObjectChooser_Asset);
	UDEPRECATED_ObjectChooser_Asset::~UDEPRECATED_ObjectChooser_Asset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ScriptStructInfo[] = {
		{ FAssetChooser::StaticStruct, Z_Construct_UScriptStruct_FAssetChooser_Statics::NewStructOps, TEXT("AssetChooser"), &Z_Registration_Info_UScriptStruct_AssetChooser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetChooser), 2007468236U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset, UDEPRECATED_ObjectChooser_Asset::StaticClass, TEXT("UDEPRECATED_ObjectChooser_Asset"), &Z_Registration_Info_UClass_UDEPRECATED_ObjectChooser_Asset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ObjectChooser_Asset), 3456377830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_544521511(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
