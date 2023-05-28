// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMargin() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Margin;
class UScriptStruct* FMargin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Margin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Margin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMargin, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("Margin"));
	}
	return Z_Registration_Info_UScriptStruct_Margin.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FMargin>()
{
	return FMargin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMargin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the space around a Widget.\n */" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Describes the space around a Widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMargin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMargin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the left. */" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the left." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMargin, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the top. */" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the top." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMargin, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the right. */" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the right." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMargin, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the bottom. */" },
		{ "ModuleRelativePath", "Public/Layout/Margin.h" },
		{ "ToolTip", "Holds the margin to the bottom." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMargin, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin_Statics::NewProp_Bottom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMargin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"Margin",
		sizeof(FMargin),
		alignof(FMargin),
		Z_Construct_UScriptStruct_FMargin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMargin()
	{
		if (!Z_Registration_Info_UScriptStruct_Margin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Margin.InnerSingleton, Z_Construct_UScriptStruct_FMargin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Margin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Margin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Margin_h_Statics::ScriptStructInfo[] = {
		{ FMargin::StaticStruct, Z_Construct_UScriptStruct_FMargin_Statics::NewStructOps, TEXT("Margin"), &Z_Registration_Info_UScriptStruct_Margin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMargin), 2014822612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Margin_h_332630287(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Margin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Margin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
