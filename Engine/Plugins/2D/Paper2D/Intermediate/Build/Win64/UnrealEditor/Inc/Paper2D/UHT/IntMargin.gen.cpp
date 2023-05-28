// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntMargin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntMargin() {}
// Cross Module References
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntMargin;
class UScriptStruct* FIntMargin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntMargin, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("IntMargin"));
	}
	return Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FIntMargin>()
{
	return FIntMargin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntMargin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the space around a 2D area on an integer grid.\n */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Describes the space around a 2D area on an integer grid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntMargin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntMargin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the left. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the left." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntMargin, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the top. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the top." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntMargin, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the right. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the right." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntMargin, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the bottom. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the bottom." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntMargin, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntMargin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"IntMargin",
		sizeof(FIntMargin),
		alignof(FIntMargin),
		Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntMargin()
	{
		if (!Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton, Z_Construct_UScriptStruct_FIntMargin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics::ScriptStructInfo[] = {
		{ FIntMargin::StaticStruct, Z_Construct_UScriptStruct_FIntMargin_Statics::NewStructOps, TEXT("IntMargin"), &Z_Registration_Info_UScriptStruct_IntMargin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntMargin), 172439931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_2196648446(TEXT("/Script/Paper2D"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
