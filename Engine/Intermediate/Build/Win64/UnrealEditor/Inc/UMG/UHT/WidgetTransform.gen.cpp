// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/WidgetTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTransform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetTransform;
class UScriptStruct* FWidgetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTransform, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetTransform"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetTransform.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetTransform>()
{
	return FWidgetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the standard transformation of a widget\n */" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "Describes the standard transformation of a widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The amount to translate the widget in slate units */" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The amount to translate the widget in slate units" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTransform, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The scale to apply to the widget */" },
		{ "Delta", "0.05" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The scale to apply to the widget" },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTransform, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData[] = {
		{ "Category", "Transform" },
		{ "ClampMax", "89" },
		{ "ClampMin", "-89" },
		{ "Comment", "/** The amount to shear the widget in slate units */" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The amount to shear the widget in slate units" },
		{ "UIMax", "89" },
		{ "UIMin", "-89" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTransform, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The angle in degrees to rotate */" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The angle in degrees to rotate" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTransform, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetTransform",
		sizeof(FWidgetTransform),
		alignof(FWidgetTransform),
		Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetTransform.InnerSingleton, Z_Construct_UScriptStruct_FWidgetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h_Statics::ScriptStructInfo[] = {
		{ FWidgetTransform::StaticStruct, Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewStructOps, TEXT("WidgetTransform"), &Z_Registration_Info_UScriptStruct_WidgetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetTransform), 3556925779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h_1834850064(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_WidgetTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
