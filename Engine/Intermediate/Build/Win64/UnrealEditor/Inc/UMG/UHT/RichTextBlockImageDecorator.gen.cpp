// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockImageDecorator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRichImageRow();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

static_assert(std::is_polymorphic<FRichImageRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRichImageRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichImageRow;
class UScriptStruct* FRichImageRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichImageRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichImageRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichImageRow, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("RichImageRow"));
	}
	return Z_Registration_Info_UScriptStruct_RichImageRow.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRichImageRow>()
{
	return FRichImageRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRichImageRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Simple struct for rich text styles */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "ToolTip", "Simple struct for rich text styles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichImageRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichImageRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRichImageRow, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichImageRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichImageRow",
		sizeof(FRichImageRow),
		alignof(FRichImageRow),
		Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichImageRow()
	{
		if (!Z_Registration_Info_UScriptStruct_RichImageRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichImageRow.InnerSingleton, Z_Construct_UScriptStruct_FRichImageRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RichImageRow.InnerSingleton;
	}
	void URichTextBlockImageDecorator::StaticRegisterNativesURichTextBlockImageDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlockImageDecorator);
	UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister()
	{
		return URichTextBlockImageDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockImageDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImageSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockImageDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows you to setup an image decorator that can be configured\n * to map certain keys to certain images.  We recommend you subclass this\n * as a blueprint to configure the instance.\n *\n * Understands the format <img id=\"NameOfBrushInTable\"></>\n */" },
		{ "IncludePath", "Components/RichTextBlockImageDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows you to setup an image decorator that can be configured\nto map certain keys to certain images.  We recommend you subclass this\nas a blueprint to configure the instance.\n\nUnderstands the format <img id=\"NameOfBrushInTable\"></>" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/UMG.RichImageRow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet = { "ImageSet", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URichTextBlockImageDecorator, ImageSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockImageDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockImageDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockImageDecorator_Statics::ClassParams = {
		&URichTextBlockImageDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockImageDecorator()
	{
		if (!Z_Registration_Info_UClass_URichTextBlockImageDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlockImageDecorator.OuterSingleton, Z_Construct_UClass_URichTextBlockImageDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URichTextBlockImageDecorator.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<URichTextBlockImageDecorator>()
	{
		return URichTextBlockImageDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockImageDecorator);
	URichTextBlockImageDecorator::~URichTextBlockImageDecorator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ScriptStructInfo[] = {
		{ FRichImageRow::StaticStruct, Z_Construct_UScriptStruct_FRichImageRow_Statics::NewStructOps, TEXT("RichImageRow"), &Z_Registration_Info_UScriptStruct_RichImageRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichImageRow), 3380848529U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlockImageDecorator, URichTextBlockImageDecorator::StaticClass, TEXT("URichTextBlockImageDecorator"), &Z_Registration_Info_UClass_URichTextBlockImageDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlockImageDecorator), 1292732282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_1217333590(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
