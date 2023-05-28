// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUIRichTextData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIRichTextData() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextIconData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References

static_assert(std::is_polymorphic<FRichTextIconData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRichTextIconData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichTextIconData;
class UScriptStruct* FRichTextIconData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichTextIconData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichTextIconData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextIconData, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("RichTextIconData"));
	}
	return Z_Registration_Info_UScriptStruct_RichTextIconData.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FRichTextIconData>()
{
	return FRichTextIconData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRichTextIconData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ResourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextIconData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "RichText Icon" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRichTextIconData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "Category", "RichText Icon" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayName", "Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRichTextIconData, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData[] = {
		{ "Category", "RichText Icon" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRichTextIconData, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextIconData",
		sizeof(FRichTextIconData),
		alignof(FRichTextIconData),
		Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextIconData()
	{
		if (!Z_Registration_Info_UScriptStruct_RichTextIconData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichTextIconData.InnerSingleton, Z_Construct_UScriptStruct_FRichTextIconData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RichTextIconData.InnerSingleton;
	}
	void UCommonUIRichTextData::StaticRegisterNativesUCommonUIRichTextData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIRichTextData);
	UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister()
	{
		return UCommonUIRichTextData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIRichTextData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineIconSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InlineIconSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIRichTextData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "Comment", "/* Derive from this class for rich text data per game\n * it is referenced in Common UI Settings, found in project settings UI\n */" },
		{ "IncludePath", "CommonUIRichTextData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
		{ "ToolTip", "Derive from this class for rich text data per game\n* it is referenced in Common UI Settings, found in project settings UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData[] = {
		{ "Category", "Inline Icons" },
		{ "ModuleRelativePath", "Public/CommonUIRichTextData.h" },
		{ "RowType", "/Script/CommonUI.RichTextIconData" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet = { "InlineIconSet", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIRichTextData, InlineIconSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIRichTextData_Statics::NewProp_InlineIconSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIRichTextData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIRichTextData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIRichTextData_Statics::ClassParams = {
		&UCommonUIRichTextData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIRichTextData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIRichTextData()
	{
		if (!Z_Registration_Info_UClass_UCommonUIRichTextData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIRichTextData.OuterSingleton, Z_Construct_UClass_UCommonUIRichTextData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIRichTextData.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUIRichTextData>()
	{
		return UCommonUIRichTextData::StaticClass();
	}
	UCommonUIRichTextData::UCommonUIRichTextData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIRichTextData);
	UCommonUIRichTextData::~UCommonUIRichTextData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ScriptStructInfo[] = {
		{ FRichTextIconData::StaticStruct, Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewStructOps, TEXT("RichTextIconData"), &Z_Registration_Info_UScriptStruct_RichTextIconData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichTextIconData), 3043894770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIRichTextData, UCommonUIRichTextData::StaticClass, TEXT("UCommonUIRichTextData"), &Z_Registration_Info_UClass_UCommonUIRichTextData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIRichTextData), 786570987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_1590528161(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIRichTextData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
